// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__11(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__11\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp1093;
    VlWide<7>/*223:0*/ __Vtemp1095;
    VlWide<9>/*287:0*/ __Vtemp1097;
    VlWide<13>/*415:0*/ __Vtemp1100;
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__imm)))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | (IData)((IData)((1U & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[798]);
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
    __Vtemp1093[3U] = ((7U & ((IData)((((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                       >> 0xbU)))))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (0xfffU 
                                                                    & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                              >> 0x1aU)) | ((0x38U 
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
    __Vtemp1093[4U] = (0x40U | ((7U & ((IData)(((((- (QData)((IData)(
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
                                (0x38U & ((IData)((
                                                   (((- (QData)((IData)(
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
    __Vtemp1095[3U] = ((7U & ((IData)((((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                       >> 0xbU)))))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (0xfffU 
                                                                    & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                              >> 0x1aU)) | ((0x38U 
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
    __Vtemp1095[4U] = (0x80U | ((7U & ((IData)(((((- (QData)((IData)(
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
    __Vtemp1097[3U] = ((7U & ((IData)((((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                       >> 0xcU)))))) 
                                        << 0xdU) | (QData)((IData)(
                                                                   (0x1fffU 
                                                                    & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                              >> 0x1aU)) | ((0x38U 
                                             & ((IData)(
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
    __Vtemp1097[4U] = (0xc0U | ((7U & ((IData)(((((- (QData)((IData)(
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
    __Vtemp1097[7U] = ((__Vtemp1095[4U] >> 0x1dU) | 
                       ((0x38U & ((IData)((((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                           >> 0xbU)))))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             (0xfffU 
                                                              & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                  >> 0x14U)) | (__Vtemp1093[3U] 
                                                << 6U)));
    __Vtemp1097[8U] = ((7U & (__Vtemp1093[3U] >> 0x1aU)) 
                       | ((0x38U & (__Vtemp1093[3U] 
                                    >> 0x1aU)) | (__Vtemp1093[4U] 
                                                  << 6U)));
    __Vtemp1100[5U] = ((7U & ((IData)((((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))) 
                              >> 0x1aU)) | ((0x38U 
                                             & ((IData)(
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
    __Vtemp1100[6U] = (0x100U | ((7U & ((IData)(((((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))) 
                                                 >> 0x20U)) 
                                        >> 0x1aU)) 
                                 | (((IData)((((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                              >> 0xcU)))))) 
                                               << 0xdU) 
                                              | (QData)((IData)(
                                                                (0x1fffU 
                                                                 & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                     << 9U) | (0x38U 
                                               & ((IData)(
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
    __Vtemp1100[9U] = ((__Vtemp1097[4U] >> 0x1dU) | 
                       ((0x38U & ((IData)((((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                           >> 0xbU)))))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             (0xfffU 
                                                              & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                  >> 0x14U)) | (__Vtemp1095[3U] 
                                                << 6U)));
    __Vtemp1100[0xaU] = ((7U & (__Vtemp1095[3U] >> 0x1aU)) 
                         | ((0x38U & (__Vtemp1095[3U] 
                                      >> 0x1aU)) | 
                            (__Vtemp1095[4U] << 6U)));
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
        = __Vtemp1100[5U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[6U] 
        = __Vtemp1100[6U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[7U] 
        = ((7U & ((IData)((((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                           >> 0xcU)))))) 
                            << 0xdU) | (QData)((IData)(
                                                       (0x1fffU 
                                                        & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                  >> 0x17U)) | (__Vtemp1097[3U] << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[8U] 
        = ((__Vtemp1097[3U] >> 0x1dU) | (__Vtemp1097[4U] 
                                         << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[9U] 
        = __Vtemp1100[9U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[0xaU] 
        = __Vtemp1100[0xaU];
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[0xbU] 
        = ((7U & (__Vtemp1095[4U] >> 0x1aU)) | (__Vtemp1097[7U] 
                                                << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[0xcU] 
        = ((__Vtemp1097[7U] >> 0x1dU) | (__Vtemp1097[8U] 
                                         << 3U));
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__call_return)))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_return 
            = ((2U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__call_return)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__call_return)))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_return 
            = ((1U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__call_return)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x20U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x40U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x80U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x100U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x200U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x400U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x800U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x1000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x2000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x4000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x8000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x10000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x10000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x20000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x20000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x40000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x40000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x80000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x80000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x100000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x100000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x200000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x200000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x400000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x400000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x800000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x800000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x1000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x1000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x2000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x2000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x4000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x4000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x8000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x8000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x10000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x10000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x20000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x20000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x40000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x40000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((((IData)(vlSelf->top__DOT__de__DOT__call_return) 
          ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x80000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__12\n"); );
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__Simm)))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | (IData)((IData)((1U & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__13(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__13\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__de__DOT__r0__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__de__DOT__r0__DOT__rf__v0;
    // Body
    ++(vlSymsp->__Vcoverage[105]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->cpupc = 0x80000000U;
    } else {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->cpupc = vlSelf->top__DOT__dnpc;
    }
    ++(vlSymsp->__Vcoverage[3529]);
    ++(vlSymsp->__Vcoverage[3531]);
    ++(vlSymsp->__Vcoverage[3526]);
    ++(vlSymsp->__Vcoverage[3528]);
    __Vdlyvval__top__DOT__de__DOT__r0__DOT__rf__v0 
        = vlSelf->top__DOT__de__DOT__wdata;
    __Vdlyvdim0__top__DOT__de__DOT__r0__DOT__rf__v0 
        = vlSelf->top__DOT__de__DOT__waddr;
    vlSelf->top__DOT__de__DOT__r0__DOT__rf[__Vdlyvdim0__top__DOT__de__DOT__r0__DOT__rf__v0] 
        = __Vdlyvval__top__DOT__de__DOT__r0__DOT__rf__v0;
    vlSelf->top__DOT__de__DOT__r0__DOT__rf[0U] = 0ULL;
    if ((2U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4013]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (2U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((4U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4014]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (4U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((8U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4015]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (8U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4016]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x10U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4017]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x20U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4018]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x40U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4019]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x80U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4020]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x100U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4021]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x200U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4022]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x400U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4023]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x800U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4024]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x1000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4025]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x2000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4026]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x4000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4027]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x8000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->cpupc) 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4028]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x10000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->cpupc) 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4029]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x20000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->cpupc) 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4030]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x40000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->cpupc) 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4031]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x80000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->cpupc) 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4032]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x100000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->cpupc) 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4033]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x200000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->cpupc) 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4034]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x400000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->cpupc) 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4035]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x800000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->cpupc) 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4036]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x1000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->cpupc) 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4037]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x2000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->cpupc) 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4038]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x4000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->cpupc) 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4039]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x8000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->cpupc) 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4040]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x10000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->cpupc) 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4041]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x20000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->cpupc) 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4042]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x40000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if (((((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4043]);
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
        ++(vlSymsp->__Vcoverage[2437]);
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
        ++(vlSymsp->__Vcoverage[2438]);
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
        ++(vlSymsp->__Vcoverage[2439]);
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
        ++(vlSymsp->__Vcoverage[2440]);
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
        ++(vlSymsp->__Vcoverage[2441]);
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
        ++(vlSymsp->__Vcoverage[2442]);
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
        ++(vlSymsp->__Vcoverage[2443]);
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
        ++(vlSymsp->__Vcoverage[2444]);
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
        ++(vlSymsp->__Vcoverage[2445]);
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
        ++(vlSymsp->__Vcoverage[2446]);
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
        ++(vlSymsp->__Vcoverage[2447]);
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
        ++(vlSymsp->__Vcoverage[2448]);
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
        ++(vlSymsp->__Vcoverage[2449]);
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
        ++(vlSymsp->__Vcoverage[2450]);
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
        ++(vlSymsp->__Vcoverage[2451]);
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
        ++(vlSymsp->__Vcoverage[2452]);
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
        ++(vlSymsp->__Vcoverage[2453]);
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
        ++(vlSymsp->__Vcoverage[2454]);
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
        ++(vlSymsp->__Vcoverage[2455]);
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
        ++(vlSymsp->__Vcoverage[2456]);
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
        ++(vlSymsp->__Vcoverage[2457]);
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
        ++(vlSymsp->__Vcoverage[2458]);
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
        ++(vlSymsp->__Vcoverage[2459]);
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
        ++(vlSymsp->__Vcoverage[2460]);
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
        ++(vlSymsp->__Vcoverage[2461]);
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
        ++(vlSymsp->__Vcoverage[2462]);
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
        ++(vlSymsp->__Vcoverage[2463]);
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
        ++(vlSymsp->__Vcoverage[2464]);
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
        ++(vlSymsp->__Vcoverage[2465]);
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
        ++(vlSymsp->__Vcoverage[2466]);
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
        ++(vlSymsp->__Vcoverage[2467]);
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
        ++(vlSymsp->__Vcoverage[2468]);
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
        ++(vlSymsp->__Vcoverage[2469]);
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
        ++(vlSymsp->__Vcoverage[2470]);
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
        ++(vlSymsp->__Vcoverage[2471]);
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
        ++(vlSymsp->__Vcoverage[2472]);
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
        ++(vlSymsp->__Vcoverage[2473]);
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
        ++(vlSymsp->__Vcoverage[2474]);
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
        ++(vlSymsp->__Vcoverage[2475]);
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
        ++(vlSymsp->__Vcoverage[2476]);
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
        ++(vlSymsp->__Vcoverage[2477]);
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
        ++(vlSymsp->__Vcoverage[2478]);
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
        ++(vlSymsp->__Vcoverage[2479]);
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
        ++(vlSymsp->__Vcoverage[2480]);
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
        ++(vlSymsp->__Vcoverage[2481]);
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
        ++(vlSymsp->__Vcoverage[2482]);
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
        ++(vlSymsp->__Vcoverage[2483]);
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
        ++(vlSymsp->__Vcoverage[2484]);
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
        ++(vlSymsp->__Vcoverage[2485]);
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
        ++(vlSymsp->__Vcoverage[2486]);
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
        ++(vlSymsp->__Vcoverage[2487]);
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
        ++(vlSymsp->__Vcoverage[2488]);
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
        ++(vlSymsp->__Vcoverage[2489]);
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
        ++(vlSymsp->__Vcoverage[2490]);
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
        ++(vlSymsp->__Vcoverage[2491]);
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
        ++(vlSymsp->__Vcoverage[2492]);
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
        ++(vlSymsp->__Vcoverage[2493]);
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
        ++(vlSymsp->__Vcoverage[2494]);
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
        ++(vlSymsp->__Vcoverage[2495]);
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
        ++(vlSymsp->__Vcoverage[2496]);
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
        ++(vlSymsp->__Vcoverage[2497]);
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
        ++(vlSymsp->__Vcoverage[2498]);
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
        ++(vlSymsp->__Vcoverage[2499]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((QData)((IData)(vlSelf->cpupc))) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__upc)))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | (IData)((IData)((1U & (IData)((QData)((IData)(vlSelf->cpupc)))))));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[569]);
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

VL_INLINE_OPT void Vtop___024root___combo__TOP__15(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__15\n"); );
    // Variables
    VlWide<64>/*2047:0*/ __Vtemp1217;
    VlWide<66>/*2111:0*/ __Vtemp1218;
    VlWide<67>/*2143:0*/ __Vtemp1219;
    VlWide<69>/*2207:0*/ __Vtemp1220;
    VlWide<70>/*2239:0*/ __Vtemp1221;
    VlWide<72>/*2303:0*/ __Vtemp1222;
    VlWide<73>/*2335:0*/ __Vtemp1223;
    VlWide<75>/*2399:0*/ __Vtemp1224;
    VlWide<76>/*2431:0*/ __Vtemp1225;
    VlWide<78>/*2495:0*/ __Vtemp1226;
    VlWide<79>/*2527:0*/ __Vtemp1227;
    VlWide<81>/*2591:0*/ __Vtemp1228;
    VlWide<82>/*2623:0*/ __Vtemp1229;
    VlWide<84>/*2687:0*/ __Vtemp1230;
    VlWide<85>/*2719:0*/ __Vtemp1231;
    VlWide<87>/*2783:0*/ __Vtemp1232;
    VlWide<88>/*2815:0*/ __Vtemp1233;
    VlWide<90>/*2879:0*/ __Vtemp1234;
    VlWide<91>/*2911:0*/ __Vtemp1235;
    VlWide<93>/*2975:0*/ __Vtemp1236;
    VlWide<94>/*3007:0*/ __Vtemp1237;
    VlWide<96>/*3071:0*/ __Vtemp1238;
    VlWide<97>/*3103:0*/ __Vtemp1239;
    VlWide<99>/*3167:0*/ __Vtemp1240;
    VlWide<100>/*3199:0*/ __Vtemp1241;
    VlWide<102>/*3263:0*/ __Vtemp1242;
    VlWide<103>/*3295:0*/ __Vtemp1243;
    VlWide<105>/*3359:0*/ __Vtemp1244;
    VlWide<106>/*3391:0*/ __Vtemp1245;
    VlWide<108>/*3455:0*/ __Vtemp1246;
    VlWide<109>/*3487:0*/ __Vtemp1247;
    VlWide<111>/*3551:0*/ __Vtemp1248;
    VlWide<112>/*3583:0*/ __Vtemp1249;
    VlWide<114>/*3647:0*/ __Vtemp1250;
    VlWide<115>/*3679:0*/ __Vtemp1251;
    VlWide<117>/*3743:0*/ __Vtemp1252;
    VlWide<118>/*3775:0*/ __Vtemp1253;
    VlWide<120>/*3839:0*/ __Vtemp1254;
    VlWide<121>/*3871:0*/ __Vtemp1255;
    VlWide<123>/*3935:0*/ __Vtemp1256;
    VlWide<64>/*2047:0*/ __Vtemp1298;
    VlWide<66>/*2111:0*/ __Vtemp1299;
    VlWide<67>/*2143:0*/ __Vtemp1300;
    VlWide<69>/*2207:0*/ __Vtemp1301;
    VlWide<70>/*2239:0*/ __Vtemp1302;
    VlWide<72>/*2303:0*/ __Vtemp1303;
    VlWide<73>/*2335:0*/ __Vtemp1304;
    VlWide<75>/*2399:0*/ __Vtemp1305;
    VlWide<76>/*2431:0*/ __Vtemp1306;
    VlWide<78>/*2495:0*/ __Vtemp1307;
    VlWide<79>/*2527:0*/ __Vtemp1308;
    VlWide<81>/*2591:0*/ __Vtemp1309;
    VlWide<82>/*2623:0*/ __Vtemp1310;
    VlWide<84>/*2687:0*/ __Vtemp1311;
    VlWide<85>/*2719:0*/ __Vtemp1312;
    VlWide<87>/*2783:0*/ __Vtemp1313;
    VlWide<88>/*2815:0*/ __Vtemp1314;
    VlWide<90>/*2879:0*/ __Vtemp1315;
    VlWide<91>/*2911:0*/ __Vtemp1316;
    VlWide<93>/*2975:0*/ __Vtemp1317;
    VlWide<94>/*3007:0*/ __Vtemp1318;
    VlWide<96>/*3071:0*/ __Vtemp1319;
    VlWide<97>/*3103:0*/ __Vtemp1320;
    VlWide<99>/*3167:0*/ __Vtemp1321;
    VlWide<100>/*3199:0*/ __Vtemp1322;
    VlWide<102>/*3263:0*/ __Vtemp1323;
    VlWide<103>/*3295:0*/ __Vtemp1324;
    VlWide<105>/*3359:0*/ __Vtemp1325;
    VlWide<106>/*3391:0*/ __Vtemp1326;
    VlWide<108>/*3455:0*/ __Vtemp1327;
    VlWide<109>/*3487:0*/ __Vtemp1328;
    VlWide<111>/*3551:0*/ __Vtemp1329;
    VlWide<112>/*3583:0*/ __Vtemp1330;
    VlWide<114>/*3647:0*/ __Vtemp1331;
    VlWide<115>/*3679:0*/ __Vtemp1332;
    VlWide<117>/*3743:0*/ __Vtemp1333;
    VlWide<118>/*3775:0*/ __Vtemp1334;
    VlWide<120>/*3839:0*/ __Vtemp1335;
    VlWide<121>/*3871:0*/ __Vtemp1336;
    VlWide<123>/*3935:0*/ __Vtemp1337;
    // Body
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3856]);
    ++(vlSymsp->__Vcoverage[3858]);
    ++(vlSymsp->__Vcoverage[3859]);
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__i = 0x23U;
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
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->top__DOT__de__DOT__waddr = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit)
                                         ? (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)
                                         : 0U);
    vlSelf->top__DOT__de__DOT__rdata = vlSelf->top__DOT__de__DOT__r0__DOT__rf
        [vlSelf->top__DOT__de__DOT__raddr];
    vlSelf->top__DOT__de__DOT__src1 = vlSelf->top__DOT__de__DOT__r0__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    vlSelf->top__DOT__de__DOT__src2 = vlSelf->top__DOT__de__DOT__r0__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    if (((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[3855]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[3850]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1eU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[3851]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1dU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[3852]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1bU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[3853]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x17U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[3854]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0x1eU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0x1dU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0x1bU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0x17U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0xfU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__rdata) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_a0))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__rdata)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 1U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 1U)))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (2U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                 >> 1U)) << 1U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 2U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 2U)))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (4U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                 >> 2U)) << 2U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 3U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 3U)))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (8U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                 >> 3U)) << 3U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 4U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 4U)))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x10U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                    >> 4U)) << 4U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 5U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 5U)))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x20U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                    >> 5U)) << 5U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 6U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 6U)))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x40U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                    >> 6U)) << 6U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 7U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 7U)))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x80U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                    >> 7U)) << 7U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 8U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 8U)))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x100U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                     >> 8U)) << 8U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 9U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 9U)))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x200U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                     >> 9U)) << 9U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xaU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x400U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                     >> 0xaU)) << 0xaU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xbU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x800U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                     >> 0xbU)) << 0xbU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xcU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x1000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                      >> 0xcU)) << 0xcU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xdU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x2000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                      >> 0xdU)) << 0xdU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xeU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x4000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                      >> 0xeU)) << 0xeU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xfU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x8000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                      >> 0xfU)) << 0xfU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x10U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x10000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                       >> 0x10U)) << 0x10U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x11U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x20000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                       >> 0x11U)) << 0x11U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x12U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x40000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                       >> 0x12U)) << 0x12U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x13U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x80000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                       >> 0x13U)) << 0x13U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x14U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x100000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                        >> 0x14U)) 
                               << 0x14U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x15U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x200000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                        >> 0x15U)) 
                               << 0x15U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x16U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x400000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                        >> 0x16U)) 
                               << 0x16U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x17U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x800000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                        >> 0x17U)) 
                               << 0x17U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x18U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x1000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                         >> 0x18U)) 
                                << 0x18U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x19U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x2000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                         >> 0x19U)) 
                                << 0x19U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1aU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x4000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                         >> 0x1aU)) 
                                << 0x1aU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1bU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x8000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                         >> 0x1bU)) 
                                << 0x1bU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1cU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x10000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                          >> 0x1cU)) 
                                 << 0x1cU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1dU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x20000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                          >> 0x1dU)) 
                                 << 0x1dU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1eU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x40000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                          >> 0x1eU)) 
                                 << 0x1eU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1fU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                           >> 0x1fU)) << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__src1) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__src1)))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__src1)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__src2) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__src2)))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__src2)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__de__DOT__srawd = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__de__DOT__src1), 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__de__DOT__src2)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__de__DOT__src2);
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__de__DOT__src2 
                   >> 0x20U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[2U] 
        = vlSelf->top__DOT__de__DOT__sb;
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[3U] 
        = (IData)(vlSelf->top__DOT__de__DOT__src2);
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[4U] 
        = (IData)((vlSelf->top__DOT__de__DOT__src2 
                   >> 0x20U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[5U] 
        = vlSelf->top__DOT__de__DOT__sw;
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[6U] 
        = (IData)(vlSelf->top__DOT__de__DOT__src2);
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[7U] 
        = (IData)((vlSelf->top__DOT__de__DOT__src2 
                   >> 0x20U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[8U] 
        = vlSelf->top__DOT__de__DOT__sh;
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[9U] 
        = (IData)(vlSelf->top__DOT__de__DOT__src2);
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[0xaU] 
        = (IData)((vlSelf->top__DOT__de__DOT__src2 
                   >> 0x20U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[0xbU] 
        = vlSelf->top__DOT__de__DOT__sd;
    __Vtemp1217[0U] = vlSelf->top__DOT__de__DOT__Mul;
    __Vtemp1217[1U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1217[2U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                               >> 0x20U));
    __Vtemp1217[3U] = vlSelf->top__DOT__de__DOT__Add;
    __Vtemp1217[4U] = (IData)((QData)((IData)(vlSelf->top__DOT__de__DOT__src1)));
    __Vtemp1217[5U] = (IData)(((QData)((IData)(vlSelf->top__DOT__de__DOT__src1)) 
                               >> 0x20U));
    __Vtemp1217[6U] = vlSelf->top__DOT__de__DOT__srlw;
    __Vtemp1217[7U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1217[8U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                               >> 0x20U));
    __Vtemp1217[9U] = vlSelf->top__DOT__de__DOT__sllw;
    __Vtemp1217[0xaU] = (IData)((QData)((IData)(vlSelf->top__DOT__de__DOT__src1)));
    __Vtemp1217[0xbU] = (IData)(((QData)((IData)(vlSelf->top__DOT__de__DOT__src1)) 
                                 >> 0x20U));
    __Vtemp1217[0xcU] = vlSelf->top__DOT__de__DOT__remw;
    __Vtemp1217[0xdU] = (IData)((QData)((IData)(vlSelf->top__DOT__de__DOT__src1)));
    __Vtemp1217[0xeU] = (IData)(((QData)((IData)(vlSelf->top__DOT__de__DOT__src1)) 
                                 >> 0x20U));
    __Vtemp1217[0xfU] = vlSelf->top__DOT__de__DOT__divw;
    __Vtemp1217[0x10U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1217[0x11U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1217[0x12U] = vlSelf->top__DOT__de__DOT__mulw;
    __Vtemp1217[0x13U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1217[0x14U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1217[0x15U] = vlSelf->top__DOT__de__DOT__subw;
    __Vtemp1217[0x16U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1217[0x17U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1217[0x18U] = vlSelf->top__DOT__de__DOT__addw;
    __Vtemp1217[0x19U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1217[0x1aU] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1217[0x1bU] = vlSelf->top__DOT__de__DOT__ld;
    __Vtemp1217[0x1cU] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1217[0x1dU] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1217[0x1eU] = vlSelf->top__DOT__de__DOT__lhu;
    __Vtemp1217[0x1fU] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1217[0x20U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1217[0x21U] = vlSelf->top__DOT__de__DOT__lbu;
    __Vtemp1217[0x22U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1217[0x23U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1217[0x24U] = vlSelf->top__DOT__de__DOT__lh;
    __Vtemp1217[0x25U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1217[0x26U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1217[0x27U] = vlSelf->top__DOT__de__DOT__lw;
    __Vtemp1217[0x28U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1217[0x29U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1217[0x2aU] = vlSelf->top__DOT__de__DOT__sb;
    __Vtemp1217[0x2bU] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1217[0x2cU] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1217[0x2dU] = vlSelf->top__DOT__de__DOT__sw;
    __Vtemp1217[0x2eU] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1217[0x2fU] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1217[0x30U] = vlSelf->top__DOT__de__DOT__sh;
    __Vtemp1217[0x31U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1217[0x32U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1217[0x33U] = vlSelf->top__DOT__de__DOT__sd;
    __Vtemp1217[0x34U] = (IData)((QData)((IData)(vlSelf->cpupc)));
    __Vtemp1217[0x35U] = (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                  >> 0x20U));
    __Vtemp1217[0x36U] = (0x17U | (0xffffff80U & vlSelf->inst));
    __Vtemp1217[0x37U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1217[0x38U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1217[0x39U] = vlSelf->top__DOT__de__DOT__xori;
    __Vtemp1217[0x3aU] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1217[0x3bU] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1217[0x3cU] = vlSelf->top__DOT__de__DOT__andi;
    __Vtemp1217[0x3dU] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1217[0x3eU] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1217[0x3fU] = vlSelf->top__DOT__de__DOT__addi;
    VL_CONCAT_WWQ(2112,2048,64, __Vtemp1218, __Vtemp1217, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(2144,2112,32, __Vtemp1219, __Vtemp1218, vlSelf->top__DOT__de__DOT__And);
    VL_CONCAT_WWQ(2208,2144,64, __Vtemp1220, __Vtemp1219, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(2240,2208,32, __Vtemp1221, __Vtemp1220, vlSelf->top__DOT__de__DOT__Or);
    VL_CONCAT_WWQ(2304,2240,64, __Vtemp1222, __Vtemp1221, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp1223, __Vtemp1222, vlSelf->top__DOT__de__DOT__sltu);
    VL_CONCAT_WWQ(2400,2336,64, __Vtemp1224, __Vtemp1223, vlSelf->top__DOT__de__DOT__src2);
    VL_CONCAT_WWI(2432,2400,32, __Vtemp1225, __Vtemp1224, vlSelf->top__DOT__de__DOT__slt);
    VL_CONCAT_WWQ(2496,2432,64, __Vtemp1226, __Vtemp1225, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(2528,2496,32, __Vtemp1227, __Vtemp1226, vlSelf->top__DOT__de__DOT__sub);
    VL_CONCAT_WWQ(2592,2528,64, __Vtemp1228, __Vtemp1227, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(2624,2592,32, __Vtemp1229, __Vtemp1228, vlSelf->top__DOT__de__DOT__sltiu);
    VL_CONCAT_WWQ(2688,2624,64, __Vtemp1230, __Vtemp1229, vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp1231, __Vtemp1230, vlSelf->top__DOT__de__DOT__beq);
    VL_CONCAT_WWQ(2784,2720,64, __Vtemp1232, __Vtemp1231, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(2816,2784,32, __Vtemp1233, __Vtemp1232, vlSelf->top__DOT__de__DOT__bge);
    VL_CONCAT_WWQ(2880,2816,64, __Vtemp1234, __Vtemp1233, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(2912,2880,32, __Vtemp1235, __Vtemp1234, vlSelf->top__DOT__de__DOT__bgeu);
    VL_CONCAT_WWQ(2976,2912,64, __Vtemp1236, __Vtemp1235, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3008,2976,32, __Vtemp1237, __Vtemp1236, vlSelf->top__DOT__de__DOT__bltu);
    VL_CONCAT_WWQ(3072,3008,64, __Vtemp1238, __Vtemp1237, vlSelf->top__DOT__de__DOT__src2);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp1239, __Vtemp1238, vlSelf->top__DOT__de__DOT__blt);
    VL_CONCAT_WWQ(3168,3104,64, __Vtemp1240, __Vtemp1239, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3200,3168,32, __Vtemp1241, __Vtemp1240, vlSelf->top__DOT__de__DOT__bne);
    VL_CONCAT_WWQ(3264,3200,64, __Vtemp1242, __Vtemp1241, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3296,3264,32, __Vtemp1243, __Vtemp1242, vlSelf->top__DOT__de__DOT__addiw);
    VL_CONCAT_WWQ(3360,3296,64, __Vtemp1244, __Vtemp1243, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3392,3360,32, __Vtemp1245, __Vtemp1244, vlSelf->top__DOT__de__DOT__slliw);
    VL_CONCAT_WWQ(3456,3392,64, __Vtemp1246, __Vtemp1245, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3488,3456,32, __Vtemp1247, __Vtemp1246, vlSelf->top__DOT__de__DOT__srliw);
    VL_CONCAT_WWQ(3552,3488,64, __Vtemp1248, __Vtemp1247, (QData)((IData)(vlSelf->top__DOT__de__DOT__src1)));
    VL_CONCAT_WWI(3584,3552,32, __Vtemp1249, __Vtemp1248, vlSelf->top__DOT__de__DOT__sraiw);
    VL_CONCAT_WWQ(3648,3584,64, __Vtemp1250, __Vtemp1249, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3680,3648,32, __Vtemp1251, __Vtemp1250, vlSelf->top__DOT__de__DOT__srai);
    VL_CONCAT_WWQ(3744,3680,64, __Vtemp1252, __Vtemp1251, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3776,3744,32, __Vtemp1253, __Vtemp1252, vlSelf->top__DOT__de__DOT__slli);
    VL_CONCAT_WWQ(3840,3776,64, __Vtemp1254, __Vtemp1253, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3872,3840,32, __Vtemp1255, __Vtemp1254, vlSelf->top__DOT__de__DOT__srli);
    VL_CONCAT_WWQ(3936,3872,64, __Vtemp1256, __Vtemp1255, vlSelf->top__DOT__de__DOT__src1);
    VL_ASSIGN_W(3936,vlSelf->top__DOT__de__DOT____Vcellinp__m4____pinNumber4, __Vtemp1256);
    __Vtemp1298[0U] = vlSelf->top__DOT__de__DOT__Mul;
    __Vtemp1298[1U] = (IData)(vlSelf->top__DOT__de__DOT__src2);
    __Vtemp1298[2U] = (IData)((vlSelf->top__DOT__de__DOT__src2 
                               >> 0x20U));
    __Vtemp1298[3U] = vlSelf->top__DOT__de__DOT__Add;
    __Vtemp1298[4U] = (IData)((QData)((IData)((0x1fU 
                                               & (IData)(vlSelf->top__DOT__de__DOT__src2)))));
    __Vtemp1298[5U] = (IData)(((QData)((IData)((0x1fU 
                                                & (IData)(vlSelf->top__DOT__de__DOT__src2)))) 
                               >> 0x20U));
    __Vtemp1298[6U] = vlSelf->top__DOT__de__DOT__srlw;
    __Vtemp1298[7U] = (IData)((QData)((IData)((0x1fU 
                                               & (IData)(vlSelf->top__DOT__de__DOT__src2)))));
    __Vtemp1298[8U] = (IData)(((QData)((IData)((0x1fU 
                                                & (IData)(vlSelf->top__DOT__de__DOT__src2)))) 
                               >> 0x20U));
    __Vtemp1298[9U] = vlSelf->top__DOT__de__DOT__sllw;
    __Vtemp1298[0xaU] = (IData)((QData)((IData)(vlSelf->top__DOT__de__DOT__src2)));
    __Vtemp1298[0xbU] = (IData)(((QData)((IData)(vlSelf->top__DOT__de__DOT__src2)) 
                                 >> 0x20U));
    __Vtemp1298[0xcU] = vlSelf->top__DOT__de__DOT__remw;
    __Vtemp1298[0xdU] = (IData)((QData)((IData)(vlSelf->top__DOT__de__DOT__src2)));
    __Vtemp1298[0xeU] = (IData)(((QData)((IData)(vlSelf->top__DOT__de__DOT__src2)) 
                                 >> 0x20U));
    __Vtemp1298[0xfU] = vlSelf->top__DOT__de__DOT__divw;
    __Vtemp1298[0x10U] = (IData)(vlSelf->top__DOT__de__DOT__src2);
    __Vtemp1298[0x11U] = (IData)((vlSelf->top__DOT__de__DOT__src2 
                                  >> 0x20U));
    __Vtemp1298[0x12U] = vlSelf->top__DOT__de__DOT__mulw;
    __Vtemp1298[0x13U] = (IData)((- vlSelf->top__DOT__de__DOT__src2));
    __Vtemp1298[0x14U] = (IData)(((- vlSelf->top__DOT__de__DOT__src2) 
                                  >> 0x20U));
    __Vtemp1298[0x15U] = vlSelf->top__DOT__de__DOT__subw;
    __Vtemp1298[0x16U] = (IData)(vlSelf->top__DOT__de__DOT__src2);
    __Vtemp1298[0x17U] = (IData)((vlSelf->top__DOT__de__DOT__src2 
                                  >> 0x20U));
    __Vtemp1298[0x18U] = vlSelf->top__DOT__de__DOT__addw;
    __Vtemp1298[0x19U] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1298[0x1aU] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1298[0x1bU] = vlSelf->top__DOT__de__DOT__ld;
    __Vtemp1298[0x1cU] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1298[0x1dU] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1298[0x1eU] = vlSelf->top__DOT__de__DOT__lhu;
    __Vtemp1298[0x1fU] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1298[0x20U] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1298[0x21U] = vlSelf->top__DOT__de__DOT__lbu;
    __Vtemp1298[0x22U] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1298[0x23U] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1298[0x24U] = vlSelf->top__DOT__de__DOT__lh;
    __Vtemp1298[0x25U] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1298[0x26U] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1298[0x27U] = vlSelf->top__DOT__de__DOT__lw;
    __Vtemp1298[0x28U] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1298[0x29U] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1298[0x2aU] = vlSelf->top__DOT__de__DOT__sb;
    __Vtemp1298[0x2bU] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1298[0x2cU] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1298[0x2dU] = vlSelf->top__DOT__de__DOT__sw;
    __Vtemp1298[0x2eU] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1298[0x2fU] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1298[0x30U] = vlSelf->top__DOT__de__DOT__sh;
    __Vtemp1298[0x31U] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1298[0x32U] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1298[0x33U] = vlSelf->top__DOT__de__DOT__sd;
    __Vtemp1298[0x34U] = (IData)(vlSelf->top__DOT__de__DOT__addauipc);
    __Vtemp1298[0x35U] = (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                  >> 0x20U));
    __Vtemp1298[0x36U] = (0x17U | (0xffffff80U & vlSelf->inst));
    __Vtemp1298[0x37U] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1298[0x38U] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1298[0x39U] = vlSelf->top__DOT__de__DOT__xori;
    __Vtemp1298[0x3aU] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1298[0x3bU] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1298[0x3cU] = vlSelf->top__DOT__de__DOT__andi;
    __Vtemp1298[0x3dU] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1298[0x3eU] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1298[0x3fU] = vlSelf->top__DOT__de__DOT__addi;
    VL_CONCAT_WWQ(2112,2048,64, __Vtemp1299, __Vtemp1298, vlSelf->top__DOT__de__DOT__src2);
    VL_CONCAT_WWI(2144,2112,32, __Vtemp1300, __Vtemp1299, vlSelf->top__DOT__de__DOT__And);
    VL_CONCAT_WWQ(2208,2144,64, __Vtemp1301, __Vtemp1300, vlSelf->top__DOT__de__DOT__src2);
    VL_CONCAT_WWI(2240,2208,32, __Vtemp1302, __Vtemp1301, vlSelf->top__DOT__de__DOT__Or);
    VL_CONCAT_WWQ(2304,2240,64, __Vtemp1303, __Vtemp1302, vlSelf->top__DOT__de__DOT__src2);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp1304, __Vtemp1303, vlSelf->top__DOT__de__DOT__sltu);
    VL_CONCAT_WWQ(2400,2336,64, __Vtemp1305, __Vtemp1304, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(2432,2400,32, __Vtemp1306, __Vtemp1305, vlSelf->top__DOT__de__DOT__slt);
    VL_CONCAT_WWQ(2496,2432,64, __Vtemp1307, __Vtemp1306, 
                  (- vlSelf->top__DOT__de__DOT__src2));
    VL_CONCAT_WWI(2528,2496,32, __Vtemp1308, __Vtemp1307, vlSelf->top__DOT__de__DOT__sub);
    VL_CONCAT_WWQ(2592,2528,64, __Vtemp1309, __Vtemp1308, 
                  (- vlSelf->top__DOT__de__DOT__src2));
    VL_CONCAT_WWI(2624,2592,32, __Vtemp1310, __Vtemp1309, vlSelf->top__DOT__de__DOT__sltiu);
    VL_CONCAT_WWQ(2688,2624,64, __Vtemp1311, __Vtemp1310, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp1312, __Vtemp1311, vlSelf->top__DOT__de__DOT__beq);
    VL_CONCAT_WWQ(2784,2720,64, __Vtemp1313, __Vtemp1312, 
                  (- vlSelf->top__DOT__de__DOT__src2));
    VL_CONCAT_WWI(2816,2784,32, __Vtemp1314, __Vtemp1313, vlSelf->top__DOT__de__DOT__bge);
    VL_CONCAT_WWQ(2880,2816,64, __Vtemp1315, __Vtemp1314, 
                  (- vlSelf->top__DOT__de__DOT__src2));
    VL_CONCAT_WWI(2912,2880,32, __Vtemp1316, __Vtemp1315, vlSelf->top__DOT__de__DOT__bgeu);
    VL_CONCAT_WWQ(2976,2912,64, __Vtemp1317, __Vtemp1316, vlSelf->top__DOT__de__DOT__src2);
    VL_CONCAT_WWI(3008,2976,32, __Vtemp1318, __Vtemp1317, vlSelf->top__DOT__de__DOT__bltu);
    VL_CONCAT_WWQ(3072,3008,64, __Vtemp1319, __Vtemp1318, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp1320, __Vtemp1319, vlSelf->top__DOT__de__DOT__blt);
    VL_CONCAT_WWQ(3168,3104,64, __Vtemp1321, __Vtemp1320, 
                  (- vlSelf->top__DOT__de__DOT__src2));
    VL_CONCAT_WWI(3200,3168,32, __Vtemp1322, __Vtemp1321, vlSelf->top__DOT__de__DOT__bne);
    VL_CONCAT_WWQ(3264,3200,64, __Vtemp1323, __Vtemp1322, 
                  (- vlSelf->top__DOT__de__DOT__src2));
    VL_CONCAT_WWI(3296,3264,32, __Vtemp1324, __Vtemp1323, vlSelf->top__DOT__de__DOT__addiw);
    VL_CONCAT_WWQ(3360,3296,64, __Vtemp1325, __Vtemp1324, vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    VL_CONCAT_WWI(3392,3360,32, __Vtemp1326, __Vtemp1325, vlSelf->top__DOT__de__DOT__slliw);
    VL_CONCAT_WWQ(3456,3392,64, __Vtemp1327, __Vtemp1326, (QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->inst 
                                                                              >> 0x14U)))));
    VL_CONCAT_WWI(3488,3456,32, __Vtemp1328, __Vtemp1327, vlSelf->top__DOT__de__DOT__srliw);
    VL_CONCAT_WWQ(3552,3488,64, __Vtemp1329, __Vtemp1328, (QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->inst 
                                                                              >> 0x14U)))));
    VL_CONCAT_WWI(3584,3552,32, __Vtemp1330, __Vtemp1329, vlSelf->top__DOT__de__DOT__sraiw);
    VL_CONCAT_WWQ(3648,3584,64, __Vtemp1331, __Vtemp1330, (QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->inst 
                                                                              >> 0x14U)))));
    VL_CONCAT_WWI(3680,3648,32, __Vtemp1332, __Vtemp1331, vlSelf->top__DOT__de__DOT__srai);
    VL_CONCAT_WWQ(3744,3680,64, __Vtemp1333, __Vtemp1332, (QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->inst 
                                                                              >> 0x14U)))));
    VL_CONCAT_WWI(3776,3744,32, __Vtemp1334, __Vtemp1333, vlSelf->top__DOT__de__DOT__slli);
    VL_CONCAT_WWQ(3840,3776,64, __Vtemp1335, __Vtemp1334, (QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->inst 
                                                                              >> 0x14U)))));
    VL_CONCAT_WWI(3872,3840,32, __Vtemp1336, __Vtemp1335, vlSelf->top__DOT__de__DOT__srli);
    VL_CONCAT_WWQ(3936,3872,64, __Vtemp1337, __Vtemp1336, (QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->inst 
                                                                              >> 0x14U)))));
    VL_ASSIGN_W(3936,vlSelf->top__DOT__de__DOT____Vcellinp__m5____pinNumber4, __Vtemp1337);
    if ((1U & (vlSelf->top__DOT__de__DOT__srawd ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2148]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (1U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__srawd ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2149]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (2U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__srawd ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2150]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (4U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__srawd ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2151]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (8U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__srawd 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2152]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x10U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__srawd 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2153]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x20U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__srawd 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2154]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x40U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__srawd 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2155]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x80U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__srawd 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2156]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x100U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__srawd 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2157]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x200U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__srawd 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2158]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x400U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__srawd 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2159]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x800U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__srawd 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2160]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__srawd 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2161]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__srawd 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2162]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__srawd 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2163]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__srawd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2164]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__srawd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2165]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__srawd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2166]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__srawd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2167]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__srawd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2168]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__srawd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2169]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__srawd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2170]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__srawd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2171]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__srawd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2172]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__srawd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2173]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__srawd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2174]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__srawd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2175]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__srawd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2176]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__srawd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2177]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__srawd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2178]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if (((vlSelf->top__DOT__de__DOT__srawd ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2179]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__srawd));
    }
}
