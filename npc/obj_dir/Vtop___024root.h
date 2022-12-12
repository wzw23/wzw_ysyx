// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN(inst,31,0);
    VL_OUT(out,31,0);

    // LOCAL SIGNALS
    CData/*3:0*/ top__DOT__count_c;
    CData/*2:0*/ top__DOT__de__DOT__Type;
    CData/*4:0*/ top__DOT__de__DOT__waddr;
    CData/*0:0*/ top__DOT__de__DOT__m0__DOT__i0__DOT__hit;
    IData/*31:0*/ top__DOT__i0__DOT__zhongjian;
    IData/*31:0*/ top__DOT__de__DOT__r0__DOT__i;
    IData/*31:0*/ top__DOT__de__DOT__m0__DOT__i0__DOT__i;
    QData/*63:0*/ top__DOT__de__DOT__src1;
    QData/*63:0*/ top__DOT__de__DOT__src2;
    QData/*63:0*/ top__DOT__de__DOT__imm;
    QData/*63:0*/ top__DOT__de__DOT__wdata;
    QData/*63:0*/ top__DOT__de__DOT__addidata;
    QData/*63:0*/ top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__de__DOT__r0__DOT__rf;
    VlUnpacked<VlWide<3>/*66:0*/, 6> top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 6> top__DOT__de__DOT__m0__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 6> top__DOT__de__DOT__m0__DOT__i0__DOT__data_list;

    // LOCAL VARIABLES
    CData/*0:0*/ top__DOT____Vtogcov__clk;
    CData/*0:0*/ top__DOT____Vtogcov__rst;
    CData/*3:0*/ top__DOT____Vtogcov__count_c;
    CData/*0:0*/ top__DOT__i0__DOT__i0__DOT____Vtogcov__wen;
    CData/*0:0*/ top__DOT__de__DOT____Vtogcov__state;
    CData/*2:0*/ top__DOT__de__DOT____Vtogcov__Type;
    CData/*4:0*/ top__DOT__de__DOT____Vtogcov__waddr;
    CData/*0:0*/ top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__hit;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ top__DOT____Vtogcov__inst;
    IData/*31:0*/ top__DOT____Vtogcov__out;
    IData/*31:0*/ top__DOT__i0__DOT____Vtogcov__zhongjian;
    VlWide<13>/*401:0*/ top__DOT__de__DOT____Vcellinp__m0____pinNumber4;
    IData/*31:0*/ top__DOT__de__DOT____Vtogcov__return_state;
    QData/*63:0*/ top__DOT__de__DOT____Vtogcov__src1;
    QData/*63:0*/ top__DOT__de__DOT____Vtogcov__src2;
    QData/*63:0*/ top__DOT__de__DOT____Vtogcov__imm;
    QData/*63:0*/ top__DOT__de__DOT____Vtogcov__wdata;
    QData/*63:0*/ top__DOT__de__DOT____Vtogcov__addidata;
    QData/*63:0*/ top__DOT__de__DOT__m0__DOT____Vtogcov__default_out;
    QData/*63:0*/ top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out;
    VlUnpacked<CData/*2:0*/, 6> top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
