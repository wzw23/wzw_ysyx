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
class Vtop_MuxKeyWithDefault__N6_K3_D40;
class Vtop_MuxKeyWithDefault__N3_K20_D40;
class Vtop_MuxKeyWithDefault__N1_K20_D40;


//----------

VL_MODULE(Vtop___024root) {
  public:
    // CELLS
    Vtop_MuxKeyWithDefault__N6_K3_D40* __PVT__top__DOT__de__DOT__m1;
    Vtop_MuxKeyWithDefault__N6_K3_D40* __PVT__top__DOT__de__DOT__m7;
    Vtop_MuxKeyWithDefault__N3_K20_D40* __PVT__top__DOT__de__DOT__m4;
    Vtop_MuxKeyWithDefault__N3_K20_D40* __PVT__top__DOT__de__DOT__m5;
    Vtop_MuxKeyWithDefault__N1_K20_D40* __PVT__top__DOT__de__DOT__m9;
    Vtop_MuxKeyWithDefault__N1_K20_D40* __PVT__top__DOT__de__DOT__m10;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN(inst,31,0);
    VL_OUT(cpupc,31,0);

    // LOCAL SIGNALS
    CData/*7:0*/ top__DOT__de__DOT__mwmask;
    CData/*1:0*/ top__DOT__de__DOT__call_return;
    CData/*2:0*/ top__DOT__de__DOT__Type;
    CData/*4:0*/ top__DOT__de__DOT__raddr;
    CData/*4:0*/ top__DOT__de__DOT__waddr;
    CData/*2:0*/ top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ top__DOT__de__DOT__m0__DOT__i0__DOT__hit;
    CData/*4:0*/ top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out;
    CData/*0:0*/ top__DOT__de__DOT__m2__DOT__i0__DOT__hit;
    CData/*0:0*/ top__DOT__de__DOT__m3__DOT__i0__DOT__hit;
    CData/*4:0*/ top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out;
    CData/*0:0*/ top__DOT__de__DOT__m8__DOT__i0__DOT__hit;
    CData/*0:0*/ top__DOT__de__DOT__m6__DOT__i0__DOT__hit;
    CData/*7:0*/ top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out;
    CData/*0:0*/ top__DOT__de__DOT__m12__DOT__i0__DOT__hit;
    IData/*31:0*/ top__DOT__dnpc;
    IData/*31:0*/ top__DOT__de__DOT__addi;
    IData/*31:0*/ top__DOT__de__DOT__jalr;
    IData/*31:0*/ top__DOT__de__DOT__sd;
    IData/*31:0*/ top__DOT__de__DOT__r0__DOT__i;
    IData/*31:0*/ top__DOT__de__DOT__m0__DOT__i0__DOT__i;
    IData/*31:0*/ top__DOT__de__DOT__m2__DOT__i0__DOT__i;
    IData/*31:0*/ top__DOT__de__DOT__m3__DOT__i0__DOT__i;
    IData/*31:0*/ top__DOT__de__DOT__m8__DOT__i0__DOT__i;
    IData/*31:0*/ top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out;
    IData/*31:0*/ top__DOT__de__DOT__m6__DOT__i0__DOT__i;
    IData/*31:0*/ top__DOT__de__DOT__m12__DOT__i0__DOT__i;
    QData/*63:0*/ top__DOT__de__DOT__mrdata;
    QData/*63:0*/ top__DOT__de__DOT__src1;
    QData/*63:0*/ top__DOT__de__DOT__src2;
    QData/*63:0*/ top__DOT__de__DOT__rdata;
    QData/*63:0*/ top__DOT__de__DOT__wdata;
    QData/*63:0*/ top__DOT__de__DOT__addresult;
    QData/*63:0*/ top__DOT__de__DOT__addauipc;
    QData/*63:0*/ top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__de__DOT__array;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__de__DOT__r0__DOT__rf;
    VlUnpacked<QData/*34:0*/, 6> top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list;
    VlUnpacked<IData/*31:0*/, 6> top__DOT__de__DOT__m0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*2:0*/, 6> top__DOT__de__DOT__m0__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*36:0*/, 5> top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list;
    VlUnpacked<IData/*31:0*/, 5> top__DOT__de__DOT__m2__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*4:0*/, 5> top__DOT__de__DOT__m2__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*95:0*/, 5> top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list;
    VlUnpacked<IData/*31:0*/, 5> top__DOT__de__DOT__m3__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 5> top__DOT__de__DOT__m3__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*36:0*/, 1> top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list;
    VlUnpacked<IData/*31:0*/, 1> top__DOT__de__DOT__m8__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*4:0*/, 1> top__DOT__de__DOT__m8__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*63:0*/, 2> top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list;
    VlUnpacked<IData/*31:0*/, 2> top__DOT__de__DOT__m6__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> top__DOT__de__DOT__m6__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*39:0*/, 1> top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list;
    VlUnpacked<IData/*31:0*/, 1> top__DOT__de__DOT__m12__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*7:0*/, 1> top__DOT__de__DOT__m12__DOT__i0__DOT__data_list;

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT____Vtogcov__rst;
        CData/*0:0*/ top__DOT__i0__DOT__i0__DOT____Vtogcov__wen;
        CData/*7:0*/ top__DOT__de__DOT____Vtogcov__mwmask;
        CData/*0:0*/ top__DOT__de__DOT____Vtogcov__state;
        CData/*1:0*/ top__DOT__de__DOT____Vtogcov__call_return;
        CData/*2:0*/ top__DOT__de__DOT____Vtogcov__Type;
        CData/*4:0*/ top__DOT__de__DOT____Vtogcov__raddr;
        CData/*4:0*/ top__DOT__de__DOT____Vtogcov__waddr;
        CData/*2:0*/ top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out;
        CData/*0:0*/ top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__hit;
        CData/*4:0*/ top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out;
        CData/*0:0*/ top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__hit;
        CData/*0:0*/ top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__hit;
        CData/*4:0*/ top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out;
        CData/*0:0*/ top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__hit;
        CData/*0:0*/ top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__hit;
        CData/*7:0*/ top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out;
        CData/*0:0*/ top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__hit;
        CData/*0:0*/ __Vclklast__TOP__clk;
        IData/*31:0*/ top__DOT____Vtogcov__inst;
        IData/*31:0*/ top__DOT____Vtogcov__cpupc;
        IData/*31:0*/ top__DOT____Vtogcov__dnpc;
        VlWide<13>/*401:0*/ top__DOT__de__DOT____Vcellinp__m1____pinNumber4;
        VlWide<13>/*401:0*/ top__DOT__de__DOT____Vcellinp__m7____pinNumber4;
        VlWide<7>/*209:0*/ top__DOT__de__DOT____Vcellinp__m0____pinNumber4;
        VlWide<6>/*184:0*/ top__DOT__de__DOT____Vcellinp__m2____pinNumber4;
        VlWide<15>/*479:0*/ top__DOT__de__DOT____Vcellinp__m3____pinNumber4;
        VlWide<9>/*287:0*/ top__DOT__de__DOT____Vcellinp__m4____pinNumber4;
        VlWide<9>/*287:0*/ top__DOT__de__DOT____Vcellinp__m5____pinNumber4;
        VlWide<4>/*127:0*/ top__DOT__de__DOT____Vcellinp__m6____pinNumber4;
        VlWide<3>/*95:0*/ top__DOT__de__DOT____Vcellinp__m9____pinNumber4;
        VlWide<3>/*95:0*/ top__DOT__de__DOT____Vcellinp__m10____pinNumber4;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__return_state;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__return_a0;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__call_returnr;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__Type_return;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__addi;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__auipc;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__jalr;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__sd;
        VlWide<7>/*209:0*/ top__DOT__de__DOT__m0__DOT____Vtogcov__lut;
        VlWide<6>/*184:0*/ top__DOT__de__DOT__m2__DOT____Vtogcov__lut;
        IData/*31:0*/ top__DOT__de__DOT__m6__DOT____Vtogcov__default_out;
        VlWide<4>/*127:0*/ top__DOT__de__DOT__m6__DOT____Vtogcov__lut;
        IData/*31:0*/ top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__mrdata;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__mwdata;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__mwaddr;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__upc;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__src1;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__src2;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__rdata;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__imm;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__Simm;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__wdata;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__addresult;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__adddata1;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__adddata2;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__addauipc;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__luimid;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__jalpc;
        QData/*63:0*/ top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__de__DOT____Vcellout__r0____pinNumber13;
    };
    struct {
        VlUnpacked<QData/*34:0*/, 6> top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__pair_list;
        VlUnpacked<IData/*31:0*/, 6> top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list;
        VlUnpacked<CData/*2:0*/, 6> top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list;
        VlUnpacked<QData/*36:0*/, 5> top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__pair_list;
        VlUnpacked<IData/*31:0*/, 5> top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__key_list;
        VlUnpacked<CData/*4:0*/, 5> top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list;
        VlUnpacked<IData/*31:0*/, 5> top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__key_list;
        VlUnpacked<QData/*36:0*/, 1> top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list;
        VlUnpacked<IData/*31:0*/, 1> top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list;
        VlUnpacked<CData/*4:0*/, 1> top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list;
        VlUnpacked<QData/*39:0*/, 1> top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list;
        VlUnpacked<IData/*31:0*/, 1> top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list;
        VlUnpacked<CData/*7:0*/, 1> top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__data_list;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

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
