#include"common.h"
#include <memory>
#include "svdpi.h"
// Include common routines
#include <verilated.h>
// include memcpy 
#include <string.h>
// Include model header, generated from Verilating "top.v"
#include "Vtop.h"
#include "Vtop__Dpi.h"
#include "verilated_dpi.h"
#include "iostream"
const char *regs[] = {
	"$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
	"s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
	"a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
	"s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
//全局变量pc dnpc crstate
int pc;
char logbuf[200];
int dnpc;
uint64_t udnpc;
int crstate;
int circle;
int space=0;
uint64_t upc;
extern void init_regex();
using namespace std;
//接受字节表的数组
extern Sy_table func;
Decode s;
//接收寄存器数组
uint64_t *cpu_gpr = NULL;
uint32_t watchpoint=-1;
extern int difftest_step();
static inline void host_write(void *addr, int len, uint64_t data) {
	switch (len) {
		case 1: *(uint8_t  *)addr = data; return;
		case 2: *(uint16_t *)addr = data; return;
		case 4: *(uint32_t *)addr = data; return;
		case 8: *(uint64_t *)addr = data; return;
	}
}
static void pmem_write(uint64_t addr, int len, uint64_t data) {
	  host_write(guest_to_host(addr), len, data);
}
static uint64_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
		case 8: return *(uint64_t *)addr;
    default:  assert(0);
  }
}
uint64_t pmem_read(uint32_t addr, int len) {
  uint64_t ret = host_read(guest_to_host(addr), len);
  return ret;
}
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
	  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void vpmem_read(long long raddr, long long *rdata) {
	  if((circle>=4)&&(circle%2==0)){
		// 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
		printf("raddr=%llx\n",raddr);
		*rdata=pmem_read(raddr,8);}
}
extern "C" void vpmem_write(long long waddr, long long wdata, char wmask) {
	int len;
	printf(RED"\nwaddr=%llx,wdata=%llx,wmask=%d\n"NONE,waddr,wdata,wmask);
	if(wmask==1)
		len=1;
	else if(wmask==3)
		len=2;
	else if(wmask==15)
		len=4;
	else if(wmask==-1)
		len=8;
	
	if((len==1)||(len==2)||(len==4)||(len==8))
		pmem_write(waddr,len,wdata);
	// 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
	// `wmask`中每比特表示`wdata`中1个字节的掩码,
	// 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
}
		       
void dump_gpr() {
	int i;
	for (i = 0; i < 32; i++) {
		printf("%s: ",regs[i]);
		printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
	}
}

static uint8_t pmem[1024*2*2]={0};
enum { NEMU_RUNNING, NEMU_STOP, NEMU_END, NEMU_ABORT, NEMU_QUIT };   
static int nemu_state=NEMU_RUNNING;
static int a0=0;
static int type;	
//通过内存地址书写原本地址
uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_BASE; }
//Legacy function required only so linking works on Cygwin and MSVC++
double sc_time_stamp() { return 0; }


//sdb
char str[40];
int exec_step=-1;
static int cmd_si(char *args) {
	char *arg2 = strtok(NULL, " ");
	exec_step=atoi(arg2);
	printf("exec_step=%d\n",exec_step);
	return 0;
}
static int cmd_x(char *args){
	char *N = strtok(NULL, " ");  
	bool success;
	int n=atoi(N);
	printf("achieve hre\n");
	char *EXPR=strtok(NULL," ");
	uint32_t expr1=(uint32_t)strtol(EXPR,NULL,16);
	printf("expr=%x\n",expr1);
	for(int i=0;i<n;i++){
		printf("dizhi=%u",expr1);
		uint64_t result=pmem_read(expr1+i*4,4);
		printf("addr=0x%x\n",expr1+i*4);
		printf("value=%lx\n",result);
	}
	return 0;
}
static int cmd_p(char *args) {
	  bool success;
		char *arg = strtok(NULL,"\0");

		printf("args=%s\n",arg);

		uint64_t result=expr(arg,&success);
		printf("the result is 0X%lx\n",result);
		

		//printf("success is %i",success);
		return 0;
}
static int cmd_w(char *args) {
	bool success;
	char *arg2 = strtok(NULL, " ");
	uint64_t result=expr(arg2,&success);    
	watchpoint=(uint32_t)result;
	printf("watchpoint=%x\n",watchpoint);
	return 0;
}
extern long img_size;
int main(int argc, char** argv, char** env) {
		init_regex();
		parse_args(argc,argv);
		printf("elf_file=%s\n",elf_file);
	  init_log(log_file);
		load_img(argc,argv);
		parse_elf(elf_file); 
		void init_disasm(const char *triple);
		init_disasm("riscv64");
	//	dump_gpr();
		for(int i=0;i<func.length;i++)
			printf("name=%s,begin=%lx,size=%ld\n",func.name[i],func.begin[i],func.size[i]);
		///////////////////////////////////////////////////////verilator//////
    // Prevent unused variable warnings
    if (false && argc && argv && env) {}
    // Create logs/ directory in case we have traces to put under it
    Verilated::mkdir("logs");
    // Construct a VerilatedContext to hold simulation time, etc.
    // Multiple modules (made later below with Vtop) may share the same
    // context to share time, or modules may have different contexts if
    // they should be independent from each other.

    // Using unique_ptr is similar to
    // "VerilatedContext* contextp = new VerilatedContext" then deleting at end.
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    // Set debug level, 0 is off, 9 is highest presently used
    // May be overridden by commandArgs argument parsing
    contextp->debug(0);
    // Randomization reset policy
    // May be overridden by commandArgs argument parsing
    contextp->randReset(2);
    // Verilator must compute traced signals
    contextp->traceEverOn(true);
    // Pass arguments so Verilated code can see them, e.g. $value$plusargs
    // This needs to be called before you create any model
    contextp->commandArgs(argc, argv);
    // Construct the Verilated model, from Vtop.h generated from Verilating "top.v".
    // Using unique_ptr is similar to "Vtop* top = new Vtop" then deleting at end.
    // "TOP" will be the hierarchical name of the module.
    const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "TOP"}};
    const svScope scope = svGetScopeFromName("TOP.top.de");
    assert(scope); // Check for nullptr if scope not found
    svSetScope(scope);
/////////////////////////////////////////////////////////////////////

    // Set Vtop's input signals
    top->rst = !0;
    top->clk = 0;
    top->cpupc=0x80000000;
    //top->in=0;
		char ftrace[1000][200];//代表ftrace语句
		char spacea[1000][200];
		int ftracelength;
    while (!contextp->gotFinish()) {
			  circle++;
			////////////////////////////////////////////////////////
				/*char str[20];*/
				/*int a=scanf("%s",str);*/
				/*printf("%s %d\n",str,a);*/
        // Historical note, before Verilator 4.200 Verilated::gotFinish()
        // was used above in place of contextp->gotFinish().
        // Most of the contextp-> calls can use Verilated:: calls instead;
        // the Verilated:: versions simply assume there's a single context
        // being used (per thread).  It's faster and clearer to use the
        // newer contextp-> versions.
        contextp->timeInc(1);  // 1 timeprecision period passes...
        // Historical note, before Verilator 4.200 a sc_time_stamp()
        // function was required instead of using timeInc.  Once timeInc()
        // is called (with non-zero), the Verilated libraries assume the
        // new API, and sc_time_stamp() will no longer work.
        // Toggle a fast (time/2 period) clock
        top->clk = !top->clk;
        //add read memory
        //printf("read dizhi =%x\n",guest_to_host(top->out));
        top->putstate(&nemu_state,&a0,&pc,&dnpc,&crstate,&type);
				upc=(uint64_t)pc&0xffffffff;
				udnpc=(uint64_t)dnpc&0xffffffff;
				//printf("pc=%x,dnpc=%x,state=%x",pc,dnpc,crstate);
				//printf("upc=%x\n",up);
				if(top->clk){
				if(crstate==1){
					  //printf("udnpc=%lx\n",udnpc);
						for (int j=0;j<func.length;j++){
							//printf("func.begin[j]=%lx",func.begin[j]);
							if((dnpc>=(int)func.begin[j])&&(dnpc<(int)func.begin[j]+func.size[j])){
								//log_write("%*s",space,"");	
								//printf(" %lx:  jal  ret %s\n",ftrace.left[i],func.name[j]);
								//log_write(" %x:    call %s(%x)\n",pc,func.name[j],dnpc);
								sprintf(spacea[ftracelength],"%*s",space,"");	
								sprintf(ftrace[ftracelength]," %x:    call %s(%x)\n",pc,func.name[j],dnpc);
								ftracelength++;
								space++;
								break;
							}
						}

					}
					if(crstate==2){
						for (int j=0;j<func.length;j++){
							if((pc>=(int)func.begin[j])&&(pc<(int)func.begin[j]+func.size[j])){
								space--;
								//log_write("%*s",space,"");	
								sprintf(spacea[ftracelength],"%*s",space,"");	
								sprintf(ftrace[ftracelength++]," %x:    ret %s(%x)\n",pc,func.name[j],dnpc);
								break;
							}
						}
					}}
//      top->put_state(nemu_state);
//      ///////////////////////////////////////////////////

        top->inst=pmem_read(top->cpupc,4);
				uint32_t instval=top->inst;
				//printf("the a0 is %d\n",top.de->Type);
				if(!top->clk){
        if(nemu_state)
        {   
						//printf("the register a0 is %d",a0);
						if(a0==0)
							printf(GREEN"\nHIT GOOD TAP\n"NONE);
						else
							printf(RED"\nHIT BAD TAP\n"NONE);
						break;
        }
				if(type==7)	{
					printf(YELLOW"%s is not have, please add\n"NONE,logbuf);
					break;}
				}
        //printf("read neirong =%x\n",pmem_read(top->cpupc,4));
        // Toggle control signals on an edge that doesn't correspond
        // to where the controls are sampled; in this example we do
        // this only on a negedge of clk, because we know
        // reset is not sampled there.

        if (!top->clk) {
            if (contextp->time() > 1 && contextp->time() < 3) {
                top->rst = !0;  // Assert reset
            } else {
                top->rst = !1;  // Deassert reset
            }
            // Assign some other inputs
            //top->in_quad += 0x12;
            //top->in=rand()%10;
        }
				///////////////////////difftest//////////////////////
				if(contextp->time()==4) 
					init_difftest(diff_so_file,img_size);
				if(!top->clk&&contextp->time()>4){
				  int check=difftest_step();		
					if(check==0){
						printf(RED"\ninst error at:%s\n"NONE,logbuf);
						break;}
				}
				///////////////////////////////////////////////////

				///////////////////////////////////////sdb//////////////////////////////////////////
			 if(((strcmp(str,"c")!=0)&&(exec_step==0))|contextp->time()==4|watchpoint==top->cpupc){	
				if(!top->clk){
XunHuan:
					printf("\nnpc:");
					cin.getline(str,20);
					//printf("str=%s\n",str);
					char *test;
					test=strtok(str," ");
					if(strcmp(test,"si")==0)
						cmd_si(test);
					else if(strcmp(test,"info")==0){
						dump_gpr();
						goto XunHuan;	
					}
					else if(strcmp(test,"x")==0){
						cmd_x(test);
						goto XunHuan;	
					}
					else if(strcmp(test,"w")==0){
						cmd_w(test);
						goto XunHuan;
					}
					else if(strcmp(test,"p")==0){
						cmd_p(test);
						goto XunHuan;
					}
					
				}
			
			 
			 }
				////////////////////////////////////////////////////////////////////////////////////
				//////////////////////////////////////ftrace//////////////////////
				if(!top->clk&&contextp->time()>=4){
			 int snpc=pc+4;
			 char *p = logbuf;
			 /*printf("zzzzzzzzzzzz%s\n",s->logbuf);*/
			 p += snprintf(p, sizeof(logbuf), "0x%016x  :", pc);
			 //printf("pperior=%s\n",p);
			 int ilen = snpc - pc;
			 int i;	
			 //printf("instval=%x\n",instval);
			 uint8_t *inst = (uint8_t *)&instval;
			 //printf("instval=%x\n",instval);
			 for (i = ilen - 1; i >= 0; i --) {
				 p+=snprintf(p, 4, " %02x", inst[i]);
			 }
			 //printf("pperior=%s\n",p);
			 //int ilen_max =  8;
			 int ilen_max = MUXDEF(1, 8, 4);
							//printf("ilen_max=%d",ilen_max);
			 int space_len = ilen_max - ilen;
			 if (space_len < 0) space_len = 0;
			 space_len = space_len * 3 + 1;
			 //printf("space_len=%d\n",space_len);
			 memset(p, ' ', space_len);
			 //printf("pspace=%s",p);
			 p += space_len;
			 
			 //printf("upc=%016lx",upc);


			 extern void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
			 disassemble(p, logbuf + sizeof(logbuf) - p,
					 MUXDEF(1, upc, upc), (uint8_t *)&instval,ilen);
			 log_write("%s\n",logbuf);
				}
			 //printf("achieve here");
				/////////////////////////////////////////////////////////////////
				if(!top->clk&&contextp->time()>=4)
				  exec_step--;
        // Evaluate model
        // (If you have multiple models being simulated in the same
        // timestep then instead of eval(), call eval_step() on each, then
        // eval_end_step() on each. See the manual.)
        top->eval();

        // Read outputs
        //VL_PRINTF("[%" VL_PRI64 "d] clk=%x rstl=%x iquad=%" VL_PRI64 "x"
        //          " -> oquad=%" VL_PRI64 "x owide=%x_%08x_%08x\n",
        //          contextp->time(), top->clk, top->reset_l, top->in_quad, top->out_quad,
        //          top->out_wide[2], top->out_wide[1], top->out_wide[0]);

        VL_PRINTF("[%" VL_PRI64 "d] clk=%x rst=%x  "
                  " -> out[31:0]=%x \n ",
                  contextp->time(), top->clk, top->rst, 
                  top->cpupc);
    }
		log_write("----------ftrace-----------\n");
		for(int i=0;i<ftracelength;i++){
			log_write("%s",spacea[i]);
			log_write("%s",ftrace[i]);}

    // Final model cleanup
    top->final();

    // Coverage analysis (calling write only after the test is known to pass)
#if VM_COVERAGE
    Verilated::mkdir("logs");
    contextp->coveragep()->write("logs/coverage.dat");
#endif
    // Return good completion status
    // Don't use exit() or destructor won't get called
    return 0;
}
