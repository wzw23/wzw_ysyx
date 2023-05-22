// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_test.h"
#include "Vtop_test__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vtop_test::Vtop_test(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtop_test__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , inst{vlSymsp->TOP.inst}
    , cpupc{vlSymsp->TOP.cpupc}
    , ebreak{vlSymsp->TOP.ebreak}
    , not_have{vlSymsp->TOP.not_have}
    , dnpc{vlSymsp->TOP.dnpc}
    , inst_finish{vlSymsp->TOP.inst_finish}
    , mem_finish{vlSymsp->TOP.mem_finish}
    , inst_update{vlSymsp->TOP.inst_update}
    , dnpc_reg_wb{vlSymsp->TOP.dnpc_reg_wb}
    , cpupc_reg_wb{vlSymsp->TOP.cpupc_reg_wb}
    , cpupc_reg_finish{vlSymsp->TOP.cpupc_reg_finish}
    , inst_reg_wb{vlSymsp->TOP.inst_reg_wb}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtop_test::Vtop_test(const char* _vcname__)
    : Vtop_test(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtop_test::~Vtop_test() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtop_test___024root___eval_initial(Vtop_test___024root* vlSelf);
void Vtop_test___024root___eval_settle(Vtop_test___024root* vlSelf);
void Vtop_test___024root___eval(Vtop_test___024root* vlSelf);
QData Vtop_test___024root___change_request(Vtop_test___024root* vlSelf);
#ifdef VL_DEBUG
void Vtop_test___024root___eval_debug_assertions(Vtop_test___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_test___024root___final(Vtop_test___024root* vlSelf);

static void _eval_initial_loop(Vtop_test__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtop_test___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtop_test___024root___eval_settle(&(vlSymsp->TOP));
        Vtop_test___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtop_test___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/wzw/ysyx-workbench/npc/vsrc/top_test.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtop_test___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_test::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_test___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtop_test___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtop_test___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/wzw/ysyx-workbench/npc/vsrc/top_test.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtop_test___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vtop_test::final() {
    Vtop_test___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vtop_test::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtop_test::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vtop_test___024root__traceInitTop(Vtop_test___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_test___024root*>(voidSelf);
    Vtop_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop_test___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vtop_test___024root__traceRegister(Vtop_test___024root* vlSelf, VerilatedVcd* tracep);

void Vtop_test::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vtop_test___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
