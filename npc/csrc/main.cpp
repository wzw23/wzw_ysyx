#include"common.h"
#include <memory>
#include "svdpi.h"
// Include common routines
#include <verilated.h>
int TEST=0; 
int DIFFTEST=0;
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
///////////////wzw add timer.c
static uint64_t boot_time = 0;

static uint64_t get_time_internal() {
  struct timeval now;
  gettimeofday(&now, NULL);
  uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
  return us;
}

uint64_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();
  uint64_t now = get_time_internal();
  return now - boot_time;
}
////////////////
//全局变量pc dnpc crstate skip_test
int skip_test=0;
char logbuf[200];
int npc_state=1;
//int dnpc;
uint64_t udnpc;
int crstate;
int circle;
uint64_t upc;
extern uint32_t key_dequeue();
extern void init_regex();
extern void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
extern void itrace_use(char *logbuf,uint64_t upc,uint32_t instval);
extern void init_device();
using namespace std;
//接受字节表的数组
extern Sy_table func;
Decode s;
//接收寄存器数组
uint64_t *cpu_gpr = NULL;
uint64_t *cpu_csr = NULL;
uint32_t watchpoint=-1;
extern int difftest_step();
void host_write(void *addr, int len, uint64_t data) {
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
extern "C" void set_csr_ptr(const svOpenArrayHandle r) {
	  cpu_csr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
uint32_t us_less;
uint32_t us_bigger;
extern "C" void vpmem_read(long long raddr, long long *rdata) {
		//printf("the raddr=%lx\n",raddr);
		//if((circle>=4)&&(circle%2==0)){
		// 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
		if(TEST){
		log_write("raddr=%llx\n",raddr);}
		if(raddr>=0x80000000&&raddr<=0x87ffffff){
		 *rdata=pmem_read(raddr,8);
			//printf("use pmem_read and the rdata=%lx\n",*rdata);
		}
		else	if(raddr==0xa000004c)
		{	
			if(TEST){
				log_write("use skip and the raddr=%lx\n",raddr);
			}
			uint64_t us=get_time(); 
			us_bigger=us>>32;
			us_less=(uint32_t)us;
			*rdata=us_bigger;
			skip_test=1;
			return;
		}
		else if(raddr==0xa0000100){
			if(TEST){
				log_write("use skip and the raddr=%lx\n",raddr);
			}
			*rdata=width_height();
			//printf("the width_high=%d\n",*rdata);
			skip_test=1;
			return;
		}
		else if(raddr==0xa0000048){
			if(TEST){
				log_write("use skip and the raddr=%lx\n",raddr);
			}
			*rdata=us_less;
			skip_test=1;
			return;	
		}
		
		else if(raddr==0xa0000060){
			if(TEST){
				log_write("use skip and the raddr=%lx\n",raddr);
			}
			skip_test=1;
			*rdata=key_dequeue();
		}
		else{
			//static int first=0;
			//if(first==0)
			//skip_test=1;
			//printf("the worse read addr=%llx\n",raddr);

			//first=1;

			//assert(0);
		} 
		//}
}
extern "C" void vpmem_write(long long waddr, long long wdata, char wmask,long long wen) {
	if(wen==0){
		return;
	}
	//if((circle>=4)&&(circle%2==0)){
	int len;
	if(TEST){
	log_write(RED"\nwaddr=%llx,wdata=%llx,wmask=%d\n"NONE,waddr,wdata,wmask);
	printf(RED"\nwaddr=%llx,wdata=%llx,wmask=%d\n"NONE,waddr,wdata,wmask);
	printf("deng=%d\n",(waddr==0x00000000a00003f8));}
	
	if(wmask==1)
		len=1;
	else if(wmask==3)
		len=2;
	else if(wmask==15)
		len=4;
	else if(wmask==-1)
		len=8;
	if(waddr==0xa00003f8)
	{
	 if(TEST)
		 log_write("use uart here\n");
	 char putdata=(char)wdata;
	 putchar(putdata);
	 skip_test=1;
	 return;
	}
	else if(waddr==0xa0000104){
		if(TEST){
			log_write("use skip and the waddr=%lx\n",waddr);
		}
		skip_test=1;
		c_update();
		return;
	}
	else if((waddr>=0xa1000000)&&(waddr<=0xa10752ff)){
		if(TEST){
			log_write("use skip and the waddr=%lx\n",waddr);
		}
		//printf("the waddr=%lx len=%d wdata=%lx\n",waddr,len,wdata);
		update_vmem(waddr,wdata,len);
		skip_test=1;
		//printf("change vmem\n");
		return;
	}
	else if(waddr>=0x80000000&&waddr<=0x87ffffff){
	//printf(RED"\nwaddr=%llx,wdata=%llx,wmask=%d\n"NONE,waddr,wdata,wmask);
	if((len==1)||(len==2)||(len==4)||(len==8)){
		pmem_write(waddr,len,wdata);}
	// 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
	// `wmask`中每比特表示`wdata`中1个字节的掩码,
	// 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
}
	else {
		if(waddr!=0)
			printf("write error address %llx\n",waddr);
		//assert(0);
	}
//}
}
		       
void dump_gpr() {
	int i;
	for (i = 0; i < 32; i++) {
		printf("%s: ",regs[i]);
		printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
	}
}

//static uint8_t pmem[1024*2000*1024]={0};
static uint8_t pmem[0x8000000] __attribute((aligned(4096)))={};
long pmem_size=sizeof(pmem)/sizeof(pmem[0]);
enum { NEMU_RUNNING, NEMU_STOP, NEMU_END, NEMU_ABORT, NEMU_QUIT };   
static int nemu_state=NEMU_RUNNING;
//static int a0=0;
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
		init_device();
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
		//assert(scope); // Check for nullptr if scope not found wzw change
    svSetScope(scope);
/////////////////////////////////////////////////////////////////////

    // Set Vtop's input signals
    top->rst = !0;
    top->clk = 0;
    top->cpupc=0x80000000;
    //top->in=0;
		int testdata=0;
		 while (!contextp->gotFinish()) {
			  device_update();
				/*if(npc_state==0)*/
					/*break;*/
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
				upc=top->cpupc;
				udnpc=top->dnpc;

				if(TEST){
					static int testaddr=0x82395E18;
					int result=pmem_read(testaddr,4);
					if(result!=testdata){
						log_write("now change result=%lx,cpupc=%lx at %d\n",result,top->cpupc,contextp->time()/2);
						testdata=result;
					}
				}
//      ///////////////////////////////////////////////////
				uint32_t instval=top->inst;
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
				if(!top->clk){
        if(top->ebreak&top->inst_update)
        {   
						if(cpu_gpr[10]==0)
							printf(GREEN"\nHIT GOOD TAP\n"NONE);
						else
							printf(RED"\nHIT BAD TAP\n"NONE);
						break;
        }
				///////////////////////difftest//////////////////////
				static int diff_first=0;
				if(!top->clk&&contextp->time()>4&&(diff_first==1)&&top->inst_finish){
					if(DIFFTEST){
				  int check=difftest_step();		
					if(check==0){
						printf(RED"\ninst error at:%s\n"NONE,logbuf);
						break;}}
				}
				if(contextp->time()>=4&&(diff_first==0)) 
					if(DIFFTEST){
						//init_difftest(diff_so_file,img_size);
						init_difftest(diff_so_file,pmem_size);
						diff_first=1;
					}

				///////////////////////////////////////////////////

				///////////////////////////////////////sdb//////////////////////////////////////////
			 if(((strcmp(str,"c")!=0)&&(exec_step==0))|contextp->time()==4|watchpoint==top->cpupc|(npc_state==0)){	
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
					else if(strcmp(test,"q")==0){
						break;
					}
					else if(strcmp(test,"opent")==0){
						DIFFTEST=1;
						goto XunHuan;
					}	
					else if(strcmp(test,"close")==0){
						DIFFTEST=0;
						goto XunHuan;
					}
					else if(strcmp(test,"c")==0){
						npc_state=1;
					}
				}
			 }
				////////////////////////////////////////////////////////////////////////////////////
				//////////////////////////////////////itrace//////////////////////
			if(DIFFTEST){
				if(!top->clk&&!top->rst&&top->inst_update){
					itrace_use(logbuf,upc,instval);
					if(!top->not_have)	{
					printf(YELLOW"%s is not have, please add\n"NONE,logbuf);
					break;
					}
				}
			}
				}
				/////////////////////////////////////////////////////////////////
				if(!top->clk&&contextp->time()>=4)
				  exec_step--;
        // Evaluate model
        // (If you have multiple models being simulated in the same
        // timestep then instead of eval(), call eval_step() on each, then
        // eval_end_step() on each. See the manual.)
        top->eval();
				if(TEST&&!top->clk)
        VL_PRINTF("[%" VL_PRI64 "d]  finish cpupc=%lx inst=%lx\n",
                  contextp->time()/2,  
                  top->cpupc,top->inst);
				if(TEST){
				log_write("[%" VL_PRI64 "d]  finish cpupc=%lx inst=%lx\n",
                  contextp->time()/2,  
                  top->cpupc,top->inst);
				}
    }
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
