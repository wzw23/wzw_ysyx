// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vtop.h"
#include "Vtop__Syms.h"
#include "verilated_dpi.h"


void Vtop::putstate(int* statefh, int* a0, int* pcr, int* dnpcr, int* callreturn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::putstate\n"); );
    // Variables
    IData/*31:0*/ statefh__Vcvt;
    IData/*31:0*/ a0__Vcvt;
    IData/*31:0*/ pcr__Vcvt;
    IData/*31:0*/ dnpcr__Vcvt;
    IData/*31:0*/ callreturn__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("putstate");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_putstate_t __Vcb = (Vtop__Vcb_putstate_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), statefh__Vcvt, a0__Vcvt, pcr__Vcvt, dnpcr__Vcvt, callreturn__Vcvt);
    for (size_t statefh__Vidx = 0; statefh__Vidx < 1; ++statefh__Vidx) *statefh = statefh__Vcvt;
    for (size_t a0__Vidx = 0; a0__Vidx < 1; ++a0__Vidx) *a0 = a0__Vcvt;
    for (size_t pcr__Vidx = 0; pcr__Vidx < 1; ++pcr__Vidx) *pcr = pcr__Vcvt;
    for (size_t dnpcr__Vidx = 0; dnpcr__Vidx < 1; ++dnpcr__Vidx) *dnpcr = dnpcr__Vcvt;
    for (size_t callreturn__Vidx = 0; callreturn__Vidx < 1; ++callreturn__Vidx) *callreturn = callreturn__Vcvt;
}
