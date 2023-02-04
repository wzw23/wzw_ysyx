// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_MUXKEYWITHDEFAULT__K20_DC_H_
#define VERILATED_VTOP_MUXKEYWITHDEFAULT__K20_DC_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop_MuxKeyWithDefault__K20_Dc) {
  public:

    // PORTS
    VL_OUT16(out,11,0);
    VL_IN16(default_out,11,0);
    VL_IN(key,31,0);
    VL_INW(lut,87,0,3);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__i0__DOT__hit;
    SData/*11:0*/ __PVT__i0__DOT__lut_out;
    IData/*31:0*/ __PVT__i0__DOT__i;
    VlUnpacked<QData/*43:0*/, 2> __PVT__i0__DOT__pair_list;
    VlUnpacked<IData/*31:0*/, 2> __PVT__i0__DOT__key_list;
    VlUnpacked<SData/*11:0*/, 2> __PVT__i0__DOT__data_list;

    // LOCAL VARIABLES
    CData/*0:0*/ i0__DOT____Vtogcov__hit;
    SData/*11:0*/ i0__DOT____Vtogcov__lut_out;
    VlWide<3>/*87:0*/ __Vtogcov__lut;
    VlUnpacked<QData/*43:0*/, 2> i0__DOT____Vtogcov__pair_list;
    VlUnpacked<IData/*31:0*/, 2> i0__DOT____Vtogcov__key_list;
    VlUnpacked<SData/*11:0*/, 2> i0__DOT____Vtogcov__data_list;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_MuxKeyWithDefault__K20_Dc);  ///< Copying not allowed
  public:
    Vtop_MuxKeyWithDefault__K20_Dc(const char* name);
    ~Vtop_MuxKeyWithDefault__K20_Dc();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
