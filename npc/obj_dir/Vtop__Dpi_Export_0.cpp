// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vtop.h"
#include "Vtop__Syms.h"
#include "verilated_dpi.h"


void Vtop::put_state(svLogic prior_state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::put_state\n"); );
    // Variables
    CData/*0:0*/ prior_state__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("put_state");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_put_state_t __Vcb = (Vtop__Vcb_put_state_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    prior_state__Vcvt = (1U & prior_state);
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), prior_state__Vcvt);
}

void Vtop::putstate(int* statefh) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::putstate\n"); );
    // Variables
    IData/*31:0*/ statefh__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("putstate");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_putstate_t __Vcb = (Vtop__Vcb_putstate_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), statefh__Vcvt);
    for (size_t statefh__Vidx = 0; statefh__Vidx < 1; ++statefh__Vidx) *statefh = statefh__Vcvt;
}
