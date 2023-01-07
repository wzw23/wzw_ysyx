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
class Vtop_MuxKeyWithDefault__N29_K20_D40;
class Vtop_MuxKeyWithDefault__N4_K20_D40;


//----------

VL_MODULE(Vtop___024root) {
  public:
    // CELLS
    Vtop_MuxKeyWithDefault__N6_K3_D40* __PVT__top__DOT__de__DOT__m1;
    Vtop_MuxKeyWithDefault__N6_K3_D40* __PVT__top__DOT__de__DOT__m7;
    Vtop_MuxKeyWithDefault__N29_K20_D40* __PVT__top__DOT__de__DOT__m4;
    Vtop_MuxKeyWithDefault__N29_K20_D40* __PVT__top__DOT__de__DOT__m5;
    Vtop_MuxKeyWithDefault__N4_K20_D40* __PVT__top__DOT__de__DOT__m9;
    Vtop_MuxKeyWithDefault__N4_K20_D40* __PVT__top__DOT__de__DOT__m10;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN(inst,31,0);
    VL_OUT(cpupc,31,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
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
        CData/*0:0*/ top__DOT__de__DOT__m14__DOT__i0__DOT__hit;
        IData/*31:0*/ top__DOT__dnpc;
        IData/*31:0*/ top__DOT__de__DOT__addi;
        IData/*31:0*/ top__DOT__de__DOT__andi;
        IData/*31:0*/ top__DOT__de__DOT__xori;
        IData/*31:0*/ top__DOT__de__DOT__sllw;
        IData/*31:0*/ top__DOT__de__DOT__srlw;
        IData/*31:0*/ top__DOT__de__DOT__sraw;
        IData/*31:0*/ top__DOT__de__DOT__srawd;
        IData/*31:0*/ top__DOT__de__DOT__addiw;
        IData/*31:0*/ top__DOT__de__DOT__slliw;
        IData/*31:0*/ top__DOT__de__DOT__srliw;
        IData/*31:0*/ top__DOT__de__DOT__sraiw;
        IData/*31:0*/ top__DOT__de__DOT__jalr;
        IData/*31:0*/ top__DOT__de__DOT__sd;
        IData/*31:0*/ top__DOT__de__DOT__sh;
        IData/*31:0*/ top__DOT__de__DOT__sw;
        IData/*31:0*/ top__DOT__de__DOT__sb;
        IData/*31:0*/ top__DOT__de__DOT__lw;
        IData/*31:0*/ top__DOT__de__DOT__lh;
        IData/*31:0*/ top__DOT__de__DOT__lbu;
        IData/*31:0*/ top__DOT__de__DOT__lhu;
        IData/*31:0*/ top__DOT__de__DOT__ld;
        IData/*31:0*/ top__DOT__de__DOT__addw;
        IData/*31:0*/ top__DOT__de__DOT__subw;
        IData/*31:0*/ top__DOT__de__DOT__mulw;
        IData/*31:0*/ top__DOT__de__DOT__divw;
        IData/*31:0*/ top__DOT__de__DOT__remw;
        IData/*31:0*/ top__DOT__de__DOT__Add;
        IData/*31:0*/ top__DOT__de__DOT__Mul;
        IData/*31:0*/ top__DOT__de__DOT__And;
        IData/*31:0*/ top__DOT__de__DOT__Or;
        IData/*31:0*/ top__DOT__de__DOT__sltu;
        IData/*31:0*/ top__DOT__de__DOT__slt;
        IData/*31:0*/ top__DOT__de__DOT__sub;
        IData/*31:0*/ top__DOT__de__DOT__sltiu;
        IData/*31:0*/ top__DOT__de__DOT__srai;
        IData/*31:0*/ top__DOT__de__DOT__slli;
        IData/*31:0*/ top__DOT__de__DOT__srli;
        IData/*31:0*/ top__DOT__de__DOT__beq;
        IData/*31:0*/ top__DOT__de__DOT__bne;
        IData/*31:0*/ top__DOT__de__DOT__bge;
        IData/*31:0*/ top__DOT__de__DOT__bgeu;
        IData/*31:0*/ top__DOT__de__DOT__bltu;
        IData/*31:0*/ top__DOT__de__DOT__blt;
        IData/*31:0*/ top__DOT__de__DOT__r0__DOT__i;
        IData/*31:0*/ top__DOT__de__DOT__m0__DOT__i0__DOT__i;
        IData/*31:0*/ top__DOT__de__DOT__m2__DOT__i0__DOT__i;
        IData/*31:0*/ top__DOT__de__DOT__m3__DOT__i0__DOT__i;
    };
    struct {
        IData/*31:0*/ top__DOT__de__DOT__m8__DOT__i0__DOT__i;
        IData/*31:0*/ top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__de__DOT__m6__DOT__i0__DOT__i;
        IData/*31:0*/ top__DOT__de__DOT__m12__DOT__i0__DOT__i;
        IData/*31:0*/ top__DOT__de__DOT__m14__DOT__i0__DOT__i;
        QData/*63:0*/ top__DOT__de__DOT__mraddr;
        QData/*63:0*/ top__DOT__de__DOT__mrdata;
        QData/*63:0*/ top__DOT__de__DOT__src1;
        QData/*63:0*/ top__DOT__de__DOT__src2;
        QData/*63:0*/ top__DOT__de__DOT__rdata;
        QData/*63:0*/ top__DOT__de__DOT__wdata;
        QData/*63:0*/ top__DOT__de__DOT__addresult;
        QData/*63:0*/ top__DOT__de__DOT__compare;
        QData/*63:0*/ top__DOT__de__DOT__logr;
        QData/*63:0*/ top__DOT__de__DOT__arir;
        QData/*63:0*/ top__DOT__de__DOT__logl;
        QData/*63:0*/ top__DOT__de__DOT__aril;
        QData/*63:0*/ top__DOT__de__DOT__yu;
        QData/*63:0*/ top__DOT__de__DOT__huo;
        QData/*63:0*/ top__DOT__de__DOT__yihuo;
        QData/*63:0*/ top__DOT__de__DOT__cheng;
        QData/*63:0*/ top__DOT__de__DOT__chu;
        QData/*63:0*/ top__DOT__de__DOT__scheng;
        QData/*63:0*/ top__DOT__de__DOT__schu;
        QData/*63:0*/ top__DOT__de__DOT__syu;
        QData/*63:0*/ top__DOT__de__DOT__addauipc;
        QData/*63:0*/ top__DOT__de__DOT__luimid;
        QData/*63:0*/ top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__de__DOT__m14__DOT__i0__DOT__lut_out;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__de__DOT__array;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__de__DOT__r0__DOT__rf;
        VlUnpacked<QData/*34:0*/, 45> top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*31:0*/, 45> top__DOT__de__DOT__m0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 45> top__DOT__de__DOT__m0__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*36:0*/, 35> top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*31:0*/, 35> top__DOT__de__DOT__m2__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*4:0*/, 35> top__DOT__de__DOT__m2__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*95:0*/, 35> top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*31:0*/, 35> top__DOT__de__DOT__m3__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 35> top__DOT__de__DOT__m3__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*36:0*/, 1> top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*31:0*/, 1> top__DOT__de__DOT__m8__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*4:0*/, 1> top__DOT__de__DOT__m8__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*63:0*/, 8> top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__de__DOT__m6__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__de__DOT__m6__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*39:0*/, 4> top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__de__DOT__m12__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 4> top__DOT__de__DOT__m12__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*95:0*/, 5> top__DOT__de__DOT__m14__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*31:0*/, 5> top__DOT__de__DOT__m14__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 5> top__DOT__de__DOT__m14__DOT__i0__DOT__data_list;
    };

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
        CData/*0:0*/ top__DOT__de__DOT__m14__DOT__i0__DOT____Vtogcov__hit;
        CData/*0:0*/ __Vclklast__TOP__clk;
        IData/*31:0*/ top__DOT____Vtogcov__inst;
        IData/*31:0*/ top__DOT____Vtogcov__cpupc;
        IData/*31:0*/ top__DOT____Vtogcov__dnpc;
        VlWide<13>/*401:0*/ top__DOT__de__DOT____Vcellinp__m1____pinNumber4;
        VlWide<13>/*401:0*/ top__DOT__de__DOT____Vcellinp__m7____pinNumber4;
        VlWide<50>/*1574:0*/ top__DOT__de__DOT____Vcellinp__m0____pinNumber4;
        VlWide<41>/*1294:0*/ top__DOT__de__DOT____Vcellinp__m2____pinNumber4;
        VlWide<105>/*3359:0*/ top__DOT__de__DOT____Vcellinp__m3____pinNumber4;
        VlWide<123>/*3935:0*/ top__DOT__de__DOT____Vcellinp__m4____pinNumber4;
        VlWide<123>/*3935:0*/ top__DOT__de__DOT____Vcellinp__m5____pinNumber4;
        VlWide<16>/*511:0*/ top__DOT__de__DOT____Vcellinp__m6____pinNumber4;
        VlWide<12>/*383:0*/ top__DOT__de__DOT____Vcellinp__m9____pinNumber4;
        VlWide<12>/*383:0*/ top__DOT__de__DOT____Vcellinp__m10____pinNumber4;
        VlWide<5>/*159:0*/ top__DOT__de__DOT____Vcellinp__m12____pinNumber4;
        VlWide<15>/*479:0*/ top__DOT__de__DOT____Vcellinp__m14____pinNumber4;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__return_state;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__return_a0;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__call_returnr;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__Type_return;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__addi;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__andi;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__xori;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__sllw;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__srlw;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__sraw;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__srawd;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__addiw;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__slliw;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__srliw;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__sraiw;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__auipc;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__jalr;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__sd;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__sh;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__sw;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__sb;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__lw;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__lh;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__lbu;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__lhu;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__ld;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__addw;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__subw;
    };
    struct {
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__mulw;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__divw;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__remw;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__Add;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__Mul;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__And;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__Or;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__sltu;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__slt;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__sub;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__sltiu;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__srai;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__slli;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__srli;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__beq;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__bne;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__bge;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__bgeu;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__bltu;
        IData/*31:0*/ top__DOT__de__DOT____Vtogcov__blt;
        IData/*31:0*/ top__DOT__de__DOT__m6__DOT____Vtogcov__default_out;
        IData/*31:0*/ top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out;
        VlWide<5>/*159:0*/ top__DOT__de__DOT__m12__DOT____Vtogcov__lut;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__mraddr;
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
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__data1;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__data2;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__compare;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__logr;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__arir;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__logl;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__aril;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__yu;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__huo;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__yihuo;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__cheng;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__chu;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__scheng;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__schu;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__syu;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__addauipc;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__luimid;
        QData/*63:0*/ top__DOT__de__DOT____Vtogcov__jalpc;
        QData/*63:0*/ top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out;
        QData/*63:0*/ top__DOT__de__DOT__m14__DOT__i0__DOT____Vtogcov__lut_out;
        QData/*63:0*/ __Vtask_top__DOT__de__DOT__vpmem_read__0__mrdata;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__de__DOT____Vcellout__r0____pinNumber13;
        VlUnpacked<CData/*2:0*/, 45> top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list;
        VlUnpacked<CData/*4:0*/, 35> top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list;
        VlUnpacked<QData/*36:0*/, 1> top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list;
        VlUnpacked<IData/*31:0*/, 1> top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list;
        VlUnpacked<CData/*4:0*/, 1> top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list;
    };
    struct {
        VlUnpacked<QData/*39:0*/, 4> top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list;
        VlUnpacked<CData/*7:0*/, 4> top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__data_list;
        VlUnpacked<IData/*31:0*/, 5> top__DOT__de__DOT__m14__DOT__i0__DOT____Vtogcov__key_list;
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
