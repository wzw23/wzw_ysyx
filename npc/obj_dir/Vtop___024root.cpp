// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__de__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__de__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void vpmem_read(long long mraddr, long long* mrdata);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__de__DOT__vpmem_read_TOP(QData/*63:0*/ mraddr, QData/*63:0*/ &mrdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__de__DOT__vpmem_read_TOP\n"); );
    // Body
    long long mraddr__Vcvt;
    for (size_t mraddr__Vidx = 0; mraddr__Vidx < 1; ++mraddr__Vidx) mraddr__Vcvt = mraddr;
    long long mrdata__Vcvt;
    vpmem_read(mraddr__Vcvt, &mrdata__Vcvt);
    mrdata = mrdata__Vcvt;
}

extern "C" void vpmem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__de__DOT__vpmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__de__DOT__vpmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    vpmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

void Vtop___024root____Vdpiexp_top__DOT__de__DOT__putstate_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &statefh, IData/*31:0*/ &a0, IData/*31:0*/ &pcr, IData/*31:0*/ &dnpcr, IData/*31:0*/ &callreturn, IData/*31:0*/ &Typer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__de__DOT__putstate_TOP\n"); );
    // Variables
    // Body
    statefh = (0x100073U == vlSymsp->TOP.inst);
    a0 = (IData)(vlSymsp->TOP.top__DOT__de__DOT__rdata);
    pcr = vlSymsp->TOP.cpupc;
    dnpcr = vlSymsp->TOP.top__DOT__dnpc;
    callreturn = vlSymsp->TOP.top__DOT__de__DOT__call_return;
    Typer = vlSymsp->TOP.top__DOT__de__DOT__Type;
    ++(vlSymsp->__Vcoverage[505]);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__8\n"); );
    // Variables
    VlWide<64>/*2047:0*/ __Vtemp626;
    VlWide<66>/*2111:0*/ __Vtemp627;
    VlWide<67>/*2143:0*/ __Vtemp628;
    VlWide<69>/*2207:0*/ __Vtemp629;
    VlWide<70>/*2239:0*/ __Vtemp630;
    VlWide<72>/*2303:0*/ __Vtemp631;
    VlWide<73>/*2335:0*/ __Vtemp632;
    VlWide<75>/*2399:0*/ __Vtemp633;
    VlWide<76>/*2431:0*/ __Vtemp634;
    VlWide<78>/*2495:0*/ __Vtemp635;
    VlWide<79>/*2527:0*/ __Vtemp636;
    VlWide<81>/*2591:0*/ __Vtemp637;
    VlWide<82>/*2623:0*/ __Vtemp638;
    VlWide<83>/*2655:0*/ __Vtemp639;
    VlWide<84>/*2687:0*/ __Vtemp640;
    VlWide<85>/*2719:0*/ __Vtemp641;
    VlWide<86>/*2751:0*/ __Vtemp642;
    VlWide<87>/*2783:0*/ __Vtemp643;
    VlWide<88>/*2815:0*/ __Vtemp644;
    VlWide<89>/*2847:0*/ __Vtemp645;
    VlWide<90>/*2879:0*/ __Vtemp646;
    VlWide<91>/*2911:0*/ __Vtemp647;
    VlWide<92>/*2943:0*/ __Vtemp648;
    VlWide<93>/*2975:0*/ __Vtemp649;
    VlWide<94>/*3007:0*/ __Vtemp650;
    VlWide<96>/*3071:0*/ __Vtemp651;
    VlWide<97>/*3103:0*/ __Vtemp652;
    VlWide<99>/*3167:0*/ __Vtemp653;
    VlWide<100>/*3199:0*/ __Vtemp654;
    VlWide<102>/*3263:0*/ __Vtemp655;
    VlWide<103>/*3295:0*/ __Vtemp656;
    VlWide<105>/*3359:0*/ __Vtemp657;
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__top__DOT__de__DOT__m9.out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr)))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | (IData)((IData)((1U & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m9.out)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mwaddr) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m9.out 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    Vtop___024root____Vdpiimwrap_top__DOT__de__DOT__vpmem_read_TOP(vlSelf->top__DOT__de__DOT__mraddr, vlSelf->__Vtask_top__DOT__de__DOT__vpmem_read__0__mrdata);
    ++(vlSymsp->__Vcoverage[370]);
    vlSelf->top__DOT__de__DOT__mrdata = vlSelf->__Vtask_top__DOT__de__DOT__vpmem_read__0__mrdata;
    Vtop___024root____Vdpiimwrap_top__DOT__de__DOT__vpmem_write_TOP(vlSymsp->TOP__top__DOT__de__DOT__m9.out, vlSymsp->TOP__top__DOT__de__DOT__m10.out, (IData)(vlSelf->top__DOT__de__DOT__mwmask));
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__mrdata) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mrdata)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__mrdata)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__mrdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mrdata 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__mrdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    __Vtemp626[0U] = vlSelf->top__DOT__de__DOT__And;
    __Vtemp626[1U] = (IData)(vlSelf->top__DOT__de__DOT__cheng);
    __Vtemp626[2U] = (IData)((vlSelf->top__DOT__de__DOT__cheng 
                              >> 0x20U));
    __Vtemp626[3U] = vlSelf->top__DOT__de__DOT__Mul;
    __Vtemp626[4U] = (IData)(vlSelf->top__DOT__de__DOT__addresult);
    __Vtemp626[5U] = (IData)((vlSelf->top__DOT__de__DOT__addresult 
                              >> 0x20U));
    __Vtemp626[6U] = vlSelf->top__DOT__de__DOT__Add;
    __Vtemp626[7U] = vlSelf->top__DOT__de__DOT__srawd;
    __Vtemp626[8U] = (- (IData)((vlSelf->top__DOT__de__DOT__srawd 
                                 >> 0x1fU)));
    __Vtemp626[9U] = vlSelf->top__DOT__de__DOT__sraw;
    __Vtemp626[0xaU] = (IData)(vlSelf->top__DOT__de__DOT__logr);
    __Vtemp626[0xbU] = (- (IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__logr 
                                                 >> 0x1fU)))));
    __Vtemp626[0xcU] = vlSelf->top__DOT__de__DOT__srlw;
    __Vtemp626[0xdU] = (IData)(vlSelf->top__DOT__de__DOT__logl);
    __Vtemp626[0xeU] = (- (IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__logl 
                                                 >> 0x1fU)))));
    __Vtemp626[0xfU] = vlSelf->top__DOT__de__DOT__sllw;
    __Vtemp626[0x10U] = (IData)(vlSelf->top__DOT__de__DOT__syu);
    __Vtemp626[0x11U] = (- (IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__syu 
                                                  >> 0x1fU)))));
    __Vtemp626[0x12U] = vlSelf->top__DOT__de__DOT__remw;
    __Vtemp626[0x13U] = (IData)(vlSelf->top__DOT__de__DOT__schu);
    __Vtemp626[0x14U] = (- (IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__schu 
                                                  >> 0x1fU)))));
    __Vtemp626[0x15U] = vlSelf->top__DOT__de__DOT__divw;
    __Vtemp626[0x16U] = (IData)(vlSelf->top__DOT__de__DOT__cheng);
    __Vtemp626[0x17U] = (- (IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__cheng 
                                                  >> 0x1fU)))));
    __Vtemp626[0x18U] = vlSelf->top__DOT__de__DOT__mulw;
    __Vtemp626[0x19U] = (IData)(vlSelf->top__DOT__de__DOT__addresult);
    __Vtemp626[0x1aU] = (- (IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addresult 
                                                  >> 0x1fU)))));
    __Vtemp626[0x1bU] = vlSelf->top__DOT__de__DOT__subw;
    __Vtemp626[0x1cU] = (IData)(vlSelf->top__DOT__de__DOT__addresult);
    __Vtemp626[0x1dU] = (- (IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addresult 
                                                  >> 0x1fU)))));
    __Vtemp626[0x1eU] = vlSelf->top__DOT__de__DOT__addw;
    __Vtemp626[0x1fU] = (IData)((QData)((IData)((0xffffU 
                                                 & (IData)(vlSelf->top__DOT__de__DOT__mrdata)))));
    __Vtemp626[0x20U] = (IData)(((QData)((IData)((0xffffU 
                                                  & (IData)(vlSelf->top__DOT__de__DOT__mrdata)))) 
                                 >> 0x20U));
    __Vtemp626[0x21U] = vlSelf->top__DOT__de__DOT__lhu;
    __Vtemp626[0x22U] = (IData)((QData)((IData)((0xffU 
                                                 & (IData)(vlSelf->top__DOT__de__DOT__mrdata)))));
    __Vtemp626[0x23U] = (IData)(((QData)((IData)((0xffU 
                                                  & (IData)(vlSelf->top__DOT__de__DOT__mrdata)))) 
                                 >> 0x20U));
    __Vtemp626[0x24U] = vlSelf->top__DOT__de__DOT__lbu;
    __Vtemp626[0x25U] = (IData)((((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__de__DOT__mrdata 
                                                                 >> 0xfU)))))) 
                                  << 0x10U) | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__de__DOT__mrdata))))));
    __Vtemp626[0x26U] = (IData)(((((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__de__DOT__mrdata 
                                                                  >> 0xfU)))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->top__DOT__de__DOT__mrdata))))) 
                                 >> 0x20U));
    __Vtemp626[0x27U] = vlSelf->top__DOT__de__DOT__lh;
    __Vtemp626[0x28U] = (IData)(vlSelf->top__DOT__de__DOT__mrdata);
    __Vtemp626[0x29U] = (- (IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__mrdata 
                                                  >> 0x1fU)))));
    __Vtemp626[0x2aU] = vlSelf->top__DOT__de__DOT__lw;
    __Vtemp626[0x2bU] = (IData)((4ULL + (QData)((IData)(vlSelf->cpupc))));
    __Vtemp626[0x2cU] = (IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                                 >> 0x20U));
    __Vtemp626[0x2dU] = vlSelf->top__DOT__de__DOT__jalr;
    __Vtemp626[0x2eU] = (IData)((4ULL + (QData)((IData)(vlSelf->cpupc))));
    __Vtemp626[0x2fU] = (IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                                 >> 0x20U));
    __Vtemp626[0x30U] = (0x6fU | (0xffffff80U & vlSelf->inst));
    __Vtemp626[0x31U] = (IData)(vlSelf->top__DOT__de__DOT__luimid);
    __Vtemp626[0x32U] = (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                 >> 0x20U));
    __Vtemp626[0x33U] = (0x37U | (0xffffff80U & vlSelf->inst));
    __Vtemp626[0x34U] = (IData)(vlSelf->top__DOT__de__DOT__addresult);
    __Vtemp626[0x35U] = (IData)((vlSelf->top__DOT__de__DOT__addresult 
                                 >> 0x20U));
    __Vtemp626[0x36U] = (0x17U | (0xffffff80U & vlSelf->inst));
    __Vtemp626[0x37U] = (IData)(vlSelf->top__DOT__de__DOT__yihuo);
    __Vtemp626[0x38U] = (IData)((vlSelf->top__DOT__de__DOT__yihuo 
                                 >> 0x20U));
    __Vtemp626[0x39U] = vlSelf->top__DOT__de__DOT__xori;
    __Vtemp626[0x3aU] = (IData)(vlSelf->top__DOT__de__DOT__yu);
    __Vtemp626[0x3bU] = (IData)((vlSelf->top__DOT__de__DOT__yu 
                                 >> 0x20U));
    __Vtemp626[0x3cU] = vlSelf->top__DOT__de__DOT__andi;
    __Vtemp626[0x3dU] = (IData)(vlSelf->top__DOT__de__DOT__addresult);
    __Vtemp626[0x3eU] = (IData)((vlSelf->top__DOT__de__DOT__addresult 
                                 >> 0x20U));
    __Vtemp626[0x3fU] = vlSelf->top__DOT__de__DOT__addi;
    VL_CONCAT_WWQ(2112,2048,64, __Vtemp627, __Vtemp626, vlSelf->top__DOT__de__DOT__yu);
    VL_CONCAT_WWI(2144,2112,32, __Vtemp628, __Vtemp627, vlSelf->top__DOT__de__DOT__Or);
    VL_CONCAT_WWQ(2208,2144,64, __Vtemp629, __Vtemp628, vlSelf->top__DOT__de__DOT__huo);
    VL_CONCAT_WWI(2240,2208,32, __Vtemp630, __Vtemp629, vlSelf->top__DOT__de__DOT__sltu);
    VL_CONCAT_WWQ(2304,2240,64, __Vtemp631, __Vtemp630, vlSelf->top__DOT__de__DOT__compare);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp632, __Vtemp631, vlSelf->top__DOT__de__DOT__slt);
    VL_CONCAT_WWQ(2400,2336,64, __Vtemp633, __Vtemp632, 
                  ((1U & (IData)((vlSelf->top__DOT__de__DOT__addresult 
                                  >> 0x3fU))) ? 1ULL
                    : 0ULL));
    VL_CONCAT_WWI(2432,2400,32, __Vtemp634, __Vtemp633, vlSelf->top__DOT__de__DOT__sub);
    VL_CONCAT_WWQ(2496,2432,64, __Vtemp635, __Vtemp634, vlSelf->top__DOT__de__DOT__addresult);
    VL_CONCAT_WWI(2528,2496,32, __Vtemp636, __Vtemp635, vlSelf->top__DOT__de__DOT__sltiu);
    VL_CONCAT_WWQ(2592,2528,64, __Vtemp637, __Vtemp636, vlSelf->top__DOT__de__DOT__compare);
    VL_CONCAT_WWI(2624,2592,32, __Vtemp638, __Vtemp637, vlSelf->top__DOT__de__DOT__addiw);
    VL_CONCAT_WWI(2656,2624,32, __Vtemp639, __Vtemp638, 
                  (- (IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addresult 
                                            >> 0x1fU))))));
    VL_CONCAT_WWI(2688,2656,32, __Vtemp640, __Vtemp639, (IData)(vlSelf->top__DOT__de__DOT__addresult));
    VL_CONCAT_WWI(2720,2688,32, __Vtemp641, __Vtemp640, vlSelf->top__DOT__de__DOT__slliw);
    VL_CONCAT_WWI(2752,2720,32, __Vtemp642, __Vtemp641, 
                  (- (IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__logl 
                                            >> 0x1fU))))));
    VL_CONCAT_WWI(2784,2752,32, __Vtemp643, __Vtemp642, (IData)(vlSelf->top__DOT__de__DOT__logl));
    VL_CONCAT_WWI(2816,2784,32, __Vtemp644, __Vtemp643, vlSelf->top__DOT__de__DOT__srliw);
    VL_CONCAT_WWI(2848,2816,32, __Vtemp645, __Vtemp644, 
                  (- (IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__logr 
                                            >> 0x1fU))))));
    VL_CONCAT_WWI(2880,2848,32, __Vtemp646, __Vtemp645, (IData)(vlSelf->top__DOT__de__DOT__logr));
    VL_CONCAT_WWI(2912,2880,32, __Vtemp647, __Vtemp646, vlSelf->top__DOT__de__DOT__sraiw);
    VL_CONCAT_WWI(2944,2912,32, __Vtemp648, __Vtemp647, 
                  (- (IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__arir 
                                            >> 0x1fU))))));
    VL_CONCAT_WWI(2976,2944,32, __Vtemp649, __Vtemp648, (IData)(vlSelf->top__DOT__de__DOT__arir));
    VL_CONCAT_WWI(3008,2976,32, __Vtemp650, __Vtemp649, vlSelf->top__DOT__de__DOT__ld);
    VL_CONCAT_WWQ(3072,3008,64, __Vtemp651, __Vtemp650, vlSelf->top__DOT__de__DOT__mrdata);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp652, __Vtemp651, vlSelf->top__DOT__de__DOT__srai);
    VL_CONCAT_WWQ(3168,3104,64, __Vtemp653, __Vtemp652, vlSelf->top__DOT__de__DOT__arir);
    VL_CONCAT_WWI(3200,3168,32, __Vtemp654, __Vtemp653, vlSelf->top__DOT__de__DOT__slli);
    VL_CONCAT_WWQ(3264,3200,64, __Vtemp655, __Vtemp654, vlSelf->top__DOT__de__DOT__logl);
    VL_CONCAT_WWI(3296,3264,32, __Vtemp656, __Vtemp655, vlSelf->top__DOT__de__DOT__srli);
    VL_CONCAT_WWQ(3360,3296,64, __Vtemp657, __Vtemp656, vlSelf->top__DOT__de__DOT__logr);
    VL_ASSIGN_W(3360,vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4, __Vtemp657);
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[1U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[1U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[3U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[1U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[4U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[1U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[5U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[2U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[6U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[2U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[7U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[2U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[8U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[3U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[9U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[3U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0xaU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[3U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0xbU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[4U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0xcU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[4U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0xdU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[4U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0xeU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[5U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0xfU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[5U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x10U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[5U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x11U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[6U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x12U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[6U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x13U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[6U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x14U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[7U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x15U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[7U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x16U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[7U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x17U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[8U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x18U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[8U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x19U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[8U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x1aU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[9U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x1bU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[9U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x1cU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[9U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x1dU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xaU][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x1eU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xaU][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x1fU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xaU][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x20U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xbU][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x21U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xbU][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x22U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xbU][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x23U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xcU][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x24U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xcU][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x25U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xcU][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x26U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xdU][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x27U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xdU][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x28U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xdU][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x29U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xeU][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x2aU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xeU][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x2bU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xeU][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x2cU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xfU][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x2dU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xfU][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x2eU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0xfU][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x2fU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x10U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x30U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x10U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x31U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x10U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x32U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x11U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x33U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x11U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x34U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x11U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x35U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x12U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x36U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x12U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x37U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x12U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x38U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x13U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x39U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x13U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x3aU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x13U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x3bU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x14U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x3cU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x14U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x3dU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x14U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x3eU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x15U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x3fU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x15U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x40U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x15U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x41U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x16U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x42U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x16U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x43U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x16U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x44U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x17U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x45U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x17U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x46U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x17U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x47U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x18U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x48U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x18U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x49U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x18U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x4aU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x19U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x4bU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x19U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x4cU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x19U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x4dU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1aU][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x4eU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1aU][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x4fU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1aU][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x50U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1bU][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x51U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1bU][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x52U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1bU][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x53U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1cU][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x54U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1cU][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x55U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1cU][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x56U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1dU][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x57U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1dU][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x58U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1dU][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x59U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1eU][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x5aU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1eU][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x5bU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1eU][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x5cU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1fU][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x5dU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1fU][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x5eU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x1fU][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x5fU];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x20U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x60U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x20U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x61U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x20U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x62U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x21U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x63U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x21U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x64U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x21U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x65U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x22U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x66U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x22U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x67U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0x22U][2U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4[0x68U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[1U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [1U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[2U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [2U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[3U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [3U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[4U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [4U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[5U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [5U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[6U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [6U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[7U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [7U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[8U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [8U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[9U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [9U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0xaU] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0xaU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0xaU][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0xaU] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0xaU][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0xbU] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0xbU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0xbU][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0xbU] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0xbU][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0xcU] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0xcU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0xcU][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0xcU] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0xcU][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0xdU] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0xdU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0xdU][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0xdU] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0xdU][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0xeU] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0xeU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0xeU][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0xeU] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0xeU][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0xfU] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0xfU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0xfU][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0xfU] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0xfU][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x10U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x10U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x10U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x10U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x10U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x11U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x11U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x11U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x11U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x11U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x12U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x12U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x12U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x12U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x12U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x13U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x13U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x13U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x13U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x13U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x14U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x14U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x14U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x14U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x14U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x15U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x15U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x15U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x15U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x15U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x16U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x16U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x16U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x16U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x16U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x17U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x17U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x17U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x17U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x17U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x18U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x18U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x18U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x18U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x18U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x19U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x19U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x19U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x19U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x19U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x1aU] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x1aU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x1aU][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x1aU] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x1aU][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x1bU] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x1bU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x1bU][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x1bU] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x1bU][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x1cU] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x1cU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x1cU][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x1cU] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x1cU][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x1dU] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x1dU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x1dU][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x1dU] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x1dU][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x1eU] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x1eU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x1eU][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x1eU] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x1eU][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x1fU] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x1fU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x1fU][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x1fU] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x1fU][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x20U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x20U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x20U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x20U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x20U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x21U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x21U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x21U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x21U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x21U][2U];
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0x22U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                            [0x22U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
                             [0x22U][0U])));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0x22U] 
        = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list
        [0x22U][2U];
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3925]);
    ++(vlSymsp->__Vcoverage[3927]);
    ++(vlSymsp->__Vcoverage[3928]);
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__i = 0x23U;
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0xaU])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0xbU])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0xcU])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0xdU])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0xeU])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0xfU])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x10U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x11U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x12U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x13U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x14U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x15U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x16U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x17U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x18U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x19U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x1aU])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x1bU])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x1cU])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x1dU])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x1eU])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x1fU])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x20U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x21U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
                                  [0x22U])))) & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->top__DOT__de__DOT__wdata = ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit)
                                         ? vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out
                                         : 0ULL);
    if (((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[3924]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[3860]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3861]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3862]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3863]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3864]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3865]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3866]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3867]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3868]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3869]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3870]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3871]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3872]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3873]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3874]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3875]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3876]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3877]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3878]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3879]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3880]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3881]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3882]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3883]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3884]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3885]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3886]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3887]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3888]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3889]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3890]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3891]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3892]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3893]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3894]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3895]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3896]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3897]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3898]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3899]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3900]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3901]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3902]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3903]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3904]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3905]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3906]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3907]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3908]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3909]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3910]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3911]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3912]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3913]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3914]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3915]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3916]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3917]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3918]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3919]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3920]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3921]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3922]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3923]);
        vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__wdata) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wdata)))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__wdata)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__9\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp835;
    VlWide<8>/*255:0*/ __Vtemp836;
    VlWide<9>/*287:0*/ __Vtemp837;
    VlWide<13>/*415:0*/ __Vtemp840;
    VlWide<3>/*95:0*/ __Vtemp911;
    VlWide<3>/*95:0*/ __Vtemp912;
    VlWide<4>/*127:0*/ __Vtemp913;
    VlWide<4>/*127:0*/ __Vtemp914;
    VlWide<5>/*159:0*/ __Vtemp915;
    VlWide<5>/*159:0*/ __Vtemp916;
    VlWide<6>/*191:0*/ __Vtemp917;
    VlWide<6>/*191:0*/ __Vtemp918;
    VlWide<7>/*223:0*/ __Vtemp919;
    VlWide<7>/*223:0*/ __Vtemp920;
    VlWide<8>/*255:0*/ __Vtemp921;
    VlWide<8>/*255:0*/ __Vtemp922;
    VlWide<9>/*287:0*/ __Vtemp923;
    VlWide<9>/*287:0*/ __Vtemp924;
    VlWide<10>/*319:0*/ __Vtemp925;
    VlWide<10>/*319:0*/ __Vtemp926;
    VlWide<11>/*351:0*/ __Vtemp927;
    VlWide<12>/*383:0*/ __Vtemp928;
    VlWide<13>/*415:0*/ __Vtemp929;
    VlWide<13>/*415:0*/ __Vtemp930;
    VlWide<14>/*447:0*/ __Vtemp931;
    VlWide<14>/*447:0*/ __Vtemp932;
    VlWide<15>/*479:0*/ __Vtemp933;
    VlWide<15>/*479:0*/ __Vtemp934;
    VlWide<16>/*511:0*/ __Vtemp935;
    VlWide<16>/*511:0*/ __Vtemp936;
    VlWide<17>/*543:0*/ __Vtemp937;
    VlWide<17>/*543:0*/ __Vtemp938;
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst) ^ (IData)(vlSelf->top__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->top__DOT____Vtogcov__rst = vlSelf->rst;
    }
    if (((0x100073U == vlSelf->inst) ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__state))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->top__DOT__de__DOT____Vtogcov__state 
            = (0x100073U == vlSelf->inst);
    }
    if ((2U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (2U & (0x100073U == vlSelf->inst)));
    }
    if ((4U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (4U & (0x100073U == vlSelf->inst)));
    }
    if ((8U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (8U & (0x100073U == vlSelf->inst)));
    }
    if ((0x10U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x10U & (0x100073U == vlSelf->inst)));
    }
    if ((0x20U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x20U & (0x100073U == vlSelf->inst)));
    }
    if ((0x40U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x40U & (0x100073U == vlSelf->inst)));
    }
    if ((0x80U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x80U & (0x100073U == vlSelf->inst)));
    }
    if ((0x100U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x100U & (0x100073U == vlSelf->inst)));
    }
    if ((0x200U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x200U & (0x100073U == vlSelf->inst)));
    }
    if ((0x400U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x400U & (0x100073U == vlSelf->inst)));
    }
    if ((0x800U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x800U & (0x100073U == vlSelf->inst)));
    }
    if ((0x1000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x1000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x2000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x2000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x4000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x4000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x8000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x8000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x10000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x10000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x20000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x20000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x40000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x40000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x80000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x80000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x100000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x100000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x200000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x200000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x400000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x400000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x800000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x800000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x1000000U & ((0x100073U == vlSelf->inst) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x1000000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x2000000U & ((0x100073U == vlSelf->inst) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x2000000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x4000000U & ((0x100073U == vlSelf->inst) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x4000000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x8000000U & ((0x100073U == vlSelf->inst) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x8000000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x10000000U & ((0x100073U == vlSelf->inst) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x10000000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x20000000U & ((0x100073U == vlSelf->inst) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x20000000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x40000000U & ((0x100073U == vlSelf->inst) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x40000000U & (0x100073U == vlSelf->inst)));
    }
    if ((((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x80000000U & (0x100073U == vlSelf->inst)));
    }
    if ((1U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffffeU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (1U 
                                                & vlSelf->inst));
    }
    if ((2U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffffdU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (2U 
                                                & vlSelf->inst));
    }
    if ((4U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffffbU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (4U 
                                                & vlSelf->inst));
    }
    if ((8U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffff7U 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (8U 
                                                & vlSelf->inst));
    }
    if ((0x10U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffffefU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x10U 
                                                & vlSelf->inst));
    }
    if ((0x20U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffffdfU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x20U 
                                                & vlSelf->inst));
    }
    if ((0x40U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffffbfU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x40U 
                                                & vlSelf->inst));
    }
    if ((0x80U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffff7fU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x80U 
                                                & vlSelf->inst));
    }
    if ((0x100U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffeffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x100U 
                                                & vlSelf->inst));
    }
    if ((0x200U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffdffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x200U 
                                                & vlSelf->inst));
    }
    if ((0x400U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffbffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x400U 
                                                & vlSelf->inst));
    }
    if ((0x800U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffff7ffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x800U 
                                                & vlSelf->inst));
    }
    if ((0x1000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffefffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x1000U 
                                                & vlSelf->inst));
    }
    if ((0x2000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffdfffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x2000U 
                                                & vlSelf->inst));
    }
    if ((0x4000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffbfffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x4000U 
                                                & vlSelf->inst));
    }
    if ((0x8000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffff7fffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x8000U 
                                                & vlSelf->inst));
    }
    if ((0x10000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffeffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x10000U 
                                                & vlSelf->inst));
    }
    if ((0x20000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffdffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x20000U 
                                                & vlSelf->inst));
    }
    if ((0x40000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffbffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x40000U 
                                                & vlSelf->inst));
    }
    if ((0x80000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfff7ffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x80000U 
                                                & vlSelf->inst));
    }
    if ((0x100000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffefffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x100000U 
                                                & vlSelf->inst));
    }
    if ((0x200000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffdfffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x200000U 
                                                & vlSelf->inst));
    }
    if ((0x400000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffbfffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x400000U 
                                                & vlSelf->inst));
    }
    if ((0x800000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xff7fffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x800000U 
                                                & vlSelf->inst));
    }
    if ((0x1000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfeffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x1000000U 
                                                & vlSelf->inst));
    }
    if ((0x2000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfdffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x2000000U 
                                                & vlSelf->inst));
    }
    if ((0x4000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfbffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x4000000U 
                                                & vlSelf->inst));
    }
    if ((0x8000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xf7ffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x8000000U 
                                                & vlSelf->inst));
    }
    if ((0x10000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xefffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x10000000U 
                                                & vlSelf->inst));
    }
    if ((0x20000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xdfffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x20000000U 
                                                & vlSelf->inst));
    }
    if ((0x40000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xbfffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x40000000U 
                                                & vlSelf->inst));
    }
    if (((vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->top__DOT____Vtogcov__inst = ((0x7fffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x80000000U 
                                                & vlSelf->inst));
    }
    vlSelf->top__DOT__de__DOT__luimid = (((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (0xfffff000U 
                                                            & vlSelf->inst))));
    vlSelf->top__DOT__de__DOT__addauipc = (((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (0xfffff000U 
                                                              & vlSelf->inst))));
    __Vtemp835[2U] = (((IData)((((QData)((IData)((vlSelf->inst 
                                                  >> 0x1fU))) 
                                 << 0xcU) | (QData)((IData)(
                                                            ((0x800U 
                                                              & (vlSelf->inst 
                                                                 << 4U)) 
                                                             | ((0x7e0U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x14U)) 
                                                                | (0x1eU 
                                                                   & (vlSelf->inst 
                                                                      >> 7U)))))))) 
                       >> 9U) | ((IData)(((((QData)((IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             ((0x800U 
                                                               & (vlSelf->inst 
                                                                  << 4U)) 
                                                              | ((0x7e0U 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1eU 
                                                                    & (vlSelf->inst 
                                                                       >> 7U))))))) 
                                          >> 0x20U)) 
                                 << 0x17U));
    __Vtemp836[4U] = ((0x7fffffU & ((IData)((((QData)((IData)(
                                                              (vlSelf->inst 
                                                               >> 0x19U))) 
                                              << 5U) 
                                             | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U)))))) 
                                    >> 6U)) | ((0x3800000U 
                                                & ((IData)(
                                                           (((QData)((IData)(
                                                                             (vlSelf->inst 
                                                                              >> 0x19U))) 
                                                             << 5U) 
                                                            | (QData)((IData)(
                                                                              (0x1fU 
                                                                               & (vlSelf->inst 
                                                                                >> 7U)))))) 
                                                   >> 6U)) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             (vlSelf->inst 
                                                                              >> 0x19U))) 
                                                             << 5U) 
                                                            | (QData)((IData)(
                                                                              (0x1fU 
                                                                               & (vlSelf->inst 
                                                                                >> 7U))))) 
                                                           >> 0x20U)) 
                                                  << 0x1aU)));
    __Vtemp836[5U] = (0x8000000U | ((0x7fffffU & ((IData)(
                                                          ((((QData)((IData)(
                                                                             (vlSelf->inst 
                                                                              >> 0x19U))) 
                                                             << 5U) 
                                                            | (QData)((IData)(
                                                                              (0x1fU 
                                                                               & (vlSelf->inst 
                                                                                >> 7U))))) 
                                                           >> 0x20U)) 
                                                  >> 6U)) 
                                    | (((IData)((QData)((IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x14U)))) 
                                        << 0x1dU) | 
                                       (0x3800000U 
                                        & ((IData)(
                                                   ((((QData)((IData)(
                                                                      (vlSelf->inst 
                                                                       >> 0x19U))) 
                                                      << 5U) 
                                                     | (QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSelf->inst 
                                                                           >> 7U))))) 
                                                    >> 0x20U)) 
                                           >> 6U)))));
    __Vtemp836[6U] = ((0x7fffffU & ((IData)((QData)((IData)(
                                                            (vlSelf->inst 
                                                             >> 0x14U)))) 
                                    >> 3U)) | ((0x3800000U 
                                                & ((IData)((QData)((IData)(
                                                                           (vlSelf->inst 
                                                                            >> 0x14U)))) 
                                                   >> 3U)) 
                                               | ((0x1c000000U 
                                                   & ((IData)((QData)((IData)(
                                                                              (vlSelf->inst 
                                                                               >> 0x14U)))) 
                                                      >> 3U)) 
                                                  | ((IData)(
                                                             ((QData)((IData)(
                                                                              (vlSelf->inst 
                                                                               >> 0x14U))) 
                                                              >> 0x20U)) 
                                                     << 0x1dU))));
    __Vtemp836[7U] = (0x20000000U | ((0x7fffffU & ((IData)(
                                                           ((QData)((IData)(
                                                                            (vlSelf->inst 
                                                                             >> 0x14U))) 
                                                            >> 0x20U)) 
                                                   >> 3U)) 
                                     | ((0x3800000U 
                                         & ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))) 
                                                     >> 0x20U)) 
                                            >> 3U)) 
                                        | (0x1c000000U 
                                           & ((IData)(
                                                      ((QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x14U))) 
                                                       >> 0x20U)) 
                                              >> 3U)))));
    __Vtemp837[3U] = ((__Vtemp835[2U] >> 0x11U) | (0xffff8000U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x1fU))) 
                                                                 << 0xcU) 
                                                                | (QData)((IData)(
                                                                                ((0x800U 
                                                                                & (vlSelf->inst 
                                                                                << 4U)) 
                                                                                | ((0x7e0U 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U)) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))))))) 
                                                               >> 0x20U)) 
                                                      << 6U)));
    __Vtemp837[4U] = (0xc0U | (((0x7e00U & ((IData)(
                                                    (((QData)((IData)(
                                                                      (vlSelf->inst 
                                                                       >> 0x19U))) 
                                                      << 5U) 
                                                     | (QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSelf->inst 
                                                                           >> 7U)))))) 
                                            << 9U)) 
                                | ((IData)(((((QData)((IData)(
                                                              (vlSelf->inst 
                                                               >> 0x1fU))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               ((0x800U 
                                                                 & (vlSelf->inst 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (vlSelf->inst 
                                                                         >> 7U))))))) 
                                            >> 0x20U)) 
                                   >> 0x1aU)) | (__Vtemp836[4U] 
                                                 << 0xfU)));
    __Vtemp840[5U] = ((7U & ((IData)((0x40000000000000ULL 
                                      | (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0xcU))))) 
                             >> 0xeU)) | ((0x3fff8U 
                                           & ((IData)(
                                                      (0x40000000000000ULL 
                                                       | (QData)((IData)(
                                                                         (vlSelf->inst 
                                                                          >> 0xcU))))) 
                                              >> 0xeU)) 
                                          | ((IData)(
                                                     ((0x40000000000000ULL 
                                                       | (QData)((IData)(
                                                                         (vlSelf->inst 
                                                                          >> 0xcU)))) 
                                                      >> 0x20U)) 
                                             << 0x12U)));
    __Vtemp840[6U] = ((7U & ((IData)(((0x40000000000000ULL 
                                       | (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0xcU)))) 
                                      >> 0x20U)) >> 0xeU)) 
                      | (((0x3fe00U & ((IData)((((QData)((IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  ((0x800U 
                                                                    & (vlSelf->inst 
                                                                       << 4U)) 
                                                                   | ((0x7e0U 
                                                                       & (vlSelf->inst 
                                                                          >> 0x14U)) 
                                                                      | (0x1eU 
                                                                         & (vlSelf->inst 
                                                                            >> 7U)))))))) 
                                       << 9U)) | (0x3fff8U 
                                                  & ((IData)(
                                                             ((0x40000000000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0xcU)))) 
                                                              >> 0x20U)) 
                                                     >> 0xeU))) 
                         | (__Vtemp835[2U] << 0x12U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[0U] = 0U;
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[1U] = 0U;
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[2U] 
        = (7U | ((IData)((((QData)((IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                           << 0x14U) | (QData)((IData)(
                                                       ((0xff000U 
                                                         & vlSelf->inst) 
                                                        | ((0x800U 
                                                            & (vlSelf->inst 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->inst 
                                                                 >> 0x14U)))))))) 
                 << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[3U] 
        = (((IData)((((QData)((IData)((vlSelf->inst 
                                       >> 0x1fU))) 
                      << 0x14U) | (QData)((IData)((
                                                   (0xff000U 
                                                    & vlSelf->inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->inst 
                                                            >> 0x14U)))))))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (vlSelf->inst 
                                                     >> 0x1fU))) 
                                    << 0x14U) | (QData)((IData)(
                                                                ((0xff000U 
                                                                  & vlSelf->inst) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->inst 
                                                                        >> 9U)) 
                                                                    | (0x7feU 
                                                                       & (vlSelf->inst 
                                                                          >> 0x14U))))))) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[4U] 
        = (0x28U | (((IData)((0x40000000000000ULL | (QData)((IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0xcU))))) 
                     << 0x12U) | ((IData)(((((QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x1fU))) 
                                             << 0x14U) 
                                            | (QData)((IData)(
                                                              ((0xff000U 
                                                                & vlSelf->inst) 
                                                               | ((0x800U 
                                                                   & (vlSelf->inst 
                                                                      >> 9U)) 
                                                                  | (0x7feU 
                                                                     & (vlSelf->inst 
                                                                        >> 0x14U))))))) 
                                           >> 0x20U)) 
                                  >> 0x1dU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[5U] 
        = __Vtemp840[5U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[6U] 
        = __Vtemp840[6U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[7U] 
        = ((7U & (__Vtemp835[2U] >> 0xeU)) | (__Vtemp837[3U] 
                                              << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[8U] 
        = ((__Vtemp837[3U] >> 0x1dU) | (__Vtemp837[4U] 
                                        << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[9U] 
        = ((__Vtemp837[4U] >> 0x1dU) | ((0x3fff8U & 
                                         (__Vtemp836[4U] 
                                          >> 0xeU)) 
                                        | (__Vtemp836[5U] 
                                           << 0x12U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[0xaU] 
        = ((7U & (__Vtemp836[5U] >> 0xeU)) | ((0x3fff8U 
                                               & (__Vtemp836[5U] 
                                                  >> 0xeU)) 
                                              | (__Vtemp836[6U] 
                                                 << 0x12U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[0xbU] 
        = ((7U & (__Vtemp836[6U] >> 0xeU)) | ((0x3fff8U 
                                               & (__Vtemp836[6U] 
                                                  >> 0xeU)) 
                                              | (__Vtemp836[7U] 
                                                 << 0x12U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[0xcU] 
        = ((7U & (__Vtemp836[7U] >> 0xeU)) | (0x3fff8U 
                                              & (__Vtemp836[7U] 
                                                 >> 0xeU)));
    vlSelf->top__DOT__de__DOT__sraw = (0x4000503bU 
                                       | (0x1ff8f80U 
                                          & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__jalr = (0x67U | (0xffff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__addi = (0x13U | (0xffff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__andi = (0x7013U | (0xffff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__xori = (0x4013U | (0xffff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sllw = (0x103bU | (0x1ff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__srlw = (0x503bU | (0x1ff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__addiw = (0x1bU | (0xffff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__slliw = (0x101bU | (0x1ff8f80U 
                                                   & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__srliw = (0x501bU | (0x1ff8f80U 
                                                   & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sraiw = (0x4000501bU 
                                        | (0x1ff8f80U 
                                           & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__addw = (0x3bU | (0x1ff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__subw = (0x4000003bU 
                                       | (0x1ff8f80U 
                                          & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__mulw = (0x200003bU | 
                                       (0x1ff8f80U 
                                        & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__divw = (0x200403bU | 
                                       (0x1ff8f80U 
                                        & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__remw = (0x200603bU | 
                                       (0x1ff8f80U 
                                        & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__Add = (0x33U | (0x1ff8f80U 
                                               & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__Mul = (0x2000033U | 
                                      (0x1ff8f80U & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__And = (0x7033U | (0x1ff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__Or = (0x6033U | (0x1ff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sltu = (0x3033U | (0x1ff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__slt = (0x2033U | (0x1ff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sub = (0x40000033U | 
                                      (0x1ff8f80U & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sltiu = (0x3013U | (0xffff8f80U 
                                                   & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__srai = (0x40005013U 
                                       | (0x3ff8f80U 
                                          & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__slli = (0x1013U | (0x3ff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__srli = (0x5013U | (0x3ff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__beq = (0x63U | (0xffff8f80U 
                                               & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__bne = (0x1063U | (0xffff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__bge = (0x5063U | (0xffff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__bgeu = (0x7063U | (0xffff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__bltu = (0x6063U | (0xffff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__blt = (0x4063U | (0xffff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__lw = (0x2003U | (0xffff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__lh = (0x1003U | (0xffff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__lbu = (0x4003U | (0xffff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__lhu = (0x5003U | (0xffff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__ld = (0x3003U | (0xffff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sd = (0x3023U | (0xffff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sh = (0x1023U | (0xffff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sw = (0x2023U | (0xffff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sb = (0x23U | (0xffff8f80U 
                                              & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
           [0U]);
    ++(vlSymsp->__Vcoverage[4009]);
    ++(vlSymsp->__Vcoverage[4011]);
    ++(vlSymsp->__Vcoverage[4012]);
    vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__hit 
        = (vlSelf->inst == vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__i = 1U;
    vlSelf->top__DOT__de__DOT__raddr = ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__hit)
                                         ? (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)
                                         : 0U);
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__luimid) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__luimid)))) {
        ++(vlSymsp->__Vcoverage[2373]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__luimid)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2374]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2375]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2376]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2377]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2378]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2379]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2380]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2381]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2382]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2383]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2384]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2385]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2386]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2387]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2388]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2389]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2390]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2391]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2392]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2393]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2394]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2395]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2396]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2397]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2398]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2399]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2400]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2401]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2402]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2403]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2404]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2405]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2406]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2407]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2408]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2409]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2410]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2411]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2412]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2413]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2414]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2415]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2416]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2417]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2418]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2419]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2420]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2421]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2422]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2423]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2424]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2425]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2426]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2427]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2428]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2429]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2430]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2431]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2432]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2433]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2434]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2435]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2436]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__addauipc) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__addauipc)))) {
        ++(vlSymsp->__Vcoverage[2309]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__addauipc)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2310]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2311]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2312]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2313]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2314]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2315]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2316]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2317]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2318]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2319]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2320]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2321]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2322]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2323]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2324]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2325]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2326]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2327]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2328]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2329]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2330]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2331]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2332]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2333]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2334]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2335]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2336]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2337]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2338]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2339]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2340]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2341]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2342]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2343]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2344]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2345]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2346]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2347]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2348]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2349]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2350]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2351]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2352]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2353]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2354]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2355]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2356]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2357]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2358]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2359]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2360]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2361]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2362]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2363]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2364]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2365]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2366]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2367]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2368]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2369]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2370]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2371]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2372]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2116]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (1U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2117]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (2U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (4U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2119]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (8U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2120]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2121]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2122]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2123]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sraw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2124]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sraw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2125]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sraw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2126]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sraw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2127]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sraw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2128]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sraw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2129]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sraw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2130]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sraw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2131]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sraw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2132]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sraw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2133]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sraw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2134]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sraw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2135]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sraw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2136]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sraw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2137]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sraw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2138]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sraw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2139]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sraw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2140]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sraw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2141]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sraw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2142]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sraw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2143]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sraw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2144]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sraw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2145]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sraw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2146]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if (((vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2147]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2500]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (1U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2501]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (2U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2502]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (4U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2503]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (8U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2504]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x10U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2505]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x20U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2506]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x40U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2507]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x80U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__jalr 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2508]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x100U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__jalr 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2509]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x200U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__jalr 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2510]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x400U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__jalr 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2511]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x800U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__jalr 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2512]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__jalr 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2513]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__jalr 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2514]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__jalr 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2515]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__jalr 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2516]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__jalr 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2517]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__jalr 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2518]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__jalr 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2519]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__jalr 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2520]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__jalr 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2521]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__jalr 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2522]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__jalr 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2523]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__jalr 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2524]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__jalr 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2525]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__jalr 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2526]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__jalr 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2527]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__jalr 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2528]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__jalr 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2529]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__jalr 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2530]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if (((vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2531]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1956]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (1U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1957]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (2U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1958]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (4U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1959]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (8U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1960]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x10U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1961]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x20U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1962]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x40U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1963]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x80U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__addi 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1964]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x100U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__addi 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1965]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x200U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__addi 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1966]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x400U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__addi 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1967]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x800U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__addi 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1968]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__addi 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1969]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__addi 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1970]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__addi 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1971]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__addi 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1972]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__addi 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1973]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__addi 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1974]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__addi 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1975]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__addi 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1976]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__addi 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1977]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__addi 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1978]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__addi 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1979]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__addi 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1980]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__addi 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1981]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__addi 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1982]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__addi 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1983]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__addi 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1984]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__addi 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1985]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__addi 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1986]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if (((vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1987]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1988]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (1U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1989]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (2U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1990]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (4U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1991]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (8U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1992]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x10U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1993]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x20U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1994]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x40U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1995]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x80U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__andi 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1996]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x100U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__andi 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1997]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x200U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__andi 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1998]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x400U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__andi 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1999]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x800U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__andi 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2000]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__andi 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2001]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__andi 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2002]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__andi 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2003]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__andi 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2004]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__andi 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2005]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__andi 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2006]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__andi 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2007]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__andi 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2008]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__andi 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2009]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__andi 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2010]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__andi 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2011]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__andi 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2012]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__andi 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2013]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__andi 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2014]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__andi 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2015]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__andi 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2016]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__andi 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2017]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__andi 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2018]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if (((vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2019]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2020]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (1U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2021]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (2U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2022]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (4U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2023]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (8U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2024]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x10U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2025]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x20U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x40U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x80U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__xori 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x100U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__xori 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x200U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__xori 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x400U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__xori 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x800U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__xori 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__xori 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__xori 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__xori 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__xori 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__xori 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__xori 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__xori 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__xori 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__xori 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__xori 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__xori 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2043]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__xori 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2044]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__xori 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2045]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__xori 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2046]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__xori 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2047]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__xori 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2048]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__xori 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2049]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__xori 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2050]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if (((vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2051]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2052]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (1U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2053]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (2U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2054]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (4U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2055]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (8U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2056]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2057]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2058]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2059]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sllw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2060]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sllw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2061]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sllw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2062]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sllw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2063]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sllw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2064]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sllw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2065]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sllw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2066]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sllw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2067]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sllw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2068]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sllw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2069]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sllw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2070]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sllw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2071]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sllw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2072]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sllw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2073]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sllw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2074]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sllw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2075]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sllw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2076]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sllw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2077]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sllw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2078]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sllw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2079]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sllw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2080]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sllw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2081]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sllw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2082]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if (((vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2083]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2084]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (1U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2085]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (2U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2086]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (4U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2087]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (8U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2088]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2089]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2090]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2091]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__srlw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2092]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__srlw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2093]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__srlw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2094]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__srlw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2095]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__srlw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__srlw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__srlw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__srlw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__srlw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__srlw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__srlw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__srlw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__srlw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__srlw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__srlw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__srlw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__srlw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__srlw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__srlw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__srlw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__srlw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__srlw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__srlw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if (((vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__addiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2180]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (1U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__addiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2181]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (2U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__addiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2182]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (4U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__addiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2183]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (8U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__addiw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2184]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__addiw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2185]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__addiw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2186]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__addiw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2187]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__addiw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2188]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__addiw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2189]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__addiw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2190]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__addiw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2191]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__addiw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2192]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__addiw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2193]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__addiw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__addiw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2195]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__addiw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__addiw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__addiw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__addiw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2199]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__addiw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__addiw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2201]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__addiw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__addiw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2203]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__addiw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2204]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__addiw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2205]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__addiw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2206]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__addiw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2207]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__addiw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2208]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__addiw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2209]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__addiw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2210]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if (((vlSelf->top__DOT__de__DOT__addiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2211]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__slliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2212]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (1U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__slliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2213]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (2U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__slliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2214]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (4U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__slliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2215]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (8U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__slliw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2216]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__slliw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2217]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__slliw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2218]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__slliw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2219]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__slliw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2220]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__slliw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2221]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__slliw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2222]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__slliw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2223]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__slliw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2224]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__slliw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2225]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__slliw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2226]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__slliw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2227]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__slliw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2228]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__slliw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2229]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__slliw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2230]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__slliw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2231]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__slliw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2232]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__slliw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2233]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__slliw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2234]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__slliw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2235]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__slliw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2236]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__slliw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2237]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__slliw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2238]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__slliw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2239]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__slliw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2240]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__slliw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2241]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__slliw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2242]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if (((vlSelf->top__DOT__de__DOT__slliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2243]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__srliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2244]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (1U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__srliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2245]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (2U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__srliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2246]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (4U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__srliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2247]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (8U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__srliw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2248]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__srliw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2249]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__srliw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2250]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__srliw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2251]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__srliw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2252]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__srliw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2253]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__srliw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2254]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__srliw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2255]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__srliw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2256]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__srliw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2257]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__srliw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2258]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__srliw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2259]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__srliw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2260]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__srliw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2261]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__srliw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2262]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__srliw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2263]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__srliw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2264]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__srliw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2265]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__srliw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2266]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__srliw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2267]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__srliw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2268]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__srliw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2269]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__srliw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2270]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__srliw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2271]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__srliw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2272]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__srliw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2273]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__srliw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2274]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if (((vlSelf->top__DOT__de__DOT__srliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2275]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sraiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2276]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (1U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sraiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2277]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (2U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sraiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2278]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (4U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sraiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2279]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (8U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sraiw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2280]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sraiw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2281]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sraiw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2282]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sraiw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2283]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sraiw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2284]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sraiw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2285]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sraiw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2286]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sraiw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2287]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sraiw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2288]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sraiw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2289]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sraiw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2290]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sraiw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2291]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sraiw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2292]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sraiw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2293]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sraiw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2294]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sraiw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2295]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sraiw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2296]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sraiw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2297]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sraiw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2298]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sraiw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2299]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sraiw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2300]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sraiw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2301]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sraiw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2302]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sraiw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2303]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sraiw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2304]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sraiw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2305]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sraiw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2306]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if (((vlSelf->top__DOT__de__DOT__sraiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2307]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2820]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (1U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2821]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (2U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2822]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (4U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2823]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (8U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2824]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2825]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2826]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2827]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__addw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2828]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__addw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2829]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__addw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2830]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__addw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2831]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__addw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2832]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__addw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2833]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__addw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2834]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__addw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2835]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__addw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2836]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__addw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2837]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__addw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2838]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__addw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2839]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__addw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2840]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__addw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2841]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__addw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2842]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__addw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2843]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__addw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2844]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__addw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2845]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__addw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2846]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__addw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2847]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__addw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2848]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__addw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2849]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__addw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2850]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if (((vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2851]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2852]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (1U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2853]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (2U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2854]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (4U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2855]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (8U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2856]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2857]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2858]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2859]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__subw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2860]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__subw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2861]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__subw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2862]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__subw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2863]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__subw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2864]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__subw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2865]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__subw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2866]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__subw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2867]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__subw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2868]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__subw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2869]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__subw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2870]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__subw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2871]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__subw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2872]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__subw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2873]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__subw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2874]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__subw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2875]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__subw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2876]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__subw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2877]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__subw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2878]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__subw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2879]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__subw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2880]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__subw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2881]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__subw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2882]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if (((vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2883]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2884]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (1U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2885]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (2U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2886]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (4U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2887]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (8U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2888]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2889]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2890]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2891]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__mulw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2892]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__mulw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2893]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__mulw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2894]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__mulw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2895]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__mulw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2896]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__mulw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2897]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__mulw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2898]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__mulw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2899]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__mulw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2900]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__mulw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2901]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__mulw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2902]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__mulw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2903]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__mulw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2904]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__mulw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2905]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__mulw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2906]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__mulw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2907]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__mulw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2908]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__mulw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2909]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__mulw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2910]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__mulw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2911]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__mulw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2912]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__mulw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2913]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__mulw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[2914]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if (((vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2915]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2916]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (1U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2917]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (2U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2918]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (4U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2919]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (8U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2920]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2921]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2922]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2923]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__divw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2924]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__divw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2925]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__divw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2926]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__divw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2927]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__divw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2928]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__divw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2929]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__divw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2930]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__divw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2931]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__divw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2932]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__divw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2933]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__divw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2934]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__divw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2935]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__divw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2936]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__divw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2937]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__divw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2938]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__divw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2939]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__divw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2940]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__divw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2941]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__divw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2942]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__divw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2943]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__divw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2944]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__divw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2945]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__divw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[2946]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if (((vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2947]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2948]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (1U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2949]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (2U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2950]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (4U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2951]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (8U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2952]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2953]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2954]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2955]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__remw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2956]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__remw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2957]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__remw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2958]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__remw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2959]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__remw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2960]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__remw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2961]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__remw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2962]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__remw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2963]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__remw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2964]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__remw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2965]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__remw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2966]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__remw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2967]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__remw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2968]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__remw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2969]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__remw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2970]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__remw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2971]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__remw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2972]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__remw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2973]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__remw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2974]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__remw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2975]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__remw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2976]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__remw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2977]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__remw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[2978]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if (((vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2979]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2980]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (1U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2981]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (2U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2982]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (4U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2983]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (8U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2984]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x10U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2985]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x20U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2986]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x40U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2987]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x80U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2988]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x100U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x200U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2990]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x400U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2991]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x800U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__Add 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2992]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__Add 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2993]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__Add 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2994]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__Add 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2995]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__Add 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2996]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__Add 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2997]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__Add 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2998]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__Add 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[2999]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__Add 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3000]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__Add 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3001]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__Add 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3002]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__Add 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3003]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__Add 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3004]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__Add 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3005]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__Add 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3006]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__Add 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3007]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__Add 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__Add 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__Add 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if (((vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (1U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (2U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (4U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (8U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x10U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x20U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x40U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x80U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x100U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x200U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x400U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x800U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__Mul 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__Mul 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__Mul 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__Mul 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__Mul 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__Mul 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__Mul 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__Mul 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__Mul 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__Mul 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__Mul 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__Mul 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__Mul 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__Mul 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__Mul 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__Mul 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__Mul 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3040]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__Mul 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3041]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__Mul 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3042]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if (((vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3043]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3044]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (1U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3045]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (2U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3046]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (4U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3047]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (8U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3048]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x10U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3049]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x20U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3050]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x40U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3051]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x80U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3052]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x100U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3053]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x200U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3054]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x400U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3055]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x800U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__And 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3056]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__And 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__And 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3058]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__And 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3059]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__And 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3060]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__And 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3061]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__And 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3062]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__And 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3063]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__And 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3064]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__And 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3065]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__And 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3066]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__And 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3067]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__And 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3068]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__And 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3069]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__And 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3070]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__And 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3071]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__And 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3072]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__And 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3073]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__And 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3074]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__And));
    }
    if (((vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3075]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3076]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (1U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3077]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (2U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3078]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (4U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3079]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (8U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3080]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x10U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3081]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x20U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3082]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x40U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3083]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x80U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3084]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x100U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3085]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x200U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3086]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x400U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3087]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x800U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3088]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3089]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3090]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3091]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__Or 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3092]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__Or 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3093]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__Or 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3094]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__Or 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3095]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__Or 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3096]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__Or 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3097]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__Or 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3098]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__Or 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3099]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__Or 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3100]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__Or 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3101]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__Or 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3102]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__Or 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3103]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__Or 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3104]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__Or 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3105]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__Or 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3106]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if (((vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3107]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3108]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (1U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3109]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (2U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3110]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (4U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3111]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (8U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3112]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x10U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3113]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x20U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3114]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x40U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3115]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x80U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3116]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x100U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3117]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x200U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3118]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x400U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3119]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x800U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3120]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3121]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3122]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3123]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3124]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3125]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3126]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3127]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3128]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3129]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3130]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3131]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3132]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3133]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3134]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3135]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3136]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3137]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3138]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if (((vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3139]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3140]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (1U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3141]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (2U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3142]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (4U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3143]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (8U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3144]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x10U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3145]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x20U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3146]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x40U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3147]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x80U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3148]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x100U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3149]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x200U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3150]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x400U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3151]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x800U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__slt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3152]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__slt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3153]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__slt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3154]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__slt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3155]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__slt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3156]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__slt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3157]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__slt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3158]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__slt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3159]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__slt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3160]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__slt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3161]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__slt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3162]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__slt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3163]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__slt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3164]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__slt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3165]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__slt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3166]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__slt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3167]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__slt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3168]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__slt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3169]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__slt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3170]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if (((vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3171]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3172]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (1U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3173]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (2U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3174]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (4U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3175]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (8U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3176]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3177]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3178]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3179]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3180]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3181]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3182]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3183]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sub 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3184]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sub 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3185]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sub 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3186]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sub 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3187]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sub 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3188]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sub 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3189]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sub 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3190]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sub 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3191]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sub 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3192]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sub 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3193]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sub 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3194]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sub 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3195]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sub 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3196]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sub 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3197]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sub 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3198]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sub 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3199]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sub 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3200]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sub 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3201]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sub 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3202]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if (((vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3203]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3204]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (1U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3205]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (2U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3206]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (4U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3207]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (8U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sltiu 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3208]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x10U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sltiu 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3209]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x20U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sltiu 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3210]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x40U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sltiu 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3211]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x80U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sltiu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3212]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x100U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sltiu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3213]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x200U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sltiu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3214]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x400U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sltiu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3215]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x800U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sltiu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3216]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sltiu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3217]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sltiu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3218]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sltiu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3219]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sltiu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3220]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sltiu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3221]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sltiu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3222]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sltiu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3223]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sltiu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3224]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sltiu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3225]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sltiu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3226]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sltiu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3227]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3228]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3229]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3230]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3231]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3232]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3233]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3234]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if (((vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3235]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3236]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (1U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3237]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (2U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3238]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (4U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3239]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (8U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3240]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x10U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3241]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x20U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3242]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x40U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3243]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x80U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__srai 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3244]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x100U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__srai 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3245]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x200U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__srai 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3246]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x400U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__srai 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3247]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x800U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__srai 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3248]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__srai 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3249]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__srai 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3250]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__srai 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3251]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__srai 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3252]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__srai 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3253]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__srai 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3254]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__srai 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3255]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__srai 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3256]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__srai 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3257]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__srai 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3258]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__srai 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3259]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__srai 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3260]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__srai 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3261]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__srai 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3262]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__srai 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3263]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__srai 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3264]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__srai 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3265]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__srai 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3266]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if (((vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3267]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3268]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (1U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3269]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (2U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3270]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (4U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3271]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (8U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3272]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x10U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3273]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x20U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3274]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x40U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3275]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x80U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__slli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3276]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x100U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__slli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3277]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x200U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__slli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3278]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x400U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__slli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3279]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x800U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__slli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3280]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__slli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3281]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__slli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3282]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__slli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3283]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__slli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3284]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__slli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3285]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__slli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3286]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__slli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3287]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__slli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3288]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__slli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3289]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__slli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3290]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__slli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3291]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__slli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3292]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__slli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3293]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__slli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3294]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__slli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3295]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__slli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3296]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__slli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3297]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__slli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3298]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if (((vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3299]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3300]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (1U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3301]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (2U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3302]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (4U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3303]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (8U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3304]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x10U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3305]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x20U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3306]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x40U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3307]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x80U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__srli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3308]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x100U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__srli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3309]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x200U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__srli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3310]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x400U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__srli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3311]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x800U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__srli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3312]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__srli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3313]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__srli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3314]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__srli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3315]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__srli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3316]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__srli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3317]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__srli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3318]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__srli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3319]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__srli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3320]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__srli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3321]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__srli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3322]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__srli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3323]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__srli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3324]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__srli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3325]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__srli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3326]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__srli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3327]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__srli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3328]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__srli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3329]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__srli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3330]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if (((vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3331]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3332]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (1U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3333]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (2U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3334]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (4U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3335]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (8U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3336]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x10U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3337]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x20U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3338]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x40U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3339]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x80U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3340]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x100U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3341]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x200U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3342]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x400U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3343]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x800U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__beq 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3344]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__beq 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3345]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__beq 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3346]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__beq 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3347]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__beq 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3348]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__beq 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3349]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__beq 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3350]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__beq 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3351]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__beq 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3352]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__beq 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3353]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__beq 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3354]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__beq 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3355]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__beq 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3356]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__beq 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3357]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__beq 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3358]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__beq 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3359]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__beq 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3360]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__beq 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3361]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__beq 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3362]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if (((vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3363]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3364]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (1U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3365]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (2U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3366]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (4U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3367]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (8U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3368]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x10U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3369]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x20U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3370]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x40U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3371]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x80U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3372]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x100U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3373]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x200U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3374]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x400U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3375]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x800U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__bne 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3376]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__bne 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3377]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__bne 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3378]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__bne 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3379]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__bne 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3380]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__bne 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3381]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__bne 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3382]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__bne 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3383]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__bne 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3384]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__bne 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3385]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__bne 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3386]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__bne 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3387]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__bne 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3388]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__bne 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3389]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__bne 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3390]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__bne 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3391]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__bne 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3392]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__bne 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3393]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__bne 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3394]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if (((vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3395]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3396]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (1U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3397]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (2U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3398]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (4U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3399]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (8U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3400]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x10U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3401]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x20U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3402]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x40U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3403]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x80U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3404]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x100U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3405]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x200U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3406]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x400U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3407]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x800U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__bge 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3408]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__bge 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3409]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__bge 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3410]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__bge 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3411]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__bge 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3412]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__bge 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3413]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__bge 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3414]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__bge 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3415]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__bge 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3416]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__bge 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3417]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__bge 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3418]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__bge 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3419]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__bge 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3420]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__bge 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3421]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__bge 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3422]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__bge 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3423]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__bge 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3424]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__bge 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3425]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__bge 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3426]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if (((vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3427]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3428]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (1U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3429]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (2U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3430]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (4U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3431]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (8U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3432]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x10U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3433]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x20U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3434]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x40U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3435]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x80U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__bgeu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3436]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x100U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__bgeu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3437]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x200U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__bgeu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3438]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x400U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__bgeu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3439]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x800U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__bgeu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3440]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__bgeu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3441]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__bgeu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3442]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__bgeu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3443]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__bgeu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3444]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__bgeu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3445]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__bgeu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3446]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__bgeu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3447]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__bgeu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3448]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__bgeu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3449]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__bgeu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3450]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__bgeu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3451]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3452]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3453]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3454]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3455]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3456]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3457]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3458]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if (((vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3459]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3460]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (1U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3461]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (2U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3462]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (4U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3463]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (8U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3464]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x10U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3465]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x20U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3466]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x40U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3467]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x80U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__bltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3468]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x100U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__bltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3469]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x200U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__bltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3470]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x400U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__bltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3471]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x800U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__bltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3472]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__bltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3473]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__bltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3474]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__bltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3475]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__bltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3476]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__bltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3477]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__bltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3478]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__bltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3479]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__bltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3480]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__bltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3481]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__bltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3482]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__bltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3483]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__bltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3484]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__bltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3485]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__bltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3486]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__bltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3487]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__bltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3488]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__bltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3489]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__bltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3490]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if (((vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3491]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3492]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (1U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3493]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (2U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3494]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (4U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3495]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (8U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3496]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x10U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3497]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x20U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3498]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x40U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3499]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x80U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3500]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x100U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3501]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x200U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3502]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x400U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3503]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x800U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__blt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3504]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__blt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3505]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__blt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3506]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__blt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3507]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__blt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3508]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__blt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3509]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__blt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3510]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__blt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3511]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__blt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3512]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__blt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3513]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__blt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3514]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__blt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3515]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__blt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3516]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__blt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3517]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__blt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3518]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__blt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3519]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__blt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3520]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__blt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3521]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__blt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3522]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if (((vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3523]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2660]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (1U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2661]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (2U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2662]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (4U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2663]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (8U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2664]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2665]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2666]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2667]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2668]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2669]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2670]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2671]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2672]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2673]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2674]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2675]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2676]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2677]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2678]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2679]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2680]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2681]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2682]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2683]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2684]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2685]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2686]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2687]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2688]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2689]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2690]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if (((vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2691]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2692]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (1U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2693]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (2U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2694]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (4U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2695]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (8U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2696]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2697]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2698]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2699]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2700]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2701]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2702]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2703]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2704]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2705]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2706]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2707]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2708]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2709]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2710]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2711]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2712]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2713]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2714]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2715]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2716]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2717]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2718]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2719]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2720]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2721]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2722]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if (((vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2723]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2724]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (1U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2725]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (2U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2726]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (4U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2727]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (8U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2728]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2729]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2730]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2731]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2732]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2733]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2734]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2735]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lbu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2736]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lbu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2737]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lbu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2738]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lbu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2739]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lbu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2740]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lbu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2741]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lbu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2742]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lbu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2743]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lbu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2744]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lbu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2745]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lbu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2746]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lbu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2747]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lbu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2748]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lbu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2749]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lbu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2750]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lbu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2751]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lbu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2752]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lbu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2753]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lbu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2754]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if (((vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2755]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2756]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (1U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2757]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (2U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2758]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (4U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2759]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (8U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2760]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2761]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2762]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2763]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2764]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2765]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2766]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2767]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lhu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2768]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lhu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2769]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lhu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2770]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lhu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2771]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lhu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2772]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lhu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2773]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lhu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2774]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lhu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2775]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lhu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2776]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lhu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2777]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lhu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2778]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lhu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2779]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lhu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2780]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lhu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2781]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lhu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2782]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lhu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2783]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lhu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2784]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lhu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2785]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lhu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2786]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if (((vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2787]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2788]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (1U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2789]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (2U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2790]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (4U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2791]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (8U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2792]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x10U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2793]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x20U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2794]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x40U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2795]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x80U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2796]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x100U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2797]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x200U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2798]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x400U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2799]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x800U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2800]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2801]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2802]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2803]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__ld 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2804]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__ld 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2805]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__ld 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2806]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__ld 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2807]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__ld 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2808]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__ld 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2809]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__ld 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2810]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__ld 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2811]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__ld 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2812]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__ld 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2813]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__ld 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2814]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__ld 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2815]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__ld 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2816]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__ld 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2817]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__ld 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2818]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if (((vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2819]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0U] 
        = (IData)((((QData)((IData)((0x1fU & (vlSelf->inst 
                                              >> 7U)))) 
                    << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__de__DOT__srli)) 
                                  << 5U) | (QData)((IData)(
                                                           (0x1fU 
                                                            & (vlSelf->inst 
                                                               >> 7U)))))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[1U] 
        = ((vlSelf->top__DOT__de__DOT__slli << 0xaU) 
           | (IData)(((((QData)((IData)((0x1fU & (vlSelf->inst 
                                                  >> 7U)))) 
                        << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__de__DOT__srli)) 
                                      << 5U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U)))))) 
                      >> 0x20U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[2U] 
        = ((vlSelf->top__DOT__de__DOT__srai << 0xfU) 
           | ((0x7c00U & (vlSelf->inst << 3U)) | (vlSelf->top__DOT__de__DOT__slli 
                                                  >> 0x16U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[3U] 
        = ((vlSelf->top__DOT__de__DOT__srai >> 0x11U) 
           | ((IData)((((QData)((IData)((0x1fU & (vlSelf->inst 
                                                  >> 7U)))) 
                        << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__de__DOT__ld)) 
                                      << 5U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U))))))) 
              << 0xfU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[4U] 
        = (((IData)((((QData)((IData)((0x1fU & (vlSelf->inst 
                                                >> 7U)))) 
                      << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__de__DOT__ld)) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->inst 
                                                                 >> 7U))))))) 
            >> 0x11U) | ((vlSelf->top__DOT__de__DOT__sraiw 
                          << 0x19U) | ((IData)(((((QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->inst 
                                                                      >> 7U)))) 
                                                  << 0x25U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT__de__DOT__ld)) 
                                                     << 5U) 
                                                    | (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (vlSelf->inst 
                                                                          >> 7U)))))) 
                                                >> 0x20U)) 
                                       << 0xfU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[5U] 
        = (((0x7fffU & (vlSelf->top__DOT__de__DOT__sraiw 
                        >> 7U)) | ((IData)(((((QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->inst 
                                                                  >> 7U)))) 
                                              << 0x25U) 
                                             | (((QData)((IData)(vlSelf->top__DOT__de__DOT__ld)) 
                                                 << 5U) 
                                                | (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->inst 
                                                                      >> 7U)))))) 
                                            >> 0x20U)) 
                                   >> 0x11U)) | ((vlSelf->top__DOT__de__DOT__srliw 
                                                  << 0x1eU) 
                                                 | ((0x3e000000U 
                                                     & (vlSelf->inst 
                                                        << 0x12U)) 
                                                    | (0x1ff8000U 
                                                       & (vlSelf->top__DOT__de__DOT__sraiw 
                                                          >> 7U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[6U] 
        = ((0x7fffU & (vlSelf->top__DOT__de__DOT__srliw 
                       >> 2U)) | ((0xc0000000U & (vlSelf->inst 
                                                  << 0x17U)) 
                                  | (0x3fff8000U & 
                                     (vlSelf->top__DOT__de__DOT__srliw 
                                      >> 2U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[7U] 
        = (((0x7ff8U & (vlSelf->top__DOT__de__DOT__slliw 
                        << 3U)) | (7U & (vlSelf->inst 
                                         >> 9U))) | 
           (0xffff8000U & (vlSelf->top__DOT__de__DOT__slliw 
                           << 3U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[8U] 
        = (((0x7f00U & (vlSelf->top__DOT__de__DOT__addiw 
                        << 8U)) | ((0xf8U & (vlSelf->inst 
                                             >> 4U)) 
                                   | (vlSelf->top__DOT__de__DOT__slliw 
                                      >> 0x1dU))) | 
           (0xffff8000U & (vlSelf->top__DOT__de__DOT__addiw 
                           << 8U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[9U] 
        = (((0x6000U & (vlSelf->top__DOT__de__DOT__sltiu 
                        << 0xdU)) | ((0x1f00U & (vlSelf->inst 
                                                 << 1U)) 
                                     | (vlSelf->top__DOT__de__DOT__addiw 
                                        >> 0x18U))) 
           | (0xffff8000U & (vlSelf->top__DOT__de__DOT__sltiu 
                             << 0xdU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xaU] 
        = (((0x6000U & (vlSelf->inst << 6U)) | (vlSelf->top__DOT__de__DOT__sltiu 
                                                >> 0x13U)) 
           | ((vlSelf->top__DOT__de__DOT__sub << 0x12U) 
              | (0x38000U & (vlSelf->inst << 6U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xbU] 
        = ((0x7fffU & (vlSelf->top__DOT__de__DOT__sub 
                       >> 0xeU)) | ((vlSelf->top__DOT__de__DOT__slt 
                                     << 0x17U) | ((0x7c0000U 
                                                   & (vlSelf->inst 
                                                      << 0xbU)) 
                                                  | (0x38000U 
                                                     & (vlSelf->top__DOT__de__DOT__sub 
                                                        >> 0xeU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xcU] 
        = ((0x7fffU & (vlSelf->top__DOT__de__DOT__slt 
                       >> 9U)) | ((vlSelf->top__DOT__de__DOT__sltu 
                                   << 0x1cU) | ((0xf800000U 
                                                 & (vlSelf->inst 
                                                    << 0x10U)) 
                                                | (0x7f8000U 
                                                   & (vlSelf->top__DOT__de__DOT__slt 
                                                      >> 9U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xdU] 
        = ((0x7fffU & (vlSelf->top__DOT__de__DOT__sltu 
                       >> 4U)) | ((0xf0000000U & (vlSelf->inst 
                                                  << 0x15U)) 
                                  | (0xfff8000U & (vlSelf->top__DOT__de__DOT__sltu 
                                                   >> 4U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xeU] 
        = (((0x7ffeU & (vlSelf->top__DOT__de__DOT__Or 
                        << 1U)) | (1U & (vlSelf->inst 
                                         >> 0xbU))) 
           | (0xffff8000U & (vlSelf->top__DOT__de__DOT__Or 
                             << 1U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xfU] 
        = (((0x7fc0U & (vlSelf->top__DOT__de__DOT__And 
                        << 6U)) | ((0x3eU & (vlSelf->inst 
                                             >> 6U)) 
                                   | (vlSelf->top__DOT__de__DOT__Or 
                                      >> 0x1fU))) | 
           (0xffff8000U & (vlSelf->top__DOT__de__DOT__And 
                           << 6U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x10U] 
        = (((0x7800U & (vlSelf->top__DOT__de__DOT__Mul 
                        << 0xbU)) | ((0x7c0U & (vlSelf->inst 
                                                >> 1U)) 
                                     | (vlSelf->top__DOT__de__DOT__And 
                                        >> 0x1aU))) 
           | (0xffff8000U & (vlSelf->top__DOT__de__DOT__Mul 
                             << 0xbU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x11U] 
        = (((0x7800U & (vlSelf->inst << 4U)) | (vlSelf->top__DOT__de__DOT__Mul 
                                                >> 0x15U)) 
           | ((vlSelf->top__DOT__de__DOT__Add << 0x10U) 
              | (0x8000U & (vlSelf->inst << 4U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x12U] 
        = ((0x7fffU & (vlSelf->top__DOT__de__DOT__Add 
                       >> 0x10U)) | ((vlSelf->top__DOT__de__DOT__sraw 
                                      << 0x15U) | (
                                                   (0x1f0000U 
                                                    & (vlSelf->inst 
                                                       << 9U)) 
                                                   | (0x8000U 
                                                      & (vlSelf->top__DOT__de__DOT__Add 
                                                         >> 0x10U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x13U] 
        = ((0x7fffU & (vlSelf->top__DOT__de__DOT__sraw 
                       >> 0xbU)) | ((vlSelf->top__DOT__de__DOT__srlw 
                                     << 0x1aU) | ((0x3e00000U 
                                                   & (vlSelf->inst 
                                                      << 0xeU)) 
                                                  | (0x1f8000U 
                                                     & (vlSelf->top__DOT__de__DOT__sraw 
                                                        >> 0xbU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x14U] 
        = ((0x7fffU & (vlSelf->top__DOT__de__DOT__srlw 
                       >> 6U)) | ((vlSelf->top__DOT__de__DOT__sllw 
                                   << 0x1fU) | ((0x7c000000U 
                                                 & (vlSelf->inst 
                                                    << 0x13U)) 
                                                | (0x3ff8000U 
                                                   & (vlSelf->top__DOT__de__DOT__srlw 
                                                      >> 6U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x15U] 
        = ((0x7fffU & (vlSelf->top__DOT__de__DOT__sllw 
                       >> 1U)) | ((0x80000000U & (vlSelf->inst 
                                                  << 0x18U)) 
                                  | (0x7fff8000U & 
                                     (vlSelf->top__DOT__de__DOT__sllw 
                                      >> 1U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x16U] 
        = (((0x7ff0U & (vlSelf->top__DOT__de__DOT__remw 
                        << 4U)) | (0xfU & (vlSelf->inst 
                                           >> 8U))) 
           | (0xffff8000U & (vlSelf->top__DOT__de__DOT__remw 
                             << 4U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x17U] 
        = (((0x7e00U & (vlSelf->top__DOT__de__DOT__divw 
                        << 9U)) | ((0x1f0U & (vlSelf->inst 
                                              >> 3U)) 
                                   | (vlSelf->top__DOT__de__DOT__remw 
                                      >> 0x1cU))) | 
           (0xffff8000U & (vlSelf->top__DOT__de__DOT__divw 
                           << 9U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x18U] 
        = (((0x4000U & (vlSelf->top__DOT__de__DOT__mulw 
                        << 0xeU)) | ((0x3e00U & (vlSelf->inst 
                                                 << 2U)) 
                                     | (vlSelf->top__DOT__de__DOT__divw 
                                        >> 0x17U))) 
           | (0xffff8000U & (vlSelf->top__DOT__de__DOT__mulw 
                             << 0xeU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x19U] 
        = (((0x4000U & (vlSelf->inst << 7U)) | (vlSelf->top__DOT__de__DOT__mulw 
                                                >> 0x12U)) 
           | ((vlSelf->top__DOT__de__DOT__subw << 0x13U) 
              | (0x78000U & (vlSelf->inst << 7U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1aU] 
        = ((0x7fffU & (vlSelf->top__DOT__de__DOT__subw 
                       >> 0xdU)) | ((vlSelf->top__DOT__de__DOT__addw 
                                     << 0x18U) | ((0xf80000U 
                                                   & (vlSelf->inst 
                                                      << 0xcU)) 
                                                  | (0x78000U 
                                                     & (vlSelf->top__DOT__de__DOT__subw 
                                                        >> 0xdU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1bU] 
        = ((0x7fffU & (vlSelf->top__DOT__de__DOT__addw 
                       >> 8U)) | ((vlSelf->top__DOT__de__DOT__lhu 
                                   << 0x1dU) | ((0x1f000000U 
                                                 & (vlSelf->inst 
                                                    << 0x11U)) 
                                                | (0xff8000U 
                                                   & (vlSelf->top__DOT__de__DOT__addw 
                                                      >> 8U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1cU] 
        = ((0x7fffU & (vlSelf->top__DOT__de__DOT__lhu 
                       >> 3U)) | ((0xe0000000U & (vlSelf->inst 
                                                  << 0x16U)) 
                                  | (0x1fff8000U & 
                                     (vlSelf->top__DOT__de__DOT__lhu 
                                      >> 3U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1dU] 
        = (((0x7ffcU & (vlSelf->top__DOT__de__DOT__lbu 
                        << 2U)) | (3U & (vlSelf->inst 
                                         >> 0xaU))) 
           | (0xffff8000U & (vlSelf->top__DOT__de__DOT__lbu 
                             << 2U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1eU] 
        = (((0x7f80U & (vlSelf->top__DOT__de__DOT__lh 
                        << 7U)) | ((0x7cU & (vlSelf->inst 
                                             >> 5U)) 
                                   | (vlSelf->top__DOT__de__DOT__lbu 
                                      >> 0x1eU))) | 
           (0xffff8000U & (vlSelf->top__DOT__de__DOT__lh 
                           << 7U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1fU] 
        = (((0x7000U & (vlSelf->top__DOT__de__DOT__lw 
                        << 0xcU)) | ((0xf80U & vlSelf->inst) 
                                     | (vlSelf->top__DOT__de__DOT__lh 
                                        >> 0x19U))) 
           | (0xffff8000U & (vlSelf->top__DOT__de__DOT__lw 
                             << 0xcU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x20U] 
        = (((0x7000U & (vlSelf->inst << 5U)) | (vlSelf->top__DOT__de__DOT__lw 
                                                >> 0x14U)) 
           | ((vlSelf->top__DOT__de__DOT__jalr << 0x11U) 
              | (0x18000U & (vlSelf->inst << 5U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x21U] 
        = ((0x7fffU & (vlSelf->top__DOT__de__DOT__jalr 
                       >> 0xfU)) | ((0xffc00000U & 
                                     (0x1bc00000U | 
                                      (0xe0000000U 
                                       & (vlSelf->inst 
                                          << 0x16U)))) 
                                    | ((0x3e0000U & 
                                        (vlSelf->inst 
                                         << 0xaU)) 
                                       | (0x18000U 
                                          & (vlSelf->top__DOT__de__DOT__jalr 
                                             >> 0xfU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x22U] 
        = (0xb8000000U | ((0x7fffU & (vlSelf->inst 
                                      >> 0xaU)) | (
                                                   (0x7c00000U 
                                                    & (vlSelf->inst 
                                                       << 0xfU)) 
                                                   | (0x3f8000U 
                                                      & (vlSelf->inst 
                                                         >> 0xaU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x23U] 
        = ((0x7fffU & (1U | (0x7ffcU & (vlSelf->inst 
                                        >> 5U)))) | 
           ((0xf8000000U & (vlSelf->inst << 0x14U)) 
            | (0x7ff8000U & (vlSelf->inst >> 5U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x24U] 
        = ((0x7fffU & (0x17U | (0x7f80U & vlSelf->inst))) 
           | (0xffff8000U & vlSelf->inst));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x25U] 
        = (((0x7fe0U & (vlSelf->top__DOT__de__DOT__xori 
                        << 5U)) | (0x1fU & (vlSelf->inst 
                                            >> 7U))) 
           | (0xffff8000U & (vlSelf->top__DOT__de__DOT__xori 
                             << 5U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x26U] 
        = (((0x7c00U & (vlSelf->top__DOT__de__DOT__andi 
                        << 0xaU)) | ((0x3e0U & (vlSelf->inst 
                                                >> 2U)) 
                                     | (vlSelf->top__DOT__de__DOT__xori 
                                        >> 0x1bU))) 
           | (0xffff8000U & (vlSelf->top__DOT__de__DOT__andi 
                             << 0xaU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x27U] 
        = (((0x7c00U & (vlSelf->inst << 3U)) | (vlSelf->top__DOT__de__DOT__andi 
                                                >> 0x16U)) 
           | (vlSelf->top__DOT__de__DOT__addi << 0xfU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x28U] 
        = (vlSelf->top__DOT__de__DOT__addi >> 0x11U);
    if ((1U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2532]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (1U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2533]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (2U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2534]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (4U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2535]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (8U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2536]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2537]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2538]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2539]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2540]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2541]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2542]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2543]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2544]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2545]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2546]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2547]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2548]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2549]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2550]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2551]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2552]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2553]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2554]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2555]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2556]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2557]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2558]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2559]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2560]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2561]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2562]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if (((vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2563]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2564]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (1U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2565]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (2U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2566]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (4U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2567]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (8U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2568]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2569]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2570]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2571]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2572]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2573]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2574]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2575]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2576]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2577]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2578]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2579]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2580]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2581]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2582]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2583]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2584]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2585]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2586]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2587]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2588]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2589]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2590]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2591]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2592]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2593]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2594]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if (((vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2595]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2596]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (1U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2597]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (2U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2598]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (4U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2599]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (8U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2600]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2601]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2602]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2603]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2604]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2605]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2606]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2607]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2608]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2609]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2610]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2611]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2612]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2613]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2614]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2615]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2616]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2617]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2618]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2619]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2620]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2621]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2622]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2623]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2624]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2625]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2626]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if (((vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2627]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2628]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (1U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2629]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (2U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2630]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (4U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2631]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (8U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2632]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2633]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2634]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2635]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2636]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2637]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2638]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2639]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2640]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2641]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2642]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2643]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2644]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2645]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2646]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2647]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2648]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2649]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2650]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2651]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2652]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2653]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2654]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2655]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2656]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2657]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2658]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if (((vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2659]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
        = (IData)((0x30000000001ULL | ((QData)((IData)(vlSelf->top__DOT__de__DOT__sb)) 
                                       << 8U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
        = ((vlSelf->top__DOT__de__DOT__sh << 0x10U) 
           | (IData)(((0x30000000001ULL | ((QData)((IData)(vlSelf->top__DOT__de__DOT__sb)) 
                                           << 8U)) 
                      >> 0x20U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
        = (0xf0000U | ((vlSelf->top__DOT__de__DOT__sw 
                        << 0x18U) | (vlSelf->top__DOT__de__DOT__sh 
                                     >> 0x10U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
        = (0xff000000U | (vlSelf->top__DOT__de__DOT__sw 
                          >> 8U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
        = vlSelf->top__DOT__de__DOT__sd;
    __Vtemp911[0U] = (IData)((1ULL | ((QData)((IData)(vlSelf->top__DOT__de__DOT__sltiu)) 
                                      << 3U)));
    __Vtemp911[1U] = ((vlSelf->top__DOT__de__DOT__sub 
                       << 6U) | (IData)(((1ULL | ((QData)((IData)(vlSelf->top__DOT__de__DOT__sltiu)) 
                                                  << 3U)) 
                                         >> 0x20U)));
    __Vtemp911[2U] = (vlSelf->top__DOT__de__DOT__sub 
                      >> 0x1aU);
    VL_EXTEND_WW(73,70, __Vtemp912, __Vtemp911);
    __Vtemp913[0U] = __Vtemp912[0U];
    __Vtemp913[1U] = __Vtemp912[1U];
    __Vtemp913[2U] = ((vlSelf->top__DOT__de__DOT__slt 
                       << 9U) | __Vtemp912[2U]);
    __Vtemp913[3U] = (vlSelf->top__DOT__de__DOT__slt 
                      >> 0x17U);
    VL_EXTEND_WW(108,105, __Vtemp914, __Vtemp913);
    __Vtemp915[0U] = __Vtemp914[0U];
    __Vtemp915[1U] = __Vtemp914[1U];
    __Vtemp915[2U] = __Vtemp914[2U];
    __Vtemp915[3U] = ((vlSelf->top__DOT__de__DOT__sltu 
                       << 0xcU) | __Vtemp914[3U]);
    __Vtemp915[4U] = (vlSelf->top__DOT__de__DOT__sltu 
                      >> 0x14U);
    VL_EXTEND_WW(143,140, __Vtemp916, __Vtemp915);
    __Vtemp917[0U] = __Vtemp916[0U];
    __Vtemp917[1U] = __Vtemp916[1U];
    __Vtemp917[2U] = __Vtemp916[2U];
    __Vtemp917[3U] = __Vtemp916[3U];
    __Vtemp917[4U] = ((vlSelf->top__DOT__de__DOT__Or 
                       << 0xfU) | __Vtemp916[4U]);
    __Vtemp917[5U] = (vlSelf->top__DOT__de__DOT__Or 
                      >> 0x11U);
    VL_EXTEND_WW(178,175, __Vtemp918, __Vtemp917);
    __Vtemp919[0U] = __Vtemp918[0U];
    __Vtemp919[1U] = __Vtemp918[1U];
    __Vtemp919[2U] = __Vtemp918[2U];
    __Vtemp919[3U] = __Vtemp918[3U];
    __Vtemp919[4U] = __Vtemp918[4U];
    __Vtemp919[5U] = ((vlSelf->top__DOT__de__DOT__And 
                       << 0x12U) | __Vtemp918[5U]);
    __Vtemp919[6U] = (vlSelf->top__DOT__de__DOT__And 
                      >> 0xeU);
    VL_EXTEND_WW(213,210, __Vtemp920, __Vtemp919);
    __Vtemp921[0U] = __Vtemp920[0U];
    __Vtemp921[1U] = __Vtemp920[1U];
    __Vtemp921[2U] = __Vtemp920[2U];
    __Vtemp921[3U] = __Vtemp920[3U];
    __Vtemp921[4U] = __Vtemp920[4U];
    __Vtemp921[5U] = __Vtemp920[5U];
    __Vtemp921[6U] = ((vlSelf->top__DOT__de__DOT__Mul 
                       << 0x15U) | __Vtemp920[6U]);
    __Vtemp921[7U] = (vlSelf->top__DOT__de__DOT__Mul 
                      >> 0xbU);
    VL_EXTEND_WW(248,245, __Vtemp922, __Vtemp921);
    __Vtemp923[0U] = __Vtemp922[0U];
    __Vtemp923[1U] = __Vtemp922[1U];
    __Vtemp923[2U] = __Vtemp922[2U];
    __Vtemp923[3U] = __Vtemp922[3U];
    __Vtemp923[4U] = __Vtemp922[4U];
    __Vtemp923[5U] = __Vtemp922[5U];
    __Vtemp923[6U] = __Vtemp922[6U];
    __Vtemp923[7U] = ((vlSelf->top__DOT__de__DOT__Add 
                       << 0x18U) | __Vtemp922[7U]);
    __Vtemp923[8U] = (vlSelf->top__DOT__de__DOT__Add 
                      >> 8U);
    VL_EXTEND_WW(283,280, __Vtemp924, __Vtemp923);
    __Vtemp925[0U] = __Vtemp924[0U];
    __Vtemp925[1U] = __Vtemp924[1U];
    __Vtemp925[2U] = __Vtemp924[2U];
    __Vtemp925[3U] = __Vtemp924[3U];
    __Vtemp925[4U] = __Vtemp924[4U];
    __Vtemp925[5U] = __Vtemp924[5U];
    __Vtemp925[6U] = __Vtemp924[6U];
    __Vtemp925[7U] = __Vtemp924[7U];
    __Vtemp925[8U] = ((vlSelf->top__DOT__de__DOT__sraw 
                       << 0x1bU) | __Vtemp924[8U]);
    __Vtemp925[9U] = (vlSelf->top__DOT__de__DOT__sraw 
                      >> 5U);
    VL_EXTEND_WW(318,315, __Vtemp926, __Vtemp925);
    __Vtemp927[0U] = __Vtemp926[0U];
    __Vtemp927[1U] = __Vtemp926[1U];
    __Vtemp927[2U] = __Vtemp926[2U];
    __Vtemp927[3U] = __Vtemp926[3U];
    __Vtemp927[4U] = __Vtemp926[4U];
    __Vtemp927[5U] = __Vtemp926[5U];
    __Vtemp927[6U] = __Vtemp926[6U];
    __Vtemp927[7U] = __Vtemp926[7U];
    __Vtemp927[8U] = __Vtemp926[8U];
    __Vtemp927[9U] = ((vlSelf->top__DOT__de__DOT__srlw 
                       << 0x1eU) | __Vtemp926[9U]);
    __Vtemp927[0xaU] = (vlSelf->top__DOT__de__DOT__srlw 
                        >> 2U);
    VL_EXTEND_WW(353,350, __Vtemp928, __Vtemp927);
    __Vtemp929[0U] = __Vtemp928[0U];
    __Vtemp929[1U] = __Vtemp928[1U];
    __Vtemp929[2U] = __Vtemp928[2U];
    __Vtemp929[3U] = __Vtemp928[3U];
    __Vtemp929[4U] = __Vtemp928[4U];
    __Vtemp929[5U] = __Vtemp928[5U];
    __Vtemp929[6U] = __Vtemp928[6U];
    __Vtemp929[7U] = __Vtemp928[7U];
    __Vtemp929[8U] = __Vtemp928[8U];
    __Vtemp929[9U] = __Vtemp928[9U];
    __Vtemp929[0xaU] = __Vtemp928[0xaU];
    __Vtemp929[0xbU] = ((vlSelf->top__DOT__de__DOT__sllw 
                         << 1U) | __Vtemp928[0xbU]);
    __Vtemp929[0xcU] = (vlSelf->top__DOT__de__DOT__sllw 
                        >> 0x1fU);
    VL_EXTEND_WW(388,385, __Vtemp930, __Vtemp929);
    __Vtemp931[0U] = __Vtemp930[0U];
    __Vtemp931[1U] = __Vtemp930[1U];
    __Vtemp931[2U] = __Vtemp930[2U];
    __Vtemp931[3U] = __Vtemp930[3U];
    __Vtemp931[4U] = __Vtemp930[4U];
    __Vtemp931[5U] = __Vtemp930[5U];
    __Vtemp931[6U] = __Vtemp930[6U];
    __Vtemp931[7U] = __Vtemp930[7U];
    __Vtemp931[8U] = __Vtemp930[8U];
    __Vtemp931[9U] = __Vtemp930[9U];
    __Vtemp931[0xaU] = __Vtemp930[0xaU];
    __Vtemp931[0xbU] = __Vtemp930[0xbU];
    __Vtemp931[0xcU] = ((vlSelf->top__DOT__de__DOT__remw 
                         << 4U) | __Vtemp930[0xcU]);
    __Vtemp931[0xdU] = (vlSelf->top__DOT__de__DOT__remw 
                        >> 0x1cU);
    VL_EXTEND_WW(423,420, __Vtemp932, __Vtemp931);
    __Vtemp933[0U] = __Vtemp932[0U];
    __Vtemp933[1U] = __Vtemp932[1U];
    __Vtemp933[2U] = __Vtemp932[2U];
    __Vtemp933[3U] = __Vtemp932[3U];
    __Vtemp933[4U] = __Vtemp932[4U];
    __Vtemp933[5U] = __Vtemp932[5U];
    __Vtemp933[6U] = __Vtemp932[6U];
    __Vtemp933[7U] = __Vtemp932[7U];
    __Vtemp933[8U] = __Vtemp932[8U];
    __Vtemp933[9U] = __Vtemp932[9U];
    __Vtemp933[0xaU] = __Vtemp932[0xaU];
    __Vtemp933[0xbU] = __Vtemp932[0xbU];
    __Vtemp933[0xcU] = __Vtemp932[0xcU];
    __Vtemp933[0xdU] = ((vlSelf->top__DOT__de__DOT__divw 
                         << 7U) | __Vtemp932[0xdU]);
    __Vtemp933[0xeU] = (vlSelf->top__DOT__de__DOT__divw 
                        >> 0x19U);
    VL_EXTEND_WW(458,455, __Vtemp934, __Vtemp933);
    __Vtemp935[0U] = __Vtemp934[0U];
    __Vtemp935[1U] = __Vtemp934[1U];
    __Vtemp935[2U] = __Vtemp934[2U];
    __Vtemp935[3U] = __Vtemp934[3U];
    __Vtemp935[4U] = __Vtemp934[4U];
    __Vtemp935[5U] = __Vtemp934[5U];
    __Vtemp935[6U] = __Vtemp934[6U];
    __Vtemp935[7U] = __Vtemp934[7U];
    __Vtemp935[8U] = __Vtemp934[8U];
    __Vtemp935[9U] = __Vtemp934[9U];
    __Vtemp935[0xaU] = __Vtemp934[0xaU];
    __Vtemp935[0xbU] = __Vtemp934[0xbU];
    __Vtemp935[0xcU] = __Vtemp934[0xcU];
    __Vtemp935[0xdU] = __Vtemp934[0xdU];
    __Vtemp935[0xeU] = ((vlSelf->top__DOT__de__DOT__mulw 
                         << 0xaU) | __Vtemp934[0xeU]);
    __Vtemp935[0xfU] = (vlSelf->top__DOT__de__DOT__mulw 
                        >> 0x16U);
    VL_EXTEND_WW(493,490, __Vtemp936, __Vtemp935);
    __Vtemp937[0U] = __Vtemp936[0U];
    __Vtemp937[1U] = __Vtemp936[1U];
    __Vtemp937[2U] = __Vtemp936[2U];
    __Vtemp937[3U] = __Vtemp936[3U];
    __Vtemp937[4U] = __Vtemp936[4U];
    __Vtemp937[5U] = __Vtemp936[5U];
    __Vtemp937[6U] = __Vtemp936[6U];
    __Vtemp937[7U] = __Vtemp936[7U];
    __Vtemp937[8U] = __Vtemp936[8U];
    __Vtemp937[9U] = __Vtemp936[9U];
    __Vtemp937[0xaU] = __Vtemp936[0xaU];
    __Vtemp937[0xbU] = __Vtemp936[0xbU];
    __Vtemp937[0xcU] = __Vtemp936[0xcU];
    __Vtemp937[0xdU] = __Vtemp936[0xdU];
    __Vtemp937[0xeU] = __Vtemp936[0xeU];
    __Vtemp937[0xfU] = ((vlSelf->top__DOT__de__DOT__subw 
                         << 0xdU) | __Vtemp936[0xfU]);
    __Vtemp937[0x10U] = (vlSelf->top__DOT__de__DOT__subw 
                         >> 0x13U);
    VL_EXTEND_WW(528,525, __Vtemp938, __Vtemp937);
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0U] 
        = (IData)((0x800000001ULL | ((QData)((IData)(vlSelf->top__DOT__de__DOT__srliw)) 
                                     << 3U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[1U] 
        = ((vlSelf->top__DOT__de__DOT__slliw << 6U) 
           | (IData)(((0x800000001ULL | ((QData)((IData)(vlSelf->top__DOT__de__DOT__srliw)) 
                                         << 3U)) >> 0x20U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[2U] 
        = (0x40U | ((vlSelf->top__DOT__de__DOT__sraiw 
                     << 9U) | (vlSelf->top__DOT__de__DOT__slliw 
                               >> 0x1aU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[3U] 
        = (0x200U | ((vlSelf->top__DOT__de__DOT__addiw 
                      << 0xcU) | (vlSelf->top__DOT__de__DOT__sraiw 
                                  >> 0x17U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[4U] 
        = (0x3000U | ((vlSelf->top__DOT__de__DOT__bne 
                       << 0xfU) | (vlSelf->top__DOT__de__DOT__addiw 
                                   >> 0x14U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[5U] 
        = (0x18000U | ((vlSelf->top__DOT__de__DOT__blt 
                        << 0x12U) | (vlSelf->top__DOT__de__DOT__bne 
                                     >> 0x11U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[6U] 
        = (0xc0000U | ((vlSelf->top__DOT__de__DOT__bltu 
                        << 0x15U) | (vlSelf->top__DOT__de__DOT__blt 
                                     >> 0xeU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[7U] 
        = (0x600000U | ((vlSelf->top__DOT__de__DOT__bgeu 
                         << 0x18U) | (vlSelf->top__DOT__de__DOT__bltu 
                                      >> 0xbU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[8U] 
        = (0x3000000U | ((vlSelf->top__DOT__de__DOT__bge 
                          << 0x1bU) | (vlSelf->top__DOT__de__DOT__bgeu 
                                       >> 8U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[9U] 
        = (0x18000000U | ((vlSelf->top__DOT__de__DOT__beq 
                           << 0x1eU) | (vlSelf->top__DOT__de__DOT__bge 
                                        >> 5U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xaU] 
        = (0x40000000U | (vlSelf->top__DOT__de__DOT__beq 
                          >> 2U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xbU] 
        = (vlSelf->top__DOT__de__DOT__srli << 1U);
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xcU] 
        = (2U | ((vlSelf->top__DOT__de__DOT__slli << 4U) 
                 | (vlSelf->top__DOT__de__DOT__srli 
                    >> 0x1fU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xdU] 
        = (0x10U | ((vlSelf->top__DOT__de__DOT__srai 
                     << 7U) | (vlSelf->top__DOT__de__DOT__slli 
                               >> 0x1cU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xeU] 
        = ((vlSelf->top__DOT__de__DOT__srai >> 0x19U) 
           | (__Vtemp938[0U] << 7U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xfU] 
        = ((__Vtemp938[0U] >> 0x19U) | (__Vtemp938[1U] 
                                        << 7U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x10U] 
        = ((__Vtemp938[1U] >> 0x19U) | (__Vtemp938[2U] 
                                        << 7U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x11U] 
        = ((__Vtemp938[2U] >> 0x19U) | (__Vtemp938[3U] 
                                        << 7U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x12U] 
        = ((__Vtemp938[3U] >> 0x19U) | (__Vtemp938[4U] 
                                        << 7U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x13U] 
        = ((__Vtemp938[4U] >> 0x19U) | (__Vtemp938[5U] 
                                        << 7U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x14U] 
        = ((__Vtemp938[5U] >> 0x19U) | (__Vtemp938[6U] 
                                        << 7U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x15U] 
        = ((__Vtemp938[6U] >> 0x19U) | (__Vtemp938[7U] 
                                        << 7U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x16U] 
        = ((__Vtemp938[7U] >> 0x19U) | (__Vtemp938[8U] 
                                        << 7U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x17U] 
        = ((__Vtemp938[8U] >> 0x19U) | (__Vtemp938[9U] 
                                        << 7U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x18U] 
        = ((__Vtemp938[9U] >> 0x19U) | (__Vtemp938[0xaU] 
                                        << 7U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x19U] 
        = ((__Vtemp938[0xaU] >> 0x19U) | (__Vtemp938[0xbU] 
                                          << 7U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1aU] 
        = ((__Vtemp938[0xbU] >> 0x19U) | (__Vtemp938[0xcU] 
                                          << 7U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1bU] 
        = ((__Vtemp938[0xcU] >> 0x19U) | (__Vtemp938[0xdU] 
                                          << 7U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1cU] 
        = ((__Vtemp938[0xdU] >> 0x19U) | (__Vtemp938[0xeU] 
                                          << 7U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1dU] 
        = ((__Vtemp938[0xeU] >> 0x19U) | (__Vtemp938[0xfU] 
                                          << 7U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1eU] 
        = ((__Vtemp938[0xfU] >> 0x19U) | ((vlSelf->top__DOT__de__DOT__addw 
                                           << 0x17U) 
                                          | (__Vtemp938[0x10U] 
                                             << 7U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1fU] 
        = (0x800000U | (((0x7fU & (vlSelf->top__DOT__de__DOT__addw 
                                   >> 9U)) | (__Vtemp938[0x10U] 
                                              >> 0x19U)) 
                        | ((vlSelf->top__DOT__de__DOT__ld 
                            << 0x1aU) | (0x7fff80U 
                                         & (vlSelf->top__DOT__de__DOT__addw 
                                            >> 9U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x20U] 
        = (0x4000000U | ((0x7fU & (vlSelf->top__DOT__de__DOT__ld 
                                   >> 6U)) | ((vlSelf->top__DOT__de__DOT__lhu 
                                               << 0x1dU) 
                                              | (0x3ffff80U 
                                                 & (vlSelf->top__DOT__de__DOT__ld 
                                                    >> 6U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x21U] 
        = (0x20000000U | ((0x7fU & (vlSelf->top__DOT__de__DOT__lhu 
                                    >> 3U)) | (0x1fffff80U 
                                               & (vlSelf->top__DOT__de__DOT__lhu 
                                                  >> 3U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x22U] 
        = vlSelf->top__DOT__de__DOT__lbu;
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x23U] 
        = (1U | ((0x78U & (vlSelf->top__DOT__de__DOT__lh 
                           << 3U)) | (0xffffff80U & 
                                      (vlSelf->top__DOT__de__DOT__lh 
                                       << 3U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x24U] 
        = (8U | (((0x40U & (vlSelf->top__DOT__de__DOT__lw 
                            << 6U)) | (vlSelf->top__DOT__de__DOT__lh 
                                       >> 0x1dU)) | 
                 (0xffffff80U & (vlSelf->top__DOT__de__DOT__lw 
                                 << 6U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x25U] 
        = (0x80U | ((vlSelf->top__DOT__de__DOT__lw 
                     >> 0x1aU) | (vlSelf->top__DOT__de__DOT__sb 
                                  << 9U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x26U] 
        = (0x400U | ((0x7fU & (vlSelf->top__DOT__de__DOT__sb 
                               >> 0x17U)) | ((vlSelf->top__DOT__de__DOT__sw 
                                              << 0xcU) 
                                             | (0x180U 
                                                & (vlSelf->top__DOT__de__DOT__sb 
                                                   >> 0x17U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x27U] 
        = (0x2000U | ((0x7fU & (vlSelf->top__DOT__de__DOT__sw 
                                >> 0x14U)) | ((vlSelf->top__DOT__de__DOT__sh 
                                               << 0xfU) 
                                              | (0xf80U 
                                                 & (vlSelf->top__DOT__de__DOT__sw 
                                                    >> 0x14U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x28U] 
        = (0x10000U | ((0x7fU & (vlSelf->top__DOT__de__DOT__sh 
                                 >> 0x11U)) | ((vlSelf->top__DOT__de__DOT__sd 
                                                << 0x12U) 
                                               | (0x7f80U 
                                                  & (vlSelf->top__DOT__de__DOT__sh 
                                                     >> 0x11U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x29U] 
        = (0x40000U | ((0x7fU & (vlSelf->top__DOT__de__DOT__sd 
                                 >> 0xeU)) | ((vlSelf->top__DOT__de__DOT__jalr 
                                               << 0x15U) 
                                              | (0x3ff80U 
                                                 & (vlSelf->top__DOT__de__DOT__sd 
                                                    >> 0xeU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2aU] 
        = (0xa00000U | ((0x7fU & (vlSelf->top__DOT__de__DOT__jalr 
                                  >> 0xbU)) | ((0xff000000U 
                                                & (0x6f000000U 
                                                   | (0x80000000U 
                                                      & (vlSelf->inst 
                                                         << 0x18U)))) 
                                               | (0x1fff80U 
                                                  & (vlSelf->top__DOT__de__DOT__jalr 
                                                     >> 0xbU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2bU] 
        = (0xbc000000U | ((0x7fU & (vlSelf->inst >> 8U)) 
                          | (0xffff80U & (vlSelf->inst 
                                          >> 8U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2cU] 
        = (0xe0000000U | ((0x7fU & (1U | (0x7cU & (vlSelf->inst 
                                                   >> 5U)))) 
                          | (0x7ffff80U & (vlSelf->inst 
                                           >> 5U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2dU] 
        = (0x40000000U | ((0x7fU & (5U | (0x60U & (vlSelf->inst 
                                                   >> 2U)))) 
                          | (0x3fffff80U & (vlSelf->inst 
                                            >> 2U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2eU] 
        = ((0x7eU & (vlSelf->top__DOT__de__DOT__xori 
                     << 1U)) | (0xffffff80U & (vlSelf->top__DOT__de__DOT__xori 
                                               << 1U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2fU] 
        = (2U | (((0x70U & (vlSelf->top__DOT__de__DOT__andi 
                            << 4U)) | (vlSelf->top__DOT__de__DOT__xori 
                                       >> 0x1fU)) | 
                 (0xffffff80U & (vlSelf->top__DOT__de__DOT__andi 
                                 << 4U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x30U] 
        = (0x10U | ((vlSelf->top__DOT__de__DOT__andi 
                     >> 0x1cU) | (vlSelf->top__DOT__de__DOT__addi 
                                  << 7U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x31U] 
        = (vlSelf->top__DOT__de__DOT__addi >> 0x19U);
    if (((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[4008]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4003]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1eU & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4004]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1dU & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4005]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1bU & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4006]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x17U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4007]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfU & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__raddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->top__DOT__de__DOT____Vtogcov__raddr 
            = ((0x1eU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__raddr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__raddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->top__DOT__de__DOT____Vtogcov__raddr 
            = ((0x1dU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__raddr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__raddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->top__DOT__de__DOT____Vtogcov__raddr 
            = ((0x1bU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__raddr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__raddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->top__DOT__de__DOT____Vtogcov__raddr 
            = ((0x17U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__raddr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__raddr) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->top__DOT__de__DOT____Vtogcov__raddr 
            = ((0xfU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__raddr)));
    }
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0U]))));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[1U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[2U])) 
                               << 0x1bU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[1U])) 
                                            >> 5U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[2U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[3U])) 
                               << 0x16U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[2U])) 
                                            >> 0xaU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[3U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[4U])) 
                               << 0x11U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[3U])) 
                                            >> 0xfU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[4U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[5U])) 
                               << 0xcU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[4U])) 
                                           >> 0x14U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[5U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[6U])) 
                               << 7U) | ((QData)((IData)(
                                                         vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[5U])) 
                                         >> 0x19U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[6U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[8U])) 
                               << 0x22U) | (((QData)((IData)(
                                                             vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[7U])) 
                                             << 2U) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[6U])) 
                                               >> 0x1eU))));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[7U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[9U])) 
                               << 0x1dU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[8U])) 
                                            >> 3U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[8U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xaU])) 
                               << 0x18U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[9U])) 
                                            >> 8U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[9U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xbU])) 
                               << 0x13U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xaU])) 
                                            >> 0xdU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0xaU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xcU])) 
                               << 0xeU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xbU])) 
                                           >> 0x12U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0xbU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xdU])) 
                               << 9U) | ((QData)((IData)(
                                                         vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xcU])) 
                                         >> 0x17U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0xcU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xfU])) 
                               << 0x24U) | (((QData)((IData)(
                                                             vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xeU])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xdU])) 
                                               >> 0x1cU))));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0xdU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x10U])) 
                               << 0x1fU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xfU])) 
                                            >> 1U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0xeU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x11U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x10U])) 
                                            >> 6U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0xfU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x12U])) 
                               << 0x15U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x11U])) 
                                            >> 0xbU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x10U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x13U])) 
                               << 0x10U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x12U])) 
                                            >> 0x10U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x11U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x14U])) 
                               << 0xbU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x13U])) 
                                           >> 0x15U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x12U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x15U])) 
                               << 6U) | ((QData)((IData)(
                                                         vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x14U])) 
                                         >> 0x1aU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x13U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x17U])) 
                               << 0x21U) | (((QData)((IData)(
                                                             vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x16U])) 
                                             << 1U) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x15U])) 
                                               >> 0x1fU))));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x14U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x18U])) 
                               << 0x1cU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x17U])) 
                                            >> 4U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x15U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x19U])) 
                               << 0x17U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x18U])) 
                                            >> 9U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x16U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1aU])) 
                               << 0x12U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x19U])) 
                                            >> 0xeU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x17U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1bU])) 
                               << 0xdU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1aU])) 
                                           >> 0x13U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x18U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1cU])) 
                               << 8U) | ((QData)((IData)(
                                                         vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1bU])) 
                                         >> 0x18U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x19U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1eU])) 
                               << 0x23U) | (((QData)((IData)(
                                                             vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1dU])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1cU])) 
                                               >> 0x1dU))));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x1aU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1fU])) 
                               << 0x1eU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1eU])) 
                                            >> 2U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x1bU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x20U])) 
                               << 0x19U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1fU])) 
                                            >> 7U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x1cU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x21U])) 
                               << 0x14U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x20U])) 
                                            >> 0xcU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x1dU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x22U])) 
                               << 0xfU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x21U])) 
                                           >> 0x11U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x1eU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x23U])) 
                               << 0xaU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x22U])) 
                                           >> 0x16U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x1fU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x24U])) 
                               << 5U) | ((QData)((IData)(
                                                         vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x23U])) 
                                         >> 0x1bU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x20U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x26U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x25U]))));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x21U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x27U])) 
                               << 0x1bU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x26U])) 
                                            >> 5U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x22U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x28U])) 
                               << 0x16U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x27U])) 
                                            >> 0xaU)));
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4593]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4594]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4595]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4596]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4597]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4598]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4599]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4600]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4601]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4602]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4603]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4604]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4605]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4606]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4607]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4608]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4609]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4610]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4611]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4612]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4613]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4614]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4615]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4616]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4617]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4618]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4619]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4620]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4621]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4622]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4623]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
          ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4624]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4625]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4626]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4627]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4628]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4629]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4630]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4631]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4632]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4633]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4634]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4635]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4636]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4637]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4638]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4639]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4640]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4641]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4642]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4643]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4644]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4645]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4646]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4647]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4648]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4649]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4650]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4651]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4652]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4653]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4654]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4655]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
          ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4656]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4657]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4658]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4659]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4660]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4661]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4662]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4663]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4664]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4665]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4666]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4667]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4668]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4669]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4670]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4671]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4672]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4673]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4674]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4675]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4676]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4677]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4678]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4679]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4680]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4681]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4682]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4683]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4684]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4685]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4686]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4687]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
          ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4688]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4689]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4690]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4691]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4692]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4693]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4694]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4695]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4696]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4697]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4698]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4699]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4700]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4701]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4702]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4703]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4704]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4705]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4706]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4707]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4708]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4709]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4710]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4711]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4712]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4713]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4714]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4715]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4716]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4717]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4718]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4719]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
          ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4720]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4721]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4722]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4723]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4724]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4725]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4726]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4727]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4728]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4729]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4730]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4731]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4732]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4733]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4734]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4735]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4736]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4737]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4738]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4739]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4740]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4741]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4742]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4743]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4744]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4745]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4746]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4747]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4748]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4749]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4750]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4751]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
          ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4752]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list[0U] 
        = (0xffffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]))));
    vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list[1U] 
        = (0xffffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U])) 
                               << 0x18U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U])) 
                                            >> 8U)));
    vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list[2U] 
        = (0xffffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U])) 
                               << 0x10U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U])) 
                                            >> 0x10U)));
    vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list[3U] 
        = (0xffffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U])) 
                               << 8U) | ((QData)((IData)(
                                                         vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U])) 
                                         >> 0x18U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0U]))));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[2U])) 
                              << 0x1dU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[1U])) 
                                           >> 3U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[3U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[2U])) 
                                           >> 6U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[4U])) 
                              << 0x17U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[3U])) 
                                           >> 9U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[5U])) 
                              << 0x14U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[4U])) 
                                           >> 0xcU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[6U])) 
                              << 0x11U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[5U])) 
                                           >> 0xfU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[7U])) 
                              << 0xeU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[6U])) 
                                          >> 0x12U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[7U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[8U])) 
                              << 0xbU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[7U])) 
                                          >> 0x15U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[8U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[9U])) 
                              << 8U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[8U])) 
                                        >> 0x18U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[9U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xaU])) 
                              << 5U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[9U])) 
                                        >> 0x1bU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0xaU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xcU])) 
                              << 0x22U) | (((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xbU])) 
                                            << 2U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xaU])) 
                                              >> 0x1eU))));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0xbU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xdU])) 
                              << 0x1fU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xcU])) 
                                           >> 1U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0xcU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xeU])) 
                              << 0x1cU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xdU])) 
                                           >> 4U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0xdU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xfU])) 
                              << 0x19U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xeU])) 
                                           >> 7U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0xeU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x10U])) 
                              << 0x16U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xfU])) 
                                           >> 0xaU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0xfU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x11U])) 
                              << 0x13U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x10U])) 
                                           >> 0xdU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x10U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x12U])) 
                              << 0x10U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x11U])) 
                                           >> 0x10U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x11U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x13U])) 
                              << 0xdU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x12U])) 
                                          >> 0x13U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x12U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x14U])) 
                              << 0xaU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x13U])) 
                                          >> 0x16U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x13U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x15U])) 
                              << 7U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x14U])) 
                                        >> 0x19U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x14U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x16U])) 
                              << 4U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x15U])) 
                                        >> 0x1cU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x15U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x18U])) 
                              << 0x21U) | (((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x17U])) 
                                            << 1U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x16U])) 
                                              >> 0x1fU))));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x16U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x19U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x18U])) 
                                           >> 2U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x17U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1aU])) 
                              << 0x1bU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x19U])) 
                                           >> 5U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x18U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1bU])) 
                              << 0x18U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1aU])) 
                                           >> 8U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x19U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1cU])) 
                              << 0x15U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1bU])) 
                                           >> 0xbU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x1aU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1dU])) 
                              << 0x12U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1cU])) 
                                           >> 0xeU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x1bU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1eU])) 
                              << 0xfU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1dU])) 
                                          >> 0x11U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x1cU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1fU])) 
                              << 0xcU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1eU])) 
                                          >> 0x14U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x1dU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x20U])) 
                              << 9U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1fU])) 
                                        >> 0x17U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x1eU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x21U])) 
                              << 6U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x20U])) 
                                        >> 0x1aU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x1fU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x22U])) 
                              << 3U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x21U])) 
                                        >> 0x1dU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x20U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x24U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x23U]))));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x21U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x25U])) 
                              << 0x1dU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x24U])) 
                                           >> 3U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x22U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x26U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x25U])) 
                                           >> 6U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x23U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x27U])) 
                              << 0x17U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x26U])) 
                                           >> 9U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x24U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x28U])) 
                              << 0x14U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x27U])) 
                                           >> 0xcU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x25U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x29U])) 
                              << 0x11U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x28U])) 
                                           >> 0xfU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x26U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2aU])) 
                              << 0xeU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x29U])) 
                                          >> 0x12U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x27U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2bU])) 
                              << 0xbU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2aU])) 
                                          >> 0x15U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x28U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2cU])) 
                              << 8U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2bU])) 
                                        >> 0x18U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x29U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2dU])) 
                              << 5U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2cU])) 
                                        >> 0x1bU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x2aU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2fU])) 
                              << 0x22U) | (((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2eU])) 
                                            << 2U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2dU])) 
                                              >> 0x1eU))));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x2bU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x30U])) 
                              << 0x1fU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2fU])) 
                                           >> 1U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x2cU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x31U])) 
                              << 0x1cU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x30U])) 
                                           >> 4U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[1U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [1U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[2U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [2U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[3U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [3U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[4U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [4U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[5U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [5U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[6U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [6U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[7U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [7U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[8U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [8U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[9U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [9U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0xaU] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0xaU] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0xbU] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0xbU] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0xcU] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0xcU] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0xdU] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0xdU] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0xeU] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0xeU] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0xfU] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0xfU] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x10U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x10U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x11U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x11U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x12U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x12U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x13U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x13U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x14U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x14U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x15U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x15U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x16U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x16U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x17U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x17U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x18U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x18U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x19U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x19U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x1aU] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x1aU] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x1bU] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x1bU] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x1cU] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x1cU] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x1dU] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x1dU] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x1eU] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x1eU] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x1fU] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x1fU] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x20U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x20U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x21U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x21U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0x22U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                   [0x22U] >> 5U));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[1U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [1U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[2U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [2U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[3U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [3U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[4U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [4U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[5U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [5U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[6U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [6U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[7U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [7U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[8U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [8U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[9U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [9U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0xaU] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0xaU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0xbU] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0xbU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0xcU] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0xcU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0xdU] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0xdU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0xeU] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0xeU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0xfU] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0xfU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x10U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x10U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x11U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x11U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x12U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x12U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x13U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x13U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x14U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x14U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x15U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x15U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x16U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x16U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x17U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x17U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x18U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x18U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x19U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x19U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x1aU] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x1aU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x1bU] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x1bU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x1cU] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x1cU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x1dU] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x1dU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x1eU] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x1eU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x1fU] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x1fU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x20U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x20U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x21U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x21U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0x22U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list
                           [0x22U]));
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list
                       [0U]) ^ (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list
                                       [0U])))) {
        ++(vlSymsp->__Vcoverage[4753]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffeULL & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (IData)((IData)((1U & (IData)(
                                                      vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list
                                                      [0U])))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list
                        [0U] >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4754]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffdULL & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 1U))))) 
                         << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list
                        [0U] >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4755]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffbULL & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 2U))))) 
                         << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list
                        [0U] >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4756]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffff7ULL & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 3U))))) 
                         << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list
                        [0U] >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4757]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffefULL & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 4U))))) 
                         << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list
                        [0U] >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4758]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffdfULL & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 5U))))) 
                         << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list
                        [0U] >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4759]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffbfULL & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 6U))))) 
                         << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list
                        [0U] >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4760]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffff7fULL & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 7U))))) 
                         << 7U));
    }
}
