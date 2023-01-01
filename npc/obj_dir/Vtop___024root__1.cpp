// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__8\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp130;
    VlWide<7>/*223:0*/ __Vtemp132;
    VlWide<9>/*287:0*/ __Vtemp134;
    VlWide<13>/*415:0*/ __Vtemp137;
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__imm)))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | (IData)((IData)((1U & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    vlSelf->top__DOT__de__DOT__call_return = (((IData)(
                                                       ((0x8000U 
                                                         == 
                                                         (0xf8f80U 
                                                          & vlSelf->inst)) 
                                                        & (0ULL 
                                                           == vlSymsp->TOP__top__DOT__de__DOT__m1.out))) 
                                               & (vlSelf->inst 
                                                  == vlSelf->top__DOT__de__DOT__jalr))
                                               ? 2U
                                               : ((
                                                   (vlSelf->inst 
                                                    == 
                                                    (0x6fU 
                                                     | (0xffffff80U 
                                                        & vlSelf->inst))) 
                                                   | ((vlSelf->inst 
                                                       == vlSelf->top__DOT__de__DOT__jalr) 
                                                      & (IData)(
                                                                ((0x8000U 
                                                                  != 
                                                                  (0xf8f80U 
                                                                   & vlSelf->inst)) 
                                                                 | (0ULL 
                                                                    != vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))
                                                   ? 1U
                                                   : 0U));
    __Vtemp130[3U] = ((7U & ((IData)((((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                      >> 0xbU)))))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                             >> 0x1aU)) | ((0x38U & 
                                            ((IData)(
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                             >> 0x1aU)) 
                                           | ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (0xfffU 
                                                                           & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                                       >> 0x20U)) 
                                              << 6U)));
    __Vtemp130[4U] = (0x40U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (0x38U & ((IData)(((
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (0xfffU 
                                                                      & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                                  >> 0x20U)) 
                                         >> 0x1aU))));
    __Vtemp132[3U] = ((7U & ((IData)((((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                      >> 0xbU)))))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                             >> 0x1aU)) | ((0x38U & 
                                            ((IData)(
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                             >> 0x1aU)) 
                                           | ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (0xfffU 
                                                                           & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                                       >> 0x20U)) 
                                              << 6U)));
    __Vtemp132[4U] = (0x80U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (((IData)((((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                          >> 0xbU)))))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            (0xfffU 
                                                             & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                 << 9U) | (0x38U & 
                                           ((IData)(
                                                    ((((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                                     >> 0x20U)) 
                                            >> 0x1aU)))));
    __Vtemp134[3U] = ((7U & ((IData)((((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                      >> 0xcU)))))) 
                                       << 0xdU) | (QData)((IData)(
                                                                  (0x1fffU 
                                                                   & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                             >> 0x1aU)) | ((0x38U & 
                                            ((IData)(
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xcU)))))) 
                                                       << 0xdU) 
                                                      | (QData)((IData)(
                                                                        (0x1fffU 
                                                                         & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                             >> 0x1aU)) 
                                           | ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xcU)))))) 
                                                         << 0xdU) 
                                                        | (QData)((IData)(
                                                                          (0x1fffU 
                                                                           & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                                       >> 0x20U)) 
                                              << 6U)));
    __Vtemp134[4U] = (0xc0U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xcU)))))) 
                                                 << 0xdU) 
                                                | (QData)((IData)(
                                                                  (0x1fffU 
                                                                   & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (((IData)((((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                          >> 0xbU)))))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            (0xfffU 
                                                             & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                 << 9U) | (0x38U & 
                                           ((IData)(
                                                    ((((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xcU)))))) 
                                                       << 0xdU) 
                                                      | (QData)((IData)(
                                                                        (0x1fffU 
                                                                         & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                                     >> 0x20U)) 
                                            >> 0x1aU)))));
    __Vtemp134[7U] = ((__Vtemp132[4U] >> 0x1dU) | (
                                                   (0x38U 
                                                    & ((IData)(
                                                               (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                                 << 0xcU) 
                                                                | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                                       >> 0x14U)) 
                                                   | (__Vtemp130[3U] 
                                                      << 6U)));
    __Vtemp134[8U] = ((7U & (__Vtemp130[3U] >> 0x1aU)) 
                      | ((0x38U & (__Vtemp130[3U] >> 0x1aU)) 
                         | (__Vtemp130[4U] << 6U)));
    __Vtemp137[5U] = ((7U & ((IData)((((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                              >> 0x1fU))))))) 
                                       << 0x20U) | (QData)((IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))) 
                             >> 0x1aU)) | ((0x38U & 
                                            ((IData)(
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0x1fU))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))) 
                                             >> 0x1aU)) 
                                           | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0x1fU))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))) 
                                                       >> 0x20U)) 
                                              << 6U)));
    __Vtemp137[6U] = (0x100U | ((7U & ((IData)(((((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0x1fU))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))) 
                                                >> 0x20U)) 
                                       >> 0x1aU)) | 
                                (((IData)((((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                           >> 0xcU)))))) 
                                            << 0xdU) 
                                           | (QData)((IData)(
                                                             (0x1fffU 
                                                              & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                  << 9U) | (0x38U & 
                                            ((IData)(
                                                     ((((QData)((IData)(
                                                                        (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0x1fU))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))) 
                                                      >> 0x20U)) 
                                             >> 0x1aU)))));
    __Vtemp137[9U] = ((__Vtemp134[4U] >> 0x1dU) | (
                                                   (0x38U 
                                                    & ((IData)(
                                                               (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                                 << 0xcU) 
                                                                | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                                       >> 0x14U)) 
                                                   | (__Vtemp132[3U] 
                                                      << 6U)));
    __Vtemp137[0xaU] = ((7U & (__Vtemp132[3U] >> 0x1aU)) 
                        | ((0x38U & (__Vtemp132[3U] 
                                     >> 0x1aU)) | (
                                                   __Vtemp132[4U] 
                                                   << 6U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[0U] = 0U;
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[1U] = 0U;
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[2U] 
        = (7U | ((IData)((((- (QData)((IData)((1U & (IData)(
                                                            (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                             >> 0x14U)))))) 
                           << 0x15U) | (QData)((IData)(
                                                       (0x1fffffU 
                                                        & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                 << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[3U] 
        = (((IData)((((- (QData)((IData)((1U & (IData)(
                                                       (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                        >> 0x14U)))))) 
                      << 0x15U) | (QData)((IData)((0x1fffffU 
                                                   & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
            >> 0x1dU) | ((IData)(((((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                   >> 0x14U)))))) 
                                    << 0x15U) | (QData)((IData)(
                                                                (0x1fffffU 
                                                                 & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[4U] 
        = (0x28U | (((IData)((((QData)((IData)((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                      >> 0x1fU))))))) 
                               << 0x20U) | (QData)((IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))) 
                     << 6U) | ((IData)(((((- (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                         >> 0x14U)))))) 
                                          << 0x15U) 
                                         | (QData)((IData)(
                                                           (0x1fffffU 
                                                            & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[5U] 
        = __Vtemp137[5U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[6U] 
        = __Vtemp137[6U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[7U] 
        = ((7U & ((IData)((((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                           >> 0xcU)))))) 
                            << 0xdU) | (QData)((IData)(
                                                       (0x1fffU 
                                                        & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                  >> 0x17U)) | (__Vtemp134[3U] << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[8U] 
        = ((__Vtemp134[3U] >> 0x1dU) | (__Vtemp134[4U] 
                                        << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[9U] 
        = __Vtemp137[9U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[0xaU] 
        = __Vtemp137[0xaU];
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[0xbU] 
        = ((7U & (__Vtemp132[4U] >> 0x1aU)) | (__Vtemp134[7U] 
                                               << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[0xcU] 
        = ((__Vtemp134[7U] >> 0x1dU) | (__Vtemp134[8U] 
                                        << 3U));
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__call_return)))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_return 
            = ((2U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__call_return)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__call_return)))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_return 
            = ((1U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__call_return)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x20U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x40U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x80U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x100U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x200U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x400U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x800U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x1000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x2000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x4000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x8000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x10000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x10000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x20000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x20000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x40000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x40000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x80000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x80000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x100000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x100000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x200000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x200000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x400000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x400000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x800000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x800000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x1000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x1000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x2000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x2000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x4000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x4000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x8000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x8000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x10000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x10000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x20000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x20000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x40000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x40000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((((IData)(vlSelf->top__DOT__de__DOT__call_return) 
          ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x80000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__10\n"); );
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__top__DOT__de__DOT__m5.out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__adddata2)))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | (IData)((IData)((1U & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m5.out)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->top__DOT__de__DOT____Vtogcov__adddata2 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__adddata2) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m5.out 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__11(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__11\n"); );
    // Variables
    CData/*5:0*/ __Vdly__top__DOT__count_c;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__de__DOT__r0__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__de__DOT__r0__DOT__rf__v0;
    // Body
    __Vdly__top__DOT__count_c = vlSelf->top__DOT__count_c;
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[106]);
        __Vdly__top__DOT__count_c = 0U;
    } else {
        __Vdly__top__DOT__count_c = (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__count_c)));
        ++(vlSymsp->__Vcoverage[107]);
        if (VL_UNLIKELY((0x14U <= (IData)(vlSelf->top__DOT__count_c)))) {
            VL_WRITEF("*-* All Finished *-*\n");
            ++(vlSymsp->__Vcoverage[104]);
            VL_FINISH_MT("/home/wzw/ysyx-workbench/npc/vsrc/top.v", 31, "");
        } else {
            ++(vlSymsp->__Vcoverage[105]);
        }
    }
    ++(vlSymsp->__Vcoverage[108]);
    ++(vlSymsp->__Vcoverage[116]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->cpupc = 0x80000000U;
    } else {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->cpupc = vlSelf->top__DOT__dnpc;
    }
    ++(vlSymsp->__Vcoverage[1087]);
    ++(vlSymsp->__Vcoverage[1089]);
    ++(vlSymsp->__Vcoverage[1084]);
    ++(vlSymsp->__Vcoverage[1086]);
    __Vdlyvval__top__DOT__de__DOT__r0__DOT__rf__v0 
        = vlSelf->top__DOT__de__DOT__wdata;
    __Vdlyvdim0__top__DOT__de__DOT__r0__DOT__rf__v0 
        = vlSelf->top__DOT__de__DOT__waddr;
    vlSelf->top__DOT__count_c = __Vdly__top__DOT__count_c;
    vlSelf->top__DOT__de__DOT__r0__DOT__rf[__Vdlyvdim0__top__DOT__de__DOT__r0__DOT__rf__v0] 
        = __Vdlyvval__top__DOT__de__DOT__r0__DOT__rf__v0;
    vlSelf->top__DOT__de__DOT__r0__DOT__rf[0U] = 0ULL;
    if ((1U & ((IData)(vlSelf->top__DOT__count_c) ^ (IData)(vlSelf->top__DOT____Vtogcov__count_c)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->top__DOT____Vtogcov__count_c = ((0x3eU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__count_c)) 
                                                | (1U 
                                                   & (IData)(vlSelf->top__DOT__count_c)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__count_c) ^ (IData)(vlSelf->top__DOT____Vtogcov__count_c)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->top__DOT____Vtogcov__count_c = ((0x3dU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__count_c)) 
                                                | (2U 
                                                   & (IData)(vlSelf->top__DOT__count_c)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__count_c) ^ (IData)(vlSelf->top__DOT____Vtogcov__count_c)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->top__DOT____Vtogcov__count_c = ((0x3bU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__count_c)) 
                                                | (4U 
                                                   & (IData)(vlSelf->top__DOT__count_c)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__count_c) ^ (IData)(vlSelf->top__DOT____Vtogcov__count_c)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->top__DOT____Vtogcov__count_c = ((0x37U 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__count_c)) 
                                                | (8U 
                                                   & (IData)(vlSelf->top__DOT__count_c)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__count_c) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__count_c)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->top__DOT____Vtogcov__count_c = ((0x2fU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__count_c)) 
                                                | (0x10U 
                                                   & (IData)(vlSelf->top__DOT__count_c)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__count_c) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__count_c)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->top__DOT____Vtogcov__count_c = ((0x1fU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__count_c)) 
                                                | (0x20U 
                                                   & (IData)(vlSelf->top__DOT__count_c)));
    }
    if ((2U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2501]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (2U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((4U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2502]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (4U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((8U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2503]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (8U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2504]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x10U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2505]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x20U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2506]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x40U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2507]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x80U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2508]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x100U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2509]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x200U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2510]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x400U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2511]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x800U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2512]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x1000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2513]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x2000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2514]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x4000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2515]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x8000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->cpupc) 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2516]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x10000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->cpupc) 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2517]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x20000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->cpupc) 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2518]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x40000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->cpupc) 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2519]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x80000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->cpupc) 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2520]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x100000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->cpupc) 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2521]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x200000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->cpupc) 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2522]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x400000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->cpupc) 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2523]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x800000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->cpupc) 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2524]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x1000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->cpupc) 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2525]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x2000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->cpupc) 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2526]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x4000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->cpupc) 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2527]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x8000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->cpupc) 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2528]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x10000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->cpupc) 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2529]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x20000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->cpupc) 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[2530]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x40000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if (((((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2531]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x80000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((1U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffffffeU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (1U 
                                                 & vlSelf->cpupc));
    }
    if ((2U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffffffdU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (2U 
                                                 & vlSelf->cpupc));
    }
    if ((4U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffffffbU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (4U 
                                                 & vlSelf->cpupc));
    }
    if ((8U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffffff7U 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (8U 
                                                 & vlSelf->cpupc));
    }
    if ((0x10U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffffffefU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x10U 
                                                 & vlSelf->cpupc));
    }
    if ((0x20U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffffffdfU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x20U 
                                                 & vlSelf->cpupc));
    }
    if ((0x40U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffffffbfU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x40U 
                                                 & vlSelf->cpupc));
    }
    if ((0x80U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffffff7fU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x80U 
                                                 & vlSelf->cpupc));
    }
    if ((0x100U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffffeffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x100U 
                                                 & vlSelf->cpupc));
    }
    if ((0x200U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffffdffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x200U 
                                                 & vlSelf->cpupc));
    }
    if ((0x400U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffffbffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x400U 
                                                 & vlSelf->cpupc));
    }
    if ((0x800U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffff7ffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x800U 
                                                 & vlSelf->cpupc));
    }
    if ((0x1000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffffefffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x1000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x2000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffffdfffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x2000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x4000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffffbfffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x4000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x8000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffff7fffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x8000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x10000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffeffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x10000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x20000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffdffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x20000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x40000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffbffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x40000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x80000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfff7ffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x80000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x100000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffefffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x100000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x200000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffdfffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x200000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x400000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffbfffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x400000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x800000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xff7fffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x800000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x1000000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfeffffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x1000000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x2000000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfdffffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x2000000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x4000000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfbffffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x4000000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x8000000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xf7ffffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x8000000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x10000000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xefffffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x10000000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x20000000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xdfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x20000000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x40000000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xbfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x40000000U 
                                                 & vlSelf->cpupc));
    }
    if (((vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0x7fffffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x80000000U 
                                                 & vlSelf->cpupc));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((QData)((IData)(vlSelf->cpupc))) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__upc)))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | (IData)((IData)((1U & (IData)((QData)((IData)(vlSelf->cpupc)))))));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0x1fU] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0x1fU];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0x1eU] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0x1eU];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0x1dU] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0x1dU];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0x1cU] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0x1cU];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0x1bU] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0x1bU];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0x1aU] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0x1aU];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0x19U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0x19U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0x18U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0x18U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0x17U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0x17U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0x16U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0x16U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0x15U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0x15U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0x14U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0x14U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0x13U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0x13U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0x12U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0x12U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0x11U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0x11U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0x10U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0x10U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0xfU] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0xfU];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0xeU] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0xeU];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0xdU] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0xdU];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0xcU] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0xcU];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0xbU] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0xbU];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0xaU] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0xaU];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[9U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[9U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[8U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[8U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[7U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[7U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[6U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[6U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[5U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[5U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[4U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[4U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[3U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[3U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[2U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[2U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[1U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[1U];
    vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0U] 
        = vlSelf->top__DOT__de__DOT__r0__DOT__rf[0U];
    vlSelf->top__DOT__de__DOT__array[0x1fU] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0x1fU];
    vlSelf->top__DOT__de__DOT__array[0x1eU] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0x1eU];
    vlSelf->top__DOT__de__DOT__array[0x1dU] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0x1dU];
    vlSelf->top__DOT__de__DOT__array[0x1cU] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0x1cU];
    vlSelf->top__DOT__de__DOT__array[0x1bU] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0x1bU];
    vlSelf->top__DOT__de__DOT__array[0x1aU] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0x1aU];
    vlSelf->top__DOT__de__DOT__array[0x19U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0x19U];
    vlSelf->top__DOT__de__DOT__array[0x18U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0x18U];
    vlSelf->top__DOT__de__DOT__array[0x17U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0x17U];
    vlSelf->top__DOT__de__DOT__array[0x16U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0x16U];
    vlSelf->top__DOT__de__DOT__array[0x15U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0x15U];
    vlSelf->top__DOT__de__DOT__array[0x14U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0x14U];
    vlSelf->top__DOT__de__DOT__array[0x13U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0x13U];
    vlSelf->top__DOT__de__DOT__array[0x12U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0x12U];
    vlSelf->top__DOT__de__DOT__array[0x11U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0x11U];
    vlSelf->top__DOT__de__DOT__array[0x10U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0x10U];
    vlSelf->top__DOT__de__DOT__array[0xfU] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0xfU];
    vlSelf->top__DOT__de__DOT__array[0xeU] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0xeU];
    vlSelf->top__DOT__de__DOT__array[0xdU] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0xdU];
    vlSelf->top__DOT__de__DOT__array[0xcU] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0xcU];
    vlSelf->top__DOT__de__DOT__array[0xbU] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0xbU];
    vlSelf->top__DOT__de__DOT__array[0xaU] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0xaU];
    vlSelf->top__DOT__de__DOT__array[9U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [9U];
    vlSelf->top__DOT__de__DOT__array[8U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [8U];
    vlSelf->top__DOT__de__DOT__array[7U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [7U];
    vlSelf->top__DOT__de__DOT__array[6U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [6U];
    vlSelf->top__DOT__de__DOT__array[5U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [5U];
    vlSelf->top__DOT__de__DOT__array[4U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [4U];
    vlSelf->top__DOT__de__DOT__array[3U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [3U];
    vlSelf->top__DOT__de__DOT__array[2U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [2U];
    vlSelf->top__DOT__de__DOT__array[1U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [1U];
    vlSelf->top__DOT__de__DOT__array[0U] = vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13
        [0U];
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__13(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__13\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[2184]);
    ++(vlSymsp->__Vcoverage[2184]);
    ++(vlSymsp->__Vcoverage[2184]);
    ++(vlSymsp->__Vcoverage[2184]);
    ++(vlSymsp->__Vcoverage[2184]);
    ++(vlSymsp->__Vcoverage[2186]);
    ++(vlSymsp->__Vcoverage[2187]);
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__i = 5U;
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__de__DOT__waddr = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit)
                                         ? (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)
                                         : 0U);
    vlSelf->top__DOT__de__DOT__rdata = vlSelf->top__DOT__de__DOT__r0__DOT__rf
        [vlSelf->top__DOT__de__DOT__raddr];
    vlSelf->top__DOT__de__DOT__src2 = vlSelf->top__DOT__de__DOT__r0__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->top__DOT__de__DOT__src1 = vlSelf->top__DOT__de__DOT__r0__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    if (((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[2183]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[2178]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1eU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[2179]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1dU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[2180]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1bU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[2181]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x17U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[2182]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0x1eU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0x1dU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0x1bU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0x17U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0xfU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__rdata) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_a0))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__rdata)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 1U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 1U)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (2U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                 >> 1U)) << 1U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 2U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 2U)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (4U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                 >> 2U)) << 2U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 3U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 3U)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (8U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                 >> 3U)) << 3U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 4U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 4U)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x10U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                    >> 4U)) << 4U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 5U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 5U)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x20U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                    >> 5U)) << 5U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 6U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 6U)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x40U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                    >> 6U)) << 6U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 7U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 7U)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x80U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                    >> 7U)) << 7U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 8U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 8U)))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x100U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                     >> 8U)) << 8U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 9U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 9U)))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x200U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                     >> 9U)) << 9U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xaU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x400U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                     >> 0xaU)) << 0xaU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xbU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x800U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                     >> 0xbU)) << 0xbU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xcU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x1000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                      >> 0xcU)) << 0xcU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xdU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x2000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                      >> 0xdU)) << 0xdU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xeU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x4000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                      >> 0xeU)) << 0xeU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xfU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x8000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                      >> 0xfU)) << 0xfU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x10U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x10000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                       >> 0x10U)) << 0x10U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x11U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x20000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                       >> 0x11U)) << 0x11U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x12U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x40000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                       >> 0x12U)) << 0x12U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x13U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x80000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                       >> 0x13U)) << 0x13U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x14U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x100000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                        >> 0x14U)) 
                               << 0x14U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x15U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x200000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                        >> 0x15U)) 
                               << 0x15U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x16U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x400000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                        >> 0x16U)) 
                               << 0x16U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x17U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x800000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                        >> 0x17U)) 
                               << 0x17U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x18U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x1000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                         >> 0x18U)) 
                                << 0x18U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x19U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x2000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                         >> 0x19U)) 
                                << 0x19U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1aU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x4000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                         >> 0x1aU)) 
                                << 0x1aU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1bU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x8000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                         >> 0x1bU)) 
                                << 0x1bU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1cU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x10000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                          >> 0x1cU)) 
                                 << 0x1cU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1dU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x20000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                          >> 0x1dU)) 
                                 << 0x1dU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1eU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x40000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                          >> 0x1eU)) 
                                 << 0x1eU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1fU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                           >> 0x1fU)) << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__src2) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__src2)))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__src2)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__src1) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__src1)))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__src1)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__de__DOT____Vcellinp__m4____pinNumber4[0U] 
        = (IData)((QData)((IData)(vlSelf->cpupc)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m4____pinNumber4[1U] 
        = (IData)(((QData)((IData)(vlSelf->cpupc)) 
                   >> 0x20U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m4____pinNumber4[2U] 
        = (0x17U | (0xffffff80U & vlSelf->inst));
    vlSelf->top__DOT__de__DOT____Vcellinp__m4____pinNumber4[3U] 
        = (IData)(vlSelf->top__DOT__de__DOT__src1);
    vlSelf->top__DOT__de__DOT____Vcellinp__m4____pinNumber4[4U] 
        = (IData)((vlSelf->top__DOT__de__DOT__src1 
                   >> 0x20U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m4____pinNumber4[5U] 
        = vlSelf->top__DOT__de__DOT__addi;
    vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
        = (0xfffffffeU & ((IData)(vlSelf->top__DOT__de__DOT__src1) 
                          + (((- (IData)((1U & (IData)(
                                                       (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                        >> 0x14U))))) 
                              << 0x15U) | (0x1fffffU 
                                           & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
        = vlSelf->top__DOT__de__DOT__jalr;
    vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
        = (IData)((((QData)((IData)((0x6fU | (0xffffff80U 
                                              & vlSelf->inst)))) 
                    << 0x20U) | (QData)((IData)((vlSelf->cpupc 
                                                 + 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                          >> 0x14U))))) 
                                                   << 0x15U) 
                                                  | (0x1fffffU 
                                                     & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
        = (IData)(((((QData)((IData)((0x6fU | (0xffffff80U 
                                               & vlSelf->inst)))) 
                     << 0x20U) | (QData)((IData)((vlSelf->cpupc 
                                                  + 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                           >> 0x14U))))) 
                                                    << 0x15U) 
                                                   | (0x1fffffU 
                                                      & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))))) 
                   >> 0x20U));
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2532]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2533]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2534]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2535]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2536]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2537]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2538]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2539]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2540]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2541]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2542]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2543]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2544]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2545]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2546]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2547]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2548]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2549]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2550]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2551]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2552]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2553]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2554]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2555]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2556]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2557]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2558]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2559]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2560]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2561]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[2562]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U] 
          ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2563]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[0U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2564]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2565]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2566]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2567]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2568]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2569]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2570]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2571]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2572]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2573]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2574]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2575]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2576]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2577]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2578]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2579]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2580]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2581]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2582]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2583]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2584]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2585]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2586]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2587]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2588]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2589]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2590]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2591]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2592]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2593]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[2594]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U] 
          ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2595]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[1U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2596]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2597]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2598]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2599]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2600]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2601]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2602]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2603]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2604]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2605]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2606]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2607]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2608]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2609]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2610]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2611]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2612]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2613]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2614]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2615]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2616]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2617]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2618]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2619]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2620]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2621]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2622]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2623]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2624]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2625]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[2626]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U] 
          ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2627]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[2U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2628]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2629]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2630]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2631]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2632]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2633]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2634]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2635]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2636]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2637]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2638]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2639]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2640]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2641]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2642]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2643]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2644]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2645]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2646]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2647]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2648]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2649]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2650]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2651]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2652]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2653]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2654]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2655]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2656]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2657]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[2658]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U] 
          ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2659]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__lut[3U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U]));
    }
    vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[0U])));
    vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4[2U])));
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                       [0U]) ^ (IData)(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                       [0U])))) {
        ++(vlSymsp->__Vcoverage[2660]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (IData)((IData)((1U & (IData)(
                                                      vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                      [0U])))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2661]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 1U))))) 
                         << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2662]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 2U))))) 
                         << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2663]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 3U))))) 
                         << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2664]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 4U))))) 
                         << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2665]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 5U))))) 
                         << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2666]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 6U))))) 
                         << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2667]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 7U))))) 
                         << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2668]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 8U))))) 
                         << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2669]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 9U))))) 
                         << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2670]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xaU))))) 
                         << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2671]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xbU))))) 
                         << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2672]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xcU))))) 
                         << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2673]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xdU))))) 
                         << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2674]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xeU))))) 
                         << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2675]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xfU))))) 
                         << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2676]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x10U))))) 
                         << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2677]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x11U))))) 
                         << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2678]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x12U))))) 
                         << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2679]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x13U))))) 
                         << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2680]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x14U))))) 
                         << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2681]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x15U))))) 
                         << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2682]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x16U))))) 
                         << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2683]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x17U))))) 
                         << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2684]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x18U))))) 
                         << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2685]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x19U))))) 
                         << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2686]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1aU))))) 
                         << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2687]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1bU))))) 
                         << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2688]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1cU))))) 
                         << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2689]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1dU))))) 
                         << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2690]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1eU))))) 
                         << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2691]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1fU))))) 
                         << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2692]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x20U))))) 
                         << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2693]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x21U))))) 
                         << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x22U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2694]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x22U))))) 
                         << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x23U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2695]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x23U))))) 
                         << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x24U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2696]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x24U))))) 
                         << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x25U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2697]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x25U))))) 
                         << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x26U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2698]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x26U))))) 
                         << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x27U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2699]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x27U))))) 
                         << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x28U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2700]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x28U))))) 
                         << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x29U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2701]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x29U))))) 
                         << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x2aU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2702]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x2aU))))) 
                         << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x2bU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2703]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x2bU))))) 
                         << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x2cU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2704]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x2cU))))) 
                         << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x2dU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2705]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x2dU))))) 
                         << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x2eU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2706]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x2eU))))) 
                         << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x2fU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2707]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x2fU))))) 
                         << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x30U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2708]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x30U))))) 
                         << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x31U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2709]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x31U))))) 
                         << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x32U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2710]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x32U))))) 
                         << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x33U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2711]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x33U))))) 
                         << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x34U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2712]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x34U))))) 
                         << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x35U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2713]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x35U))))) 
                         << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x36U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2714]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x36U))))) 
                         << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x37U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2715]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x37U))))) 
                         << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x38U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2716]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x38U))))) 
                         << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x39U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2717]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x39U))))) 
                         << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x3aU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2718]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x3aU))))) 
                         << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x3bU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2719]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x3bU))))) 
                         << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x3cU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2720]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x3cU))))) 
                         << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x3dU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2721]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x3dU))))) 
                         << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x3eU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2722]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x3eU))))) 
                         << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [0U] >> 0x3fU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2723]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x3fU))))) 
                         << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                       [1U]) ^ (IData)(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                       [1U])))) {
        ++(vlSymsp->__Vcoverage[2724]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | (IData)((IData)((1U & (IData)(
                                                      vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                      [1U])))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2725]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 1U))))) 
                         << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2726]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 2U))))) 
                         << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2727]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 3U))))) 
                         << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2728]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 4U))))) 
                         << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2729]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 5U))))) 
                         << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2730]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 6U))))) 
                         << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2731]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 7U))))) 
                         << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2732]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 8U))))) 
                         << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2733]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 9U))))) 
                         << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2734]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0xaU))))) 
                         << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2735]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0xbU))))) 
                         << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2736]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0xcU))))) 
                         << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2737]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0xdU))))) 
                         << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2738]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0xeU))))) 
                         << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2739]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0xfU))))) 
                         << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2740]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x10U))))) 
                         << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2741]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x11U))))) 
                         << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2742]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x12U))))) 
                         << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2743]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x13U))))) 
                         << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2744]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x14U))))) 
                         << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2745]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x15U))))) 
                         << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2746]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x16U))))) 
                         << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2747]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x17U))))) 
                         << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2748]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x18U))))) 
                         << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2749]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x19U))))) 
                         << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2750]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x1aU))))) 
                         << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2751]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x1bU))))) 
                         << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2752]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x1cU))))) 
                         << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2753]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x1dU))))) 
                         << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2754]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x1eU))))) 
                         << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2755]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x1fU))))) 
                         << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2756]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x20U))))) 
                         << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2757]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x21U))))) 
                         << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x22U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2758]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x22U))))) 
                         << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x23U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2759]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x23U))))) 
                         << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x24U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2760]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x24U))))) 
                         << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x25U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2761]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x25U))))) 
                         << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x26U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2762]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x26U))))) 
                         << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x27U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2763]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x27U))))) 
                         << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x28U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2764]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x28U))))) 
                         << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x29U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2765]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x29U))))) 
                         << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x2aU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2766]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x2aU))))) 
                         << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x2bU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2767]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x2bU))))) 
                         << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x2cU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2768]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x2cU))))) 
                         << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x2dU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2769]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x2dU))))) 
                         << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x2eU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2770]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x2eU))))) 
                         << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x2fU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2771]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x2fU))))) 
                         << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x30U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2772]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x30U))))) 
                         << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x31U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2773]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x31U))))) 
                         << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x32U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2774]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x32U))))) 
                         << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x33U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2775]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x33U))))) 
                         << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x34U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2776]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x34U))))) 
                         << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x35U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2777]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x35U))))) 
                         << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x36U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2778]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x36U))))) 
                         << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x37U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2779]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x37U))))) 
                         << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x38U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2780]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x38U))))) 
                         << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x39U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2781]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x39U))))) 
                         << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x3aU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2782]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x3aU))))) 
                         << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x3bU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2783]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x3bU))))) 
                         << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x3cU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2784]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x3cU))))) 
                         << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x3dU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2785]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x3dU))))) 
                         << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x3eU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2786]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x3eU))))) 
                         << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                        [1U] >> 0x3fU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2787]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list[1U] 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__pair_list
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                                                        [1U] 
                                                        >> 0x3fU))))) 
                         << 0x3fU));
    }
    vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list[0U] 
        = (IData)(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                  [0U]);
    vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list[0U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                   [0U] >> 0x20U));
    vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list[1U] 
        = (IData)(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                  [1U]);
    vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list[1U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list
                   [1U] >> 0x20U));
    if ((1U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[2852]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[2853]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[2854]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[2855]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[2856]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[2857]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[2858]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[2859]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[2860]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[2861]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[2862]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[2863]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[2864]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[2865]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[2866]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[2867]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[2868]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[2869]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[2870]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[2871]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[2872]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[2873]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[2874]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[2875]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[2876]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[2877]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[2878]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[2879]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[2880]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[2881]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[2882]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
          [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2883]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[2884]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (1U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[2885]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (2U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[2886]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (4U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[2887]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (8U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                  [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[2888]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x10U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                  [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[2889]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x20U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                  [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[2890]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x40U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                  [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[2891]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x80U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                   [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[2892]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x100U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                   [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[2893]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x200U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                   [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[2894]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x400U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                   [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[2895]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x800U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                    [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[2896]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                    [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[2897]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                    [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[2898]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                    [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[2899]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                     [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[2900]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                     [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[2901]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                     [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[2902]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                     [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[2903]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                      [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[2904]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                      [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[2905]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                      [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[2906]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                      [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[2907]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                       [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[2908]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                       [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[2909]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                       [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[2910]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                       [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[2911]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                        [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[2912]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                        [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[2913]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                        [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[2914]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
          [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
          [1U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2915]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[2788]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[2789]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[2790]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[2791]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[2792]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[2793]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[2794]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[2795]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[2796]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[2797]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[2798]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[2799]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[2800]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[2801]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[2802]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[2803]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[2804]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[2805]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[2806]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[2807]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[2808]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[2809]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[2810]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[2811]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[2812]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[2813]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[2814]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[2815]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[2816]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[2817]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[2818]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
          [0U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2819]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[2820]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (1U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[2821]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (2U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[2822]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (4U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[2823]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (8U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                  [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[2824]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x10U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                  [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[2825]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x20U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                  [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[2826]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x40U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                  [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[2827]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x80U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                   [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[2828]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x100U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                   [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[2829]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x200U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                   [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[2830]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x400U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                   [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[2831]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x800U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                    [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[2832]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                    [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[2833]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                    [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[2834]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                    [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[2835]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                     [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[2836]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                     [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[2837]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                     [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[2838]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                     [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[2839]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                      [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[2840]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                      [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[2841]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                      [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[2842]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                      [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[2843]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                       [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[2844]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                       [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[2845]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                       [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[2846]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                       [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[2847]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                        [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[2848]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                        [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[2849]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                        [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[2850]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
          [1U] ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
          [1U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2851]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                         [1U]));
    }
    ++(vlSymsp->__Vcoverage[2949]);
    ++(vlSymsp->__Vcoverage[2949]);
    ++(vlSymsp->__Vcoverage[2951]);
    ++(vlSymsp->__Vcoverage[2952]);
    vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__i = 2U;
    vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__hit 
        = (vlSelf->inst == vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__dnpc = ((IData)(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__hit)
                               ? vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out
                               : ((IData)(4U) + vlSelf->cpupc));
    if (((IData)(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[2948]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__hit;
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2916]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (1U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2917]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (2U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2918]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (4U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
               ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2919]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (8U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2920]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x10U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2921]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x20U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2922]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x40U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                  ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2923]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x80U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2924]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x100U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2925]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x200U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2926]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x400U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                   ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2927]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x800U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2928]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2929]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2930]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                    ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2931]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2932]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2933]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2934]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2935]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2936]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2937]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2938]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2939]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2940]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2941]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2942]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2943]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2944]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2945]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out))) {
        ++(vlSymsp->__Vcoverage[2946]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if (((vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out 
          ^ vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2947]);
        vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT____Vtogcov__lut_out) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out));
    }
    if ((1U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffeU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (1U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((2U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffdU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (2U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((4U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffbU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (4U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((8U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffff7U 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (8U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x10U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffefU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x10U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x20U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffdfU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x20U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x40U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffbfU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x40U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x80U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffff7fU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x80U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x100U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffeffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x100U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x200U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffdffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x200U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x400U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffbffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x400U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x800U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffff7ffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x800U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x1000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffefffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x1000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x2000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffdfffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x2000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x4000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffbfffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x4000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x8000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffff7fffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x8000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x10000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffeffffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x10000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x20000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffdffffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x20000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x40000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffbffffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x40000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x80000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfff7ffffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x80000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x100000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffefffffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x100000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x200000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffdfffffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x200000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x400000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffbfffffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x400000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x800000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xff7fffffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x800000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x1000000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfeffffffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x1000000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x2000000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfdffffffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x2000000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x4000000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfbffffffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x4000000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x8000000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xf7ffffffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x8000000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x10000000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xefffffffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x10000000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x20000000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xdfffffffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x20000000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if ((0x40000000U & (vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xbfffffffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x40000000U 
                                                & vlSelf->top__DOT__dnpc));
    }
    if (((vlSelf->top__DOT__dnpc ^ vlSelf->top__DOT____Vtogcov__dnpc) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0x7fffffffU 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (0x80000000U 
                                                & vlSelf->top__DOT__dnpc));
    }
}
