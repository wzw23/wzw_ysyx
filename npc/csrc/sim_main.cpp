// For std::unique_ptr
#include <memory>
#include "svdpi.h"
// Include common routines
#include <verilated.h>
// include memcpy 
#include <string.h>
// Include model header, generated from Verilating "top.v"
#include "Vtop.h"
#include "Vtop__Dpi.h"
//最初内存
#define CONFIG_BASE 0x80000000
typedef unsigned char         uint8_t;
typedef unsigned short   int uint16_t;
typedef unsigned int         uint32_t;
typedef unsigned long    int uint64_t;
extern void put_state(svLogic prior_state);  
//文件二进制编码
static const uint32_t img [] = {
 // 0x800002b7,  // lui t0,0x80000
 // 0x0002a023,  // sw  zero,0(t0)
 // 0x0002a503,  // lw  a0,0(t0)
 // 0x00100073,  // ebreak (used as nemu_trap)
 0x0c4b0b13, //addi    s6,s6,196
 0x0c4b0b13, //addi    s6,s6,196
 0x0c4b0b13, //addi    s6,s6,196
 0x2f0b8b93, //addi    s7,s7,752
 0x0c4b0b13, //addi    s6,s6,196 
 0x00100073  //break
};
//
//
static uint8_t pmem[100000]={0};
enum { NEMU_RUNNING, NEMU_STOP, NEMU_END, NEMU_ABORT, NEMU_QUIT };   
static int nemu_state=NEMU_RUNNING;
//通过内存地址书写原本地址
uint8_t* guest_to_host(uint32_t paddr) { printf("0/n");return pmem + paddr - CONFIG_BASE; }
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
int main(int argc, char** argv, char** env) {
    printf("alsdkfj\n");
    //将代码复制到内存
    memcpy(guest_to_host((uint32_t)CONFIG_BASE), img, sizeof(img));
    printf("success\n");
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


    // Set Vtop's input signals
    top->rst = !0;
    top->clk = 0;
    top->out=0x80000000;
    //top->in=0;
    while (!contextp->gotFinish()) {
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
                
        top->putstate(&nemu_state);
//      top->put_state(nemu_state);

        top->inst=pmem_read(top->out,4);
        printf("the state is %d\n",nemu_state);
        if(nemu_state)
        {   printf("end");
            return 0;
        }
        printf("read neirong =%x\n",pmem_read(top->out,4));
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
                  top->out);
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
