// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_MUXKEYWITHDEFAULT__N6_K3_D40_H_
#define VERILATED_VTOP_MUXKEYWITHDEFAULT__N6_K3_D40_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop_MuxKeyWithDefault__N6_K3_D40) {
  public:

    // PORTS
    VL_IN8(key,2,0);
    VL_INW(lut,401,0,13);
    VL_OUT64(out,63,0);
    VL_IN64(default_out,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__i0__DOT__hit;
    IData/*31:0*/ __PVT__i0__DOT__i;
    QData/*63:0*/ __PVT__i0__DOT__lut_out;
    VlUnpacked<VlWide<3>/*66:0*/, 6> __PVT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 6> __PVT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 6> __PVT__i0__DOT__data_list;

    // LOCAL VARIABLES
    CData/*0:0*/ i0__DOT____Vtogcov__hit;
    QData/*63:0*/ i0__DOT____Vtogcov__lut_out;
    VlUnpacked<CData/*2:0*/, 6> i0__DOT____Vtogcov__key_list;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_MuxKeyWithDefault__N6_K3_D40);  ///< Copying not allowed
  public:
    Vtop_MuxKeyWithDefault__N6_K3_D40(const char* name);
    ~Vtop_MuxKeyWithDefault__N6_K3_D40();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard