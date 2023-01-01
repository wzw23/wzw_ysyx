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
//全局变量pc dnpc crstate
int pc;
int dnpc;
int crstate;
int space=0;
using namespace std;
//接受字节表的数组
extern Sy_table func;
Decode s;
//接收寄存器数组
uint64_t *cpu_gpr = NULL;
uint32_t watchpoint=-1;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
	  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
void dump_gpr() {
	int i;
	for (i = 0; i < 32; i++) {
		printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
	}
}

static uint8_t pmem[100000]={0};
enum { NEMU_RUNNING, NEMU_STOP, NEMU_END, NEMU_ABORT, NEMU_QUIT };   
static int nemu_state=NEMU_RUNNING;
static int a0=0;
//通过内存地址书写原本地址
uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_BASE; }
//Legacy function required only so linking works on Cygwin and MSVC++
double sc_time_stamp() { return 0; }
static uint32_t host_read(void *addr, int len) {
  switch (len) {
    case 4: return *(uint32_t *)addr;
    default:  assert(0);
  }
}
static uint32_t pmem_read(uint32_t addr, int len) {
  uint32_t ret = host_read(guest_to_host(addr), len);
  return ret;
}
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
static int cmd_w(char *args) {
	char *arg2 = strtok(NULL, " ");
	watchpoint=(uint32_t)strtol(arg2,NULL,16);
	printf("watchpoint=%x\n",watchpoint);
	return 0;
}
int main(int argc, char** argv, char** env) {
		parse_args(argc,argv);
		printf("elf_file=%s\n",elf_file);
	  init_log(log_file);
		load_img(argc,argv);
		parse_elf(elf_file); 
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
    while (!contextp->gotFinish()) {
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
				
        top->putstate(&nemu_state,&a0,&pc,&dnpc,&crstate);
				printf("pc=%x,dnpc=%x,state=%x",pc,dnpc,crstate);
				//printf("upc=%x\n",up);
				if(top->clk){
				if(crstate==1){
					  //printf("udnpc=%lx\n",udnpc);
						for (int j=0;j<func.length;j++){
							//printf("func.begin[j]=%lx",func.begin[j]);
							if((dnpc>=(int)func.begin[j])&&(dnpc<(int)func.begin[j]+func.size[j])){
								log_write("%*s",space,"");	
								//printf(" %lx:  jal  ret %s\n",ftrace.left[i],func.name[j]);
								log_write(" %x:    call %s(%x)\n",pc,func.name[j],dnpc);
								space++;
								break;
							}
						}

					}
					if(crstate==2){
						for (int j=0;j<func.length;j++){
							if((pc>=(int)func.begin[j])&&(pc<(int)func.begin[j]+func.size[j])){
								space--;
								log_write("%*s",space,"");	
								log_write(" %x:    ret %s(%x)\n",pc,func.name[j],dnpc);
								break;
							}
						}
					}}
//      top->put_state(nemu_state);
//      ///////////////////////////////////////////////////

        top->inst=pmem_read(top->cpupc,4);
        //printf("the a0 is %d\n",top.de->Type);
				if(!top->clk){
        if(nemu_state)
        {   
					  printf("the register a0 is %d",a0);
						if(a0==0)
							printf("HIT GOOD TAP\n");
						else
							printf("HIT BAD TAP\n");
						break;
        }}
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
					
				}}
				////////////////////////////////////////////////////////////////////////////////////
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
