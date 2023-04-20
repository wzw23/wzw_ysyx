// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_MUXKEY__D40_H_
#define VERILATED_VTOP_MUXKEY__D40_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop_MuxKey__D40) {
  public:

    // PORTS
    VL_IN8(key,0,0);
    VL_INW(lut,129,0,5);
    VL_OUT64(out,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__i0__DOT__hit;
    IData/*31:0*/ __PVT__i0__DOT__i;
    QData/*63:0*/ __PVT__i0__DOT__lut_out;
    VlUnpacked<VlWide<3>/*64:0*/, 2> __PVT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> __PVT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 2> __PVT__i0__DOT__data_list;

    // LOCAL VARIABLES
    CData/*0:0*/ i0__DOT____Vtogcov__hit;
    VlWide<5>/*129:0*/ __Vtogcov__lut;
    QData/*63:0*/ __Vtogcov__out;
    QData/*63:0*/ i0__DOT____Vtogcov__lut_out;
    VlUnpacked<VlWide<3>/*64:0*/, 2> i0__DOT____Vtogcov__pair_list;
    VlUnpacked<CData/*0:0*/, 2> i0__DOT____Vtogcov__key_list;
    VlUnpacked<QData/*63:0*/, 2> i0__DOT____Vtogcov__data_list;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_MuxKey__D40);  ///< Copying not allowed
  public:
    Vtop_MuxKey__D40(const char* name);
    ~Vtop_MuxKey__D40();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
