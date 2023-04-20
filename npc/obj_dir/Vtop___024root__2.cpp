// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___settle__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__7\n"); );
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__wdata)))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffffeULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | (IData)((IData)(
                                                                (1U 
                                                                 & (IData)(vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffffdULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 1U))))) 
                                                 << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffffbULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 2U))))) 
                                                 << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffff7ULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 3U))))) 
                                                 << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffffefULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 4U))))) 
                                                 << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffffdfULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 5U))))) 
                                                 << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffffbfULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 6U))))) 
                                                 << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffff7fULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 7U))))) 
                                                 << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffeffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 8U))))) 
                                                 << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffdffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 9U))))) 
                                                 << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffffbffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0xaU))))) 
                                                 << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffff7ffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0xbU))))) 
                                                 << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffefffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0xcU))))) 
                                                 << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffdfffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0xdU))))) 
                                                 << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffffbfffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0xeU))))) 
                                                 << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffff7fffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0xfU))))) 
                                                 << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffeffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x10U))))) 
                                                 << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffdffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x11U))))) 
                                                 << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffffbffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x12U))))) 
                                                 << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffff7ffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x13U))))) 
                                                 << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffefffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x14U))))) 
                                                 << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffdfffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x15U))))) 
                                                 << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffffbfffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x16U))))) 
                                                 << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffff7fffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x17U))))) 
                                                 << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffeffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x18U))))) 
                                                 << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffdffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x19U))))) 
                                                 << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffffbffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x1aU))))) 
                                                 << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffff7ffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x1bU))))) 
                                                 << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffefffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x1cU))))) 
                                                 << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffdfffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x1dU))))) 
                                                 << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffffbfffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x1eU))))) 
                                                 << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffff7fffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x1fU))))) 
                                                 << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffeffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x20U))))) 
                                                 << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffdffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x21U))))) 
                                                 << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffffbffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x22U))))) 
                                                 << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffff7ffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x23U))))) 
                                                 << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffefffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x24U))))) 
                                                 << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffdfffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x25U))))) 
                                                 << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffffbfffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x26U))))) 
                                                 << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffff7fffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x27U))))) 
                                                 << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffeffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x28U))))) 
                                                 << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffdffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x29U))))) 
                                                 << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffffbffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x2aU))))) 
                                                 << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffff7ffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x2bU))))) 
                                                 << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffefffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x2cU))))) 
                                                 << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffdfffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x2dU))))) 
                                                 << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffffbfffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x2eU))))) 
                                                 << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffff7fffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x2fU))))) 
                                                 << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffeffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x30U))))) 
                                                 << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffdffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x31U))))) 
                                                 << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfffbffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x32U))))) 
                                                 << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfff7ffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x33U))))) 
                                                 << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffefffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x34U))))) 
                                                 << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffdfffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x35U))))) 
                                                 << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xffbfffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x36U))))) 
                                                 << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xff7fffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x37U))))) 
                                                 << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfeffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x38U))))) 
                                                 << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfdffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x39U))))) 
                                                 << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xfbffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x3aU))))) 
                                                 << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xf7ffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x3bU))))) 
                                                 << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xefffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x3cU))))) 
                                                 << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xdfffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x3dU))))) 
                                                 << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0xbfffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x3eU))))) 
                                                 << 0x3eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__wdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->top__DOT____Vtogcov__wdata = ((0x7fffffffffffffffULL 
                                               & vlSelf->top__DOT____Vtogcov__wdata) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU));
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__8\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst) ^ (IData)(vlSelf->top__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->top__DOT____Vtogcov__rst = vlSelf->rst;
    }
}

void Vtop___024root____Vdpiimwrap_top__DOT__mem1__DOT__vpmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask, QData/*63:0*/ use_wen);
void Vtop___024root____Vdpiimwrap_top__DOT__i0__DOT__vpmem_read_TOP(QData/*63:0*/ mraddr, QData/*63:0*/ &mrdata);

VL_INLINE_OPT void Vtop___024root___sequent__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__9\n"); );
    // Variables
    CData/*2:0*/ __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state;
    CData/*2:0*/ __Vdly__top__DOT__i0__DOT__icache0__DOT__state;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__dataarray__v0;
    CData/*2:0*/ __Vdlyvdim1__top__DOT__i0__DOT__icache0__DOT__dataarray__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__dataarray__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__tagarray__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__i0__DOT__icache0__DOT__tagarray__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__tagarray__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__tagarray__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__i0__DOT__icache0__DOT__tagarray__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__tagarray__v2;
    CData/*2:0*/ __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state;
    CData/*7:0*/ __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen;
    CData/*0:0*/ __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__rf__v32;
    CData/*0:0*/ __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v32;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__csr__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v4;
    CData/*2:0*/ __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__cache_state;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v0;
    CData/*2:0*/ __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__read_state;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v0;
    CData/*2:0*/ __Vdlyvdim1__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v1;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v3;
    CData/*2:0*/ __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__write_state;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v385;
    CData/*2:0*/ __Vdlyvdim1__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v385;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v385;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v67;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v67;
    CData/*2:0*/ __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state;
    CData/*7:0*/ __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen;
    CData/*2:0*/ __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state;
    IData/*19:0*/ __Vdlyvval__top__DOT__i0__DOT__icache0__DOT__tagarray__v1;
    IData/*31:0*/ __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr;
    IData/*19:0*/ __Vdlyvval__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v2;
    IData/*31:0*/ __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr;
    IData/*31:0*/ __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr;
    IData/*31:0*/ __Vilp;
    QData/*63:0*/ __Vtask_top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__vpmem_read__0__mrdata;
    QData/*63:0*/ __Vtask_top__DOT__mem1__DOT__vpmem_read__3__mrdata;
    QData/*63:0*/ __Vtask_top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__vpmem_read__5__mrdata;
    QData/*63:0*/ __Vdlyvval__top__DOT__i0__DOT__icache0__DOT__dataarray__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__rf__v32;
    QData/*63:0*/ __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v3;
    QData/*63:0*/ __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v5;
    QData/*63:0*/ __Vdlyvval__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v385;
    // Body
    __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state 
        = vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state;
    __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state 
        = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state;
    __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state 
        = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state;
    __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen 
        = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen;
    __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen 
        = vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen;
    __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__write_state 
        = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state;
    __Vdly__top__DOT__i0__DOT__icache0__DOT__state 
        = vlSelf->top__DOT__i0__DOT__icache0__DOT__state;
    __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__read_state 
        = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state;
    __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
        = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr;
    __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
        = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr;
    __Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v0 = 0U;
    __Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v385 = 0U;
    __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__cache_state 
        = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state;
    __Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v1 = 0U;
    __Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v3 = 0U;
    __Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v0 = 0U;
    __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
        = vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr;
    __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state 
        = vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state;
    __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v3 = 0U;
    __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v4 = 0U;
    __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v32 = 0U;
    __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v0 = 0U;
    __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__dataarray__v0 = 0U;
    __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__tagarray__v0 = 0U;
    __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__tagarray__v2 = 0U;
    ++(vlSymsp->__Vcoverage[1732]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[1731]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state = 0U;
    } else if (((0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)) 
                & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid))) {
        ++(vlSymsp->__Vcoverage[1730]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state = 1U;
    } else if (((1U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)) 
                & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rready))) {
        ++(vlSymsp->__Vcoverage[1729]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state = 2U;
    } else if (((2U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)) 
                & (8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1728]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state = 3U;
    } else if ((3U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state))) {
        ++(vlSymsp->__Vcoverage[1726]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[1727]);
    }
    ++(vlSymsp->__Vcoverage[5653]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[5652]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state = 0U;
    } else if (((0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state)) 
                & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__arvalid))) {
        ++(vlSymsp->__Vcoverage[5651]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state = 1U;
    } else if (((1U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state)) 
                & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rready))) {
        ++(vlSymsp->__Vcoverage[5650]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state = 2U;
    } else if (((2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state)) 
                & (8U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5649]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state = 3U;
    } else if ((3U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state))) {
        ++(vlSymsp->__Vcoverage[5647]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[5648]);
    }
    ++(vlSymsp->__Vcoverage[5673]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[5672]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state = 0U;
    } else if (((0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)) 
                & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__awvalid))) {
        ++(vlSymsp->__Vcoverage[5671]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state = 1U;
    } else if (((1U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)) 
                & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wvalid))) {
        ++(vlSymsp->__Vcoverage[5670]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state = 2U;
    } else if ((((2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)) 
                 & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__bready)) 
                & (8U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5669]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state = 3U;
    } else if ((3U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state))) {
        ++(vlSymsp->__Vcoverage[5667]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[5668]);
    }
    ++(vlSymsp->__Vcoverage[4926]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[4925]);
        vlSelf->inst_finish = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[4923]);
        vlSelf->inst_finish = vlSelf->mem_finish;
    }
    ++(vlSymsp->__Vcoverage[5223]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[5222]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__write_state = 0U;
    } else if ((((0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state)) 
                 & (0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state))) 
                & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__awvalid))) {
        ++(vlSymsp->__Vcoverage[5221]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__write_state = 1U;
    } else if (((1U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state)) 
                & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wready))) {
        ++(vlSymsp->__Vcoverage[5220]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__write_state = 2U;
    } else if (((2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state)) 
                & (8U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5219]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__write_state = 3U;
    } else if (((3U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state)) 
                & (5U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)))) {
        ++(vlSymsp->__Vcoverage[5217]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__write_state = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[5218]);
    }
    ++(vlSymsp->__Vcoverage[1671]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[1670]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__state = 0U;
    } else if ((((0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)) 
                 & (0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state))) 
                & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid))) {
        ++(vlSymsp->__Vcoverage[1669]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__state = 1U;
    } else if (((1U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)) 
                & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid))) {
        ++(vlSymsp->__Vcoverage[1668]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__state = 2U;
    } else if (((2U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)) 
                & (8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1667]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__state = 3U;
    } else if (((3U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)) 
                & (IData)(vlSelf->mem_finish))) {
        ++(vlSymsp->__Vcoverage[1665]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__state = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[1666]);
    }
    ++(vlSymsp->__Vcoverage[5196]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[5195]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__read_state = 0U;
    } else if ((((0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state)) 
                 & (0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state))) 
                & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__arvalid))) {
        ++(vlSymsp->__Vcoverage[5194]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__read_state = 1U;
    } else if ((((1U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state)) 
                 & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rvalid)) 
                & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rready))) {
        ++(vlSymsp->__Vcoverage[5193]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__read_state = 2U;
    } else if (((2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state)) 
                & (8U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5192]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__read_state = 3U;
    } else if (((3U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state)) 
                & (5U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)))) {
        ++(vlSymsp->__Vcoverage[5190]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__read_state = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[5191]);
    }
    ++(vlSymsp->__Vcoverage[5656]);
    if (((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__arvalid) 
         & (0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state)))) {
        ++(vlSymsp->__Vcoverage[5654]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
            = (0xffffffc0U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr);
    } else {
        ++(vlSymsp->__Vcoverage[5655]);
    }
    ++(vlSymsp->__Vcoverage[5681]);
    if (((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__awvalid) 
         & (0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)))) {
        ++(vlSymsp->__Vcoverage[5679]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
            = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wraddr_block;
    } else {
        ++(vlSymsp->__Vcoverage[5680]);
    }
    if (((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wvalid) 
         & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wready))) {
        Vtop___024root____Vdpiimwrap_top__DOT__mem1__DOT__vpmem_write_TOP((QData)((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr)), vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata, 0xffU, 1ULL);
        ++(vlSymsp->__Vcoverage[5674]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
            = ((IData)(8U) + vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr);
    } else {
        ++(vlSymsp->__Vcoverage[5675]);
    }
    ++(vlSymsp->__Vcoverage[5678]);
    if ((8U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen))) {
        ++(vlSymsp->__Vcoverage[5676]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__bresp = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[5677]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__bresp = 2U;
    }
    ++(vlSymsp->__Vcoverage[5499]);
    if ((6U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state))) {
        ++(vlSymsp->__Vcoverage[5497]);
        __Vdlyvval__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v385 
            = ((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                [(0x3fU & (IData)((vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                   >> 6U)))][(7U & (IData)(
                                                           (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                                            >> 3U)))] 
                & (~ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wmask_align)) 
               | (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wdata_align 
                  & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wmask_align));
        __Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v385 = 1U;
        __Vdlyvdim1__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v385 
            = (7U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                             >> 3U)));
        __Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v385 
            = (0x3fU & (IData)((vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                >> 6U)));
        __Vdlyvlsb__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v67 = 0x15U;
        __Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v67 
            = (0x3fU & (IData)((vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                >> 6U)));
    } else {
        ++(vlSymsp->__Vcoverage[5498]);
    }
    ++(vlSymsp->__Vcoverage[5206]);
    if (((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rvalid) 
         & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rready))) {
        ++(vlSymsp->__Vcoverage[5197]);
        __Vdlyvval__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v0 
            = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi;
        __Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v0 = 1U;
        __Vdlyvdim1__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v0 
            = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_r_len;
        __Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v0 
            = (0x3fU & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                        >> 6U));
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_r_len 
            = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_r_len)));
    } else {
        ++(vlSymsp->__Vcoverage[5198]);
    }
    if ((8U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen))) {
        ++(vlSymsp->__Vcoverage[5199]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_r_len = 0U;
        __Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v1 = 1U;
        __Vdlyvlsb__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v1 = 0x14U;
        __Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v1 
            = (0x3fU & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                        >> 6U));
        __Vdlyvval__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v2 
            = (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
               >> 0xcU);
        __Vdlyvlsb__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v2 = 0U;
        __Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v2 
            = (0x3fU & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                        >> 6U));
    } else {
        ++(vlSymsp->__Vcoverage[5200]);
    }
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5201]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5202]);
        ++(vlSymsp->__Vcoverage[5203]);
        ++(vlSymsp->__Vcoverage[5204]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__unnamedblk1__DOT__i = 0x40U;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 6U;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__unnamedblk2__DOT__i = 0x40U;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_r_len = 0U;
        __Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v3 = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[5205]);
    }
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[5110]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__cache_state = 0U;
    } else if ((((((0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)) 
                   & (~ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rcache_en))) 
                  & (~ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wcache_en))) 
                 & (IData)(vlSelf->inst_update)) & (IData)(vlSelf->top__DOT__mem1__DOT__use_cache))) {
        ++(vlSymsp->__Vcoverage[5109]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__cache_state = 5U;
    } else if (((((((0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)) 
                    & ((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                        >> 0xcU) == (0xfffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__tagarray
                                     [(0x3fU & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                                                >> 6U))]))) 
                   & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__tagarray
                      [(0x3fU & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                                 >> 6U))] >> 0x14U)) 
                  & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rcache_en)) 
                 & (IData)(vlSelf->inst_update)) & (IData)(vlSelf->top__DOT__mem1__DOT__use_cache))) {
        ++(vlSymsp->__Vcoverage[5108]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__cache_state = 4U;
    } else if (((((((0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)) 
                    & ((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                        >> 0xcU) == (0xfffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__tagarray
                                     [(0x3fU & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                                                >> 6U))]))) 
                   & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__tagarray
                      [(0x3fU & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                                 >> 6U))] >> 0x14U)) 
                  & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wcache_en)) 
                 & (IData)(vlSelf->inst_update)) & (IData)(vlSelf->top__DOT__mem1__DOT__use_cache))) {
        ++(vlSymsp->__Vcoverage[5107]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__cache_state = 6U;
    } else if (((((0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)) 
                  & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rcache_en) 
                     | (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wcache_en))) 
                 & (IData)(vlSelf->inst_update)) & (IData)(vlSelf->top__DOT__mem1__DOT__use_cache))) {
        ++(vlSymsp->__Vcoverage[5106]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__cache_state = 1U;
    } else if (((1U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)) 
                & (~ (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__tagarray
                      [(0x3fU & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                                 >> 6U))] >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[5105]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__cache_state = 3U;
    } else if (((1U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)) 
                & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__tagarray
                   [(0x3fU & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                              >> 6U))] >> 0x15U))) {
        ++(vlSymsp->__Vcoverage[5104]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__cache_state = 2U;
        __Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v0 = 1U;
        __Vdlyvlsb__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v0 = 0x15U;
        __Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v0 
            = (0x3fU & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                        >> 6U));
    } else if (((2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)) 
                & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__mem_write_finish))) {
        ++(vlSymsp->__Vcoverage[5103]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__cache_state = 3U;
    } else if ((((3U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)) 
                 & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rcache_en)) 
                & (8U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5102]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__cache_state = 4U;
    } else if ((((3U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)) 
                 & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wcache_en)) 
                & (8U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5101]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__cache_state = 6U;
    } else if ((4U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state))) {
        ++(vlSymsp->__Vcoverage[5100]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__cache_state = 5U;
    } else if ((6U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state))) {
        ++(vlSymsp->__Vcoverage[5099]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__cache_state = 5U;
    } else if ((5U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state))) {
        ++(vlSymsp->__Vcoverage[5097]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__cache_state = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[5098]);
    }
    ++(vlSymsp->__Vcoverage[5111]);
    ++(vlSymsp->__Vcoverage[4804]);
    if (((~ (IData)(vlSelf->top__DOT__mem1__DOT__use_cache)) 
         & (IData)(vlSelf->inst_update))) {
        ++(vlSymsp->__Vcoverage[4802]);
        if ((1U & ((~ (IData)(vlSelf->top__DOT__data_ram_wen)) 
                   & (~ (IData)(vlSelf->top__DOT__data_ram_en))))) {
            ++(vlSymsp->__Vcoverage[4801]);
            vlSelf->top__DOT__mem1__DOT__device_finish = 1U;
        } else if (vlSelf->top__DOT__data_ram_en) {
            Vtop___024root____Vdpiimwrap_top__DOT__i0__DOT__vpmem_read_TOP(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result, __Vtask_top__DOT__mem1__DOT__vpmem_read__3__mrdata);
            ++(vlSymsp->__Vcoverage[4800]);
            vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                = __Vtask_top__DOT__mem1__DOT__vpmem_read__3__mrdata;
            vlSelf->top__DOT__mem1__DOT__device_finish = 1U;
        } else if (vlSelf->top__DOT__data_ram_wen) {
            Vtop___024root____Vdpiimwrap_top__DOT__mem1__DOT__vpmem_write_TOP(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result, vlSelf->top__DOT__src2, (IData)(vlSelf->top__DOT__wmask), 1ULL);
            ++(vlSymsp->__Vcoverage[4798]);
            vlSelf->top__DOT__mem1__DOT__device_finish = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[4799]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[4803]);
        vlSelf->top__DOT__mem1__DOT__device_finish = 0U;
    }
    ++(vlSymsp->__Vcoverage[1735]);
    if (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid) 
         & (0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)))) {
        ++(vlSymsp->__Vcoverage[1733]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
            = (0xffffffc0U & (IData)(vlSelf->cpupc));
    } else {
        ++(vlSymsp->__Vcoverage[1734]);
    }
    ++(vlSymsp->__Vcoverage[1623]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[1622]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state = 0U;
    } else if ((((0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state)) 
                 & ((0xfffffU & (IData)((vlSelf->cpupc 
                                         >> 0xcU))) 
                    == (0xfffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__tagarray
                        [(0x3fU & (IData)((vlSelf->cpupc 
                                           >> 6U)))]))) 
                & (vlSelf->top__DOT__i0__DOT__icache0__DOT__tagarray
                   [(0x3fU & (IData)((vlSelf->cpupc 
                                      >> 6U)))] >> 0x14U))) {
        ++(vlSymsp->__Vcoverage[1621]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state = 3U;
    } else if ((0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state))) {
        ++(vlSymsp->__Vcoverage[1620]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state = 1U;
    } else if ((1U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state))) {
        ++(vlSymsp->__Vcoverage[1619]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state = 2U;
    } else if (((2U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state)) 
                & (8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1618]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state = 3U;
    } else if (((3U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state)) 
                & (IData)(vlSelf->mem_finish))) {
        ++(vlSymsp->__Vcoverage[1616]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[1617]);
    }
    ++(vlSymsp->__Vcoverage[3110]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3100]);
        ++(vlSymsp->__Vcoverage[3101]);
        ++(vlSymsp->__Vcoverage[3101]);
        ++(vlSymsp->__Vcoverage[3102]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__i = 3U;
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v0 = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[3103]);
    }
    if (vlSelf->top__DOT__rf_wen) {
        ++(vlSymsp->__Vcoverage[3104]);
        __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__rf__v32 
            = vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out;
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v32 = 1U;
        __Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__rf__v32 
            = (0x1fU & (vlSelf->inst >> 7U));
    } else {
        ++(vlSymsp->__Vcoverage[3105]);
    }
    if (vlSelf->top__DOT__c_wen) {
        ++(vlSymsp->__Vcoverage[3106]);
        __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v3 
            = vlSymsp->TOP__top__DOT__exe_0__DOT__mux3.out;
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v3 = 1U;
        __Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__csr__v3 
            = vlSelf->top__DOT__c_raddr;
    } else {
        ++(vlSymsp->__Vcoverage[3107]);
    }
    if (vlSelf->top__DOT__c_wen1_2) {
        ++(vlSymsp->__Vcoverage[3108]);
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v4 = 1U;
        __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v5 
            = vlSelf->cpupc;
    } else {
        ++(vlSymsp->__Vcoverage[3109]);
    }
    ++(vlSymsp->__Vcoverage[1680]);
    if (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid) 
         & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rready))) {
        ++(vlSymsp->__Vcoverage[1673]);
        __Vdlyvval__top__DOT__i0__DOT__icache0__DOT__dataarray__v0 
            = vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi;
        __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__dataarray__v0 = 1U;
        __Vdlyvdim1__top__DOT__i0__DOT__icache0__DOT__dataarray__v0 
            = vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len;
        __Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__dataarray__v0 
            = (0x3fU & (IData)((vlSelf->cpupc >> 6U)));
        vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len 
            = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len)));
    } else {
        ++(vlSymsp->__Vcoverage[1674]);
    }
    if ((8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len = 0U;
        __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__tagarray__v0 = 1U;
        __Vdlyvlsb__top__DOT__i0__DOT__icache0__DOT__tagarray__v0 = 0x14U;
        __Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__tagarray__v0 
            = (0x3fU & (IData)((vlSelf->cpupc >> 6U)));
        __Vdlyvval__top__DOT__i0__DOT__icache0__DOT__tagarray__v1 
            = (0xfffffU & (IData)((vlSelf->cpupc >> 0xcU)));
        __Vdlyvlsb__top__DOT__i0__DOT__icache0__DOT__tagarray__v1 = 0U;
        __Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__tagarray__v1 
            = (0x3fU & (IData)((vlSelf->cpupc >> 6U)));
    } else {
        ++(vlSymsp->__Vcoverage[1676]);
    }
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1677]);
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__unnamedblk1__DOT__i = 0x40U;
        vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len = 0U;
        __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__tagarray__v2 = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[1679]);
    }
    vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state 
        = __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__write_state;
    vlSelf->top__DOT__i0__DOT__icache0__DOT__state 
        = __Vdly__top__DOT__i0__DOT__icache0__DOT__state;
    vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state 
        = __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__read_state;
    vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state 
        = __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state;
    vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
        = __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr;
    if (__Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v0) {
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__tagarray[__Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v0] 
            = ((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v0))) 
               & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__tagarray
               [__Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v0]);
    }
    if (__Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v1) {
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__tagarray[__Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v1] 
            = (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__tagarray
               [__Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v1] 
               | (0x3fffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v1))));
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__tagarray[__Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v2] 
            = (((~ ((IData)(0xfffffU) << (IData)(__Vdlyvlsb__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v2))) 
                & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__tagarray
                [__Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v2]) 
               | (0x3fffffU & (__Vdlyvval__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v2 
                               << (IData)(__Vdlyvlsb__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v2))));
    }
    if (__Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v3) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__tagarray[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v385) {
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__tagarray[__Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v67] 
            = (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__tagarray
               [__Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v67] 
               | (0x3fffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v67))));
    }
    vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state 
        = __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__cache_state;
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device)))) {
        ++(vlSymsp->__Vcoverage[4349]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4350]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4351]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4352]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4353]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4354]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4355]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4356]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4357]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4358]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4359]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4360]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4361]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4362]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4363]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4364]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4365]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4366]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4367]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4368]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4369]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4370]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4371]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4372]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4373]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4374]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4375]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4376]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4377]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4378]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4379]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4380]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4381]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4382]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4383]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4384]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4385]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4386]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4387]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4388]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4389]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4390]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4391]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4392]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4393]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4394]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4395]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4396]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4397]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4398]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4399]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4400]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4401]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4402]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4403]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4404]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4405]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4406]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4407]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4408]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4409]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4410]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4411]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4412]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_ld_device) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state 
        = __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state;
    if (__Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v0) {
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[1U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[2U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[0U] = 0xa00001800ULL;
    }
    if (__Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v3) {
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[__Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__csr__v3] 
            = __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v3;
    }
    if (__Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v4) {
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[3U] = 0xbULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[2U] 
            = __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v5;
    }
    if (__Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v0) {
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[1U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[2U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[3U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[4U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[5U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[6U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[7U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[8U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[9U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0xaU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0xbU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0xcU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0xdU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0xeU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0xfU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x10U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x11U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x12U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x13U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x14U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x15U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x16U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x17U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x18U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x19U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x1aU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x1bU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x1cU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x1dU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x1eU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v32) {
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[__Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__rf__v32] 
            = __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__rf__v32;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0U] = 0ULL;
    }
    if (__Vdlyvset__top__DOT__i0__DOT__icache0__DOT__tagarray__v0) {
        vlSelf->top__DOT__i0__DOT__icache0__DOT__tagarray[__Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__tagarray__v0] 
            = (vlSelf->top__DOT__i0__DOT__icache0__DOT__tagarray
               [__Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__tagarray__v0] 
               | (0x1fffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__i0__DOT__icache0__DOT__tagarray__v0))));
        vlSelf->top__DOT__i0__DOT__icache0__DOT__tagarray[__Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__tagarray__v1] 
            = (((~ ((IData)(0xfffffU) << (IData)(__Vdlyvlsb__top__DOT__i0__DOT__icache0__DOT__tagarray__v1))) 
                & vlSelf->top__DOT__i0__DOT__icache0__DOT__tagarray
                [__Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__tagarray__v1]) 
               | (0x1fffffU & (__Vdlyvval__top__DOT__i0__DOT__icache0__DOT__tagarray__v1 
                               << (IData)(__Vdlyvlsb__top__DOT__i0__DOT__icache0__DOT__tagarray__v1))));
    }
    if (__Vdlyvset__top__DOT__i0__DOT__icache0__DOT__tagarray__v2) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->top__DOT__i0__DOT__icache0__DOT__tagarray[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__top__DOT__i0__DOT__icache0__DOT__dataarray__v0) {
        vlSelf->top__DOT__i0__DOT__icache0__DOT__dataarray[__Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__dataarray__v0][__Vdlyvdim1__top__DOT__i0__DOT__icache0__DOT__dataarray__v0] 
            = __Vdlyvval__top__DOT__i0__DOT__icache0__DOT__dataarray__v0;
    }
    if (((IData)(vlSelf->inst_finish) ^ (IData)(vlSelf->top__DOT____Vtogcov__inst_finish))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->top__DOT____Vtogcov__inst_finish = vlSelf->inst_finish;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__write_state)))) {
        ++(vlSymsp->__Vcoverage[5207]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__write_state 
            = ((6U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__write_state)) 
               | (1U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__write_state)))) {
        ++(vlSymsp->__Vcoverage[5208]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__write_state 
            = ((5U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__write_state)) 
               | (2U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__write_state)))) {
        ++(vlSymsp->__Vcoverage[5209]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__write_state 
            = ((3U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__write_state)) 
               | (4U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state)));
    }
    vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__bready 
        = ((1U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state)) 
           & (2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state)));
    if ((1U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state 
            = ((6U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state 
            = ((5U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state 
            = ((3U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state)) 
               | (4U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)));
    }
    vlSelf->top__DOT__i0__DOT__icache0__DOT__rready 
        = ((1U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)) 
           | (2U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)));
    if (((3U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state)) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__mem_read_finish))) {
        ++(vlSymsp->__Vcoverage[5095]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__mem_read_finish 
            = (3U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__read_state)))) {
        ++(vlSymsp->__Vcoverage[5187]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__read_state 
            = ((6U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__read_state)) 
               | (1U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__read_state)))) {
        ++(vlSymsp->__Vcoverage[5188]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__read_state 
            = ((5U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__read_state)) 
               | (2U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__read_state)))) {
        ++(vlSymsp->__Vcoverage[5189]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__read_state 
            = ((3U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__read_state)) 
               | (4U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state)));
    }
    vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rready 
        = ((1U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state)) 
           | (2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state)));
    if (((0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__awready))) {
        ++(vlSymsp->__Vcoverage[5210]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__awready 
            = (0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state));
    }
    if (((2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__bvalid))) {
        ++(vlSymsp->__Vcoverage[5216]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__bvalid 
            = (2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state)))) {
        ++(vlSymsp->__Vcoverage[5664]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state 
            = ((6U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state)) 
               | (1U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state)))) {
        ++(vlSymsp->__Vcoverage[5665]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state 
            = ((5U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state)) 
               | (2U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state)))) {
        ++(vlSymsp->__Vcoverage[5666]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state 
            = ((3U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state)) 
               | (4U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__bresp) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__bresp)))) {
        ++(vlSymsp->__Vcoverage[5213]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__bresp 
            = ((2U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__bresp)) 
               | (1U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__bresp)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__bresp) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__bresp)))) {
        ++(vlSymsp->__Vcoverage[5214]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__bresp 
            = ((1U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__bresp)) 
               | (2U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__bresp)));
    }
    if ((1U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
               ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5612]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (1U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((2U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
               ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5613]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (2U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((4U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
               ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5614]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (4U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((8U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
               ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5615]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (8U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                  ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5616]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffffffefU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x10U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                  ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5617]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x20U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                  ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5618]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x40U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                  ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5619]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x80U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                   ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5620]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x100U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                   ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5621]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x200U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                   ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5622]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x400U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                   ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5623]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x800U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                    ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5624]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffffefffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x1000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                    ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5625]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x2000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                    ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5626]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x4000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                    ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5627]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x8000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                     ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5628]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x10000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                     ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5629]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x20000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                     ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5630]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x40000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                     ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5631]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x80000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                      ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5632]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffefffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x100000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                      ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5633]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x200000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                      ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5634]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x400000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                      ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5635]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x800000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                       ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5636]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x1000000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                       ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5637]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x2000000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                       ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5638]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x4000000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                       ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5639]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x8000000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                        ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5640]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xefffffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x10000000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                        ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5641]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x20000000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                        ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5642]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x40000000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if (((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
          ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5643]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x80000000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    ++(vlSymsp->__Vcoverage[5304]);
    if (((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wvalid) 
         & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wready))) {
        ++(vlSymsp->__Vcoverage[5298]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen)));
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
            = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
            [(0x3fU & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                       >> 6U))][vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_w_len];
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_w_len 
            = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_w_len)));
    } else {
        ++(vlSymsp->__Vcoverage[5299]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
            = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
            [(0x3fU & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                       >> 6U))][0U];
    }
    if (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wlast) {
        ++(vlSymsp->__Vcoverage[5300]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_w_len = 0U;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[5301]);
    }
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[5302]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_w_len = 0U;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen = 0U;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_r_len = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[5303]);
    }
    if (((IData)(vlSelf->rst) | (8U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5657]);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[5658]);
    }
    ++(vlSymsp->__Vcoverage[5663]);
    if ((2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state))) {
        Vtop___024root____Vdpiimwrap_top__DOT__i0__DOT__vpmem_read_TOP((QData)((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr)), __Vtask_top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__vpmem_read__5__mrdata);
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
        ++(vlSymsp->__Vcoverage[5659]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
            = __Vtask_top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__vpmem_read__5__mrdata;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rresp = 0U;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rvalid = 1U;
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
            = ((IData)(8U) + vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr);
    } else {
        ++(vlSymsp->__Vcoverage[5660]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rvalid = 0U;
    }
    if (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rlast) {
        ++(vlSymsp->__Vcoverage[5661]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rvalid = 0U;
        __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[5662]);
    }
    if (((5U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT____Vtogcov__cache_finish))) {
        ++(vlSymsp->__Vcoverage[4219]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__cache_finish 
            = (5U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state));
    }
    if (((2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__mem_write_begin))) {
        ++(vlSymsp->__Vcoverage[5093]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__mem_write_begin 
            = (2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state));
    }
    if (((3U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__mem_read_begin))) {
        ++(vlSymsp->__Vcoverage[5096]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__mem_read_begin 
            = (3U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__cache_state)))) {
        ++(vlSymsp->__Vcoverage[5088]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__cache_state 
            = ((6U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__cache_state)) 
               | (1U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__cache_state)))) {
        ++(vlSymsp->__Vcoverage[5089]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__cache_state 
            = ((5U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__cache_state)) 
               | (2U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__cache_state)))) {
        ++(vlSymsp->__Vcoverage[5090]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__cache_state 
            = ((3U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__cache_state)) 
               | (4U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)));
    }
    vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__arvalid 
        = ((0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state)) 
           & (3U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)));
    vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__awvalid 
        = ((0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state)) 
           & (2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)));
    if (((IData)(vlSelf->top__DOT__mem1__DOT__device_finish) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT____Vtogcov__device_finish))) {
        ++(vlSymsp->__Vcoverage[4797]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__device_finish 
            = vlSelf->top__DOT__mem1__DOT__device_finish;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__cache_state)))) {
        ++(vlSymsp->__Vcoverage[1613]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__cache_state 
            = ((6U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__cache_state)) 
               | (1U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__cache_state)))) {
        ++(vlSymsp->__Vcoverage[1614]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__cache_state 
            = ((5U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__cache_state)) 
               | (2U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__cache_state)))) {
        ++(vlSymsp->__Vcoverage[1615]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__cache_state 
            = ((3U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__cache_state)) 
               | (4U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state)));
    }
    vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid 
        = ((0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)) 
           & (2U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state)));
    vlSelf->inst_update = (3U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state));
    if ((1U & ((IData)(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                       [0U]) ^ (IData)(vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                       [0U])))) {
        ++(vlSymsp->__Vcoverage[2844]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | (IData)((IData)((1U & (IData)(
                                                      vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                      [0U])))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 1U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [0U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2845]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 1U))))) 
                         << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 2U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [0U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2846]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 2U))))) 
                         << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 3U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [0U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2847]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 3U))))) 
                         << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 4U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [0U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2848]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 4U))))) 
                         << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 5U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [0U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2849]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 5U))))) 
                         << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 6U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [0U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2850]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 6U))))) 
                         << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 7U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [0U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2851]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 7U))))) 
                         << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 8U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [0U] 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2852]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 8U))))) 
                         << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 9U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [0U] 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2853]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 9U))))) 
                         << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [0U] 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2854]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0xaU))))) 
                         << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [0U] 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2855]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0xbU))))) 
                         << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [0U] 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2856]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0xcU))))) 
                         << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [0U] 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2857]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0xdU))))) 
                         << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [0U] 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2858]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0xeU))))) 
                         << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [0U] 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2859]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0xfU))))) 
                         << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2860]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x10U))))) 
                         << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2861]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x11U))))) 
                         << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2862]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x12U))))) 
                         << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2863]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x13U))))) 
                         << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2864]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x14U))))) 
                         << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2865]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x15U))))) 
                         << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2866]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x16U))))) 
                         << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2867]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x17U))))) 
                         << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2868]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x18U))))) 
                         << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2869]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x19U))))) 
                         << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2870]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x1aU))))) 
                         << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2871]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x1bU))))) 
                         << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2872]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x1cU))))) 
                         << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2873]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x1dU))))) 
                         << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2874]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x1eU))))) 
                         << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2875]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x1fU))))) 
                         << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2876]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x20U))))) 
                         << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2877]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x21U))))) 
                         << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x22U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2878]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x22U))))) 
                         << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x23U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2879]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x23U))))) 
                         << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x24U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2880]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x24U))))) 
                         << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x25U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2881]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x25U))))) 
                         << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x26U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2882]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x26U))))) 
                         << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x27U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2883]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x27U))))) 
                         << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x28U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2884]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x28U))))) 
                         << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x29U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2885]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x29U))))) 
                         << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x2aU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2886]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x2aU))))) 
                         << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x2bU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2887]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x2bU))))) 
                         << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x2cU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2888]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x2cU))))) 
                         << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x2dU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2889]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x2dU))))) 
                         << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x2eU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2890]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x2eU))))) 
                         << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x2fU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2891]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x2fU))))) 
                         << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x30U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2892]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x30U))))) 
                         << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x31U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2893]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x31U))))) 
                         << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x32U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2894]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x32U))))) 
                         << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x33U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2895]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x33U))))) 
                         << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x34U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2896]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x34U))))) 
                         << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x35U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2897]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x35U))))) 
                         << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x36U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2898]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x36U))))) 
                         << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x37U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2899]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x37U))))) 
                         << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x38U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2900]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x38U))))) 
                         << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x39U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2901]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x39U))))) 
                         << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x3aU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2902]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x3aU))))) 
                         << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x3bU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2903]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x3bU))))) 
                         << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x3cU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2904]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x3cU))))) 
                         << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x3dU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2905]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x3dU))))) 
                         << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x3eU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2906]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x3eU))))) 
                         << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [0U] >> 0x3fU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [0U] 
                                                   >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2907]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[0U] 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [0U] 
                                                        >> 0x3fU))))) 
                         << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                       [1U]) ^ (IData)(vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                       [1U])))) {
        ++(vlSymsp->__Vcoverage[2908]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | (IData)((IData)((1U & (IData)(
                                                      vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                      [1U])))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 1U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [1U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2909]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 1U))))) 
                         << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 2U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [1U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2910]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 2U))))) 
                         << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 3U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [1U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2911]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 3U))))) 
                         << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 4U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [1U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2912]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 4U))))) 
                         << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 5U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [1U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2913]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 5U))))) 
                         << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 6U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [1U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2914]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 6U))))) 
                         << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 7U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [1U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2915]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 7U))))) 
                         << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 8U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [1U] 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2916]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 8U))))) 
                         << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 9U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [1U] 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2917]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 9U))))) 
                         << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [1U] 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2918]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0xaU))))) 
                         << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [1U] 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2919]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0xbU))))) 
                         << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [1U] 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2920]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0xcU))))) 
                         << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [1U] 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2921]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0xdU))))) 
                         << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [1U] 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2922]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0xeU))))) 
                         << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [1U] 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2923]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0xfU))))) 
                         << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2924]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x10U))))) 
                         << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2925]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x11U))))) 
                         << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2926]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x12U))))) 
                         << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2927]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x13U))))) 
                         << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2928]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x14U))))) 
                         << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2929]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x15U))))) 
                         << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2930]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x16U))))) 
                         << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2931]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x17U))))) 
                         << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2932]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x18U))))) 
                         << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2933]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x19U))))) 
                         << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2934]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x1aU))))) 
                         << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2935]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x1bU))))) 
                         << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2936]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x1cU))))) 
                         << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2937]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x1dU))))) 
                         << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2938]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x1eU))))) 
                         << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2939]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x1fU))))) 
                         << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2940]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x20U))))) 
                         << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2941]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x21U))))) 
                         << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x22U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2942]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x22U))))) 
                         << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x23U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2943]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x23U))))) 
                         << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x24U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2944]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x24U))))) 
                         << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x25U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2945]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x25U))))) 
                         << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x26U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2946]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x26U))))) 
                         << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x27U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2947]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x27U))))) 
                         << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x28U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2948]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x28U))))) 
                         << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x29U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2949]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x29U))))) 
                         << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x2aU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2950]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x2aU))))) 
                         << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x2bU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2951]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x2bU))))) 
                         << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x2cU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2952]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x2cU))))) 
                         << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x2dU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2953]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x2dU))))) 
                         << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x2eU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2954]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x2eU))))) 
                         << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x2fU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2955]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x2fU))))) 
                         << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x30U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2956]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x30U))))) 
                         << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x31U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2957]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x31U))))) 
                         << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x32U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2958]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x32U))))) 
                         << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x33U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2959]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x33U))))) 
                         << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x34U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2960]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x34U))))) 
                         << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x35U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2961]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x35U))))) 
                         << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x36U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2962]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x36U))))) 
                         << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x37U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2963]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x37U))))) 
                         << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x38U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2964]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x38U))))) 
                         << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x39U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2965]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x39U))))) 
                         << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x3aU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2966]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x3aU))))) 
                         << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x3bU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2967]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x3bU))))) 
                         << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x3cU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2968]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x3cU))))) 
                         << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x3dU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2969]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x3dU))))) 
                         << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x3eU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2970]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x3eU))))) 
                         << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [1U] >> 0x3fU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [1U] 
                                                   >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2971]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[1U] 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [1U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [1U] 
                                                        >> 0x3fU))))) 
                         << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                       [2U]) ^ (IData)(vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                       [2U])))) {
        ++(vlSymsp->__Vcoverage[2972]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | (IData)((IData)((1U & (IData)(
                                                      vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                      [2U])))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 1U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [2U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2973]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 1U))))) 
                         << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 2U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [2U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2974]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 2U))))) 
                         << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 3U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [2U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2975]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 3U))))) 
                         << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 4U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [2U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2976]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 4U))))) 
                         << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 5U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [2U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2977]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 5U))))) 
                         << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 6U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [2U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2978]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 6U))))) 
                         << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 7U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [2U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2979]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 7U))))) 
                         << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 8U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [2U] 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2980]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 8U))))) 
                         << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 9U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [2U] 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2981]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 9U))))) 
                         << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [2U] 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2982]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0xaU))))) 
                         << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [2U] 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2983]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0xbU))))) 
                         << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [2U] 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2984]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0xcU))))) 
                         << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [2U] 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2985]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0xdU))))) 
                         << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [2U] 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2986]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0xeU))))) 
                         << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [2U] 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2987]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0xfU))))) 
                         << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2988]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x10U))))) 
                         << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x11U))))) 
                         << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2990]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x12U))))) 
                         << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2991]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x13U))))) 
                         << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2992]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x14U))))) 
                         << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2993]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x15U))))) 
                         << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2994]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x16U))))) 
                         << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2995]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x17U))))) 
                         << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2996]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x18U))))) 
                         << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2997]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x19U))))) 
                         << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2998]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x1aU))))) 
                         << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2999]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x1bU))))) 
                         << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3000]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x1cU))))) 
                         << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3001]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x1dU))))) 
                         << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3002]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x1eU))))) 
                         << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3003]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x1fU))))) 
                         << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3004]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x20U))))) 
                         << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3005]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x21U))))) 
                         << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x22U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3006]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x22U))))) 
                         << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x23U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3007]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x23U))))) 
                         << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x24U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x24U))))) 
                         << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x25U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x25U))))) 
                         << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x26U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x26U))))) 
                         << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x27U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x27U))))) 
                         << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x28U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x28U))))) 
                         << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x29U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x29U))))) 
                         << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x2aU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x2aU))))) 
                         << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x2bU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x2bU))))) 
                         << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x2cU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x2cU))))) 
                         << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x2dU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x2dU))))) 
                         << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x2eU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x2eU))))) 
                         << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x2fU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x2fU))))) 
                         << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x30U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x30U))))) 
                         << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x31U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x31U))))) 
                         << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x32U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x32U))))) 
                         << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x33U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x33U))))) 
                         << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x34U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x34U))))) 
                         << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x35U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x35U))))) 
                         << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x36U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x36U))))) 
                         << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x37U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x37U))))) 
                         << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x38U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x38U))))) 
                         << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x39U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x39U))))) 
                         << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x3aU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x3aU))))) 
                         << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x3bU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x3bU))))) 
                         << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x3cU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x3cU))))) 
                         << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x3dU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x3dU))))) 
                         << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x3eU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x3eU))))) 
                         << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [2U] >> 0x3fU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [2U] 
                                                   >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[2U] 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [2U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [2U] 
                                                        >> 0x3fU))))) 
                         << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                       [3U]) ^ (IData)(vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                       [3U])))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | (IData)((IData)((1U & (IData)(
                                                      vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                      [3U])))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 1U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [3U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 1U))))) 
                         << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 2U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [3U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 2U))))) 
                         << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 3U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [3U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 3U))))) 
                         << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 4U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [3U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3040]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 4U))))) 
                         << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 5U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [3U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3041]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 5U))))) 
                         << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 6U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [3U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3042]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 6U))))) 
                         << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 7U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [3U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3043]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 7U))))) 
                         << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 8U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [3U] 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3044]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 8U))))) 
                         << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 9U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                [3U] 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3045]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 9U))))) 
                         << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [3U] 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3046]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0xaU))))) 
                         << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [3U] 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3047]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0xbU))))) 
                         << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [3U] 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3048]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0xcU))))) 
                         << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [3U] 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3049]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0xdU))))) 
                         << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [3U] 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3050]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0xeU))))) 
                         << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                  [3U] 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3051]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0xfU))))) 
                         << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3052]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x10U))))) 
                         << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3053]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x11U))))) 
                         << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3054]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x12U))))) 
                         << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3055]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x13U))))) 
                         << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3056]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x14U))))) 
                         << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x15U))))) 
                         << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3058]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x16U))))) 
                         << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3059]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x17U))))) 
                         << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3060]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x18U))))) 
                         << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3061]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x19U))))) 
                         << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3062]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x1aU))))) 
                         << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3063]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x1bU))))) 
                         << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3064]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x1cU))))) 
                         << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3065]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x1dU))))) 
                         << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3066]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x1eU))))) 
                         << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3067]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x1fU))))) 
                         << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3068]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x20U))))) 
                         << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3069]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x21U))))) 
                         << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x22U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3070]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x22U))))) 
                         << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x23U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3071]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x23U))))) 
                         << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x24U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3072]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x24U))))) 
                         << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x25U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3073]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x25U))))) 
                         << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x26U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3074]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x26U))))) 
                         << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x27U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3075]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x27U))))) 
                         << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x28U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3076]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x28U))))) 
                         << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x29U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3077]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x29U))))) 
                         << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x2aU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3078]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x2aU))))) 
                         << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x2bU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3079]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x2bU))))) 
                         << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x2cU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3080]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x2cU))))) 
                         << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x2dU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3081]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x2dU))))) 
                         << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x2eU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3082]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x2eU))))) 
                         << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x2fU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3083]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x2fU))))) 
                         << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x30U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3084]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x30U))))) 
                         << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x31U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3085]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x31U))))) 
                         << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x32U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3086]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x32U))))) 
                         << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x33U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3087]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x33U))))) 
                         << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x34U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3088]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x34U))))) 
                         << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x35U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3089]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x35U))))) 
                         << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x36U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3090]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x36U))))) 
                         << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x37U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3091]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x37U))))) 
                         << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x38U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3092]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x38U))))) 
                         << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x39U)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3093]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x39U))))) 
                         << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x3aU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3094]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x3aU))))) 
                         << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x3bU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3095]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x3bU))))) 
                         << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x3cU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3096]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x3cU))))) 
                         << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x3dU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3097]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x3dU))))) 
                         << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x3eU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3098]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x3eU))))) 
                         << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                        [3U] >> 0x3fU)) ^ (IData)((
                                                   vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                                                   [3U] 
                                                   >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3099]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr[3U] 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT__r0__DOT____Vtogcov__csr
                [3U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
                                                        [3U] 
                                                        >> 0x3fU))))) 
                         << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__d_len)))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__d_len 
            = ((6U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__d_len)) 
               | (1U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__d_len)))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__d_len 
            = ((5U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__d_len)) 
               | (2U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__d_len)))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__d_len 
            = ((3U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__d_len)) 
               | (4U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len)));
    }
    if (((IData)(vlSelf->rst) | (8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1736]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[1737]);
    }
    ++(vlSymsp->__Vcoverage[1742]);
    if ((2U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state))) {
        Vtop___024root____Vdpiimwrap_top__DOT__i0__DOT__vpmem_read_TOP((QData)((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr)), __Vtask_top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__vpmem_read__0__mrdata);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
        ++(vlSymsp->__Vcoverage[1738]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
            = __Vtask_top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__vpmem_read__0__mrdata;
        vlSelf->top__DOT__i0__DOT__icache0__DOT__rresp = 0U;
        vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid = 1U;
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
            = ((IData)(8U) + vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr);
    } else {
        ++(vlSymsp->__Vcoverage[1739]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid = 0U;
    }
    if (vlSelf->top__DOT__i0__DOT__icache0__DOT__rlast) {
        ++(vlSymsp->__Vcoverage[1740]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid = 0U;
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[1741]);
    }
    ++(vlSymsp->__Vcoverage[1548]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[1547]);
        vlSelf->cpupc = 0x80000000ULL;
    } else {
        ++(vlSymsp->__Vcoverage[1545]);
        vlSelf->cpupc = vlSelf->dnpc;
    }
    if (((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__bready) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__bready))) {
        ++(vlSymsp->__Vcoverage[5215]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__bready 
            = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__bready;
    }
    if (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rready) 
         ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rready))) {
        ++(vlSymsp->__Vcoverage[1625]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rready 
            = vlSelf->top__DOT__i0__DOT__icache0__DOT__rready;
    }
    if (((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rready) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rready))) {
        ++(vlSymsp->__Vcoverage[5176]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rready 
            = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rready;
    }
    vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wready 
        = ((1U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)) 
           | (2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)));
    vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wvalid 
        = (((2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state)) 
            | (1U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state))) 
           & (2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state)));
    if (__Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v0) {
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[__Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v0][__Vdlyvdim1__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v0] 
            = __Vdlyvval__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v0;
    }
    if (__Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__tagarray__v3) {
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[1U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[1U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[1U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[1U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[1U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[1U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[2U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[2U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[2U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[2U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[2U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[2U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[3U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[3U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[3U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[3U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[3U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[3U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[4U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[4U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[4U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[4U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[4U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[4U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[5U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[5U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[5U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[5U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[5U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[5U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[6U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[6U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[6U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[6U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[6U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[6U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[7U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[7U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[7U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[7U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[7U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[7U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[8U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[8U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[8U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[8U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[8U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[8U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[9U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[9U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[9U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[9U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[9U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[9U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xaU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xaU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xaU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xaU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xaU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xaU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xbU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xbU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xbU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xbU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xbU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xbU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xcU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xcU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xcU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xcU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xcU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xcU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xdU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xdU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xdU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xdU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xdU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xdU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xeU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xeU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xeU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xeU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xeU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xeU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xfU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xfU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xfU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xfU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xfU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0xfU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x10U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x10U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x10U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x10U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x10U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x10U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x11U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x11U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x11U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x11U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x11U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x11U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x12U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x12U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x12U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x12U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x12U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x12U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x13U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x13U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x13U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x13U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x13U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x13U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x14U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x14U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x14U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x14U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x14U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x14U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x15U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x15U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x15U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x15U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x15U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x15U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x16U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x16U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x16U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x16U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x16U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x16U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x17U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x17U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x17U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x17U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x17U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x17U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x18U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x18U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x18U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x18U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x18U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x18U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x19U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x19U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x19U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x19U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x19U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x19U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1aU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1aU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1aU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1aU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1aU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1aU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1bU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1bU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1bU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1bU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1bU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1bU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1cU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1cU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1cU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1cU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1cU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1cU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1dU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1dU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1dU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1dU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1dU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1dU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1eU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1eU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1eU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1eU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1eU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1eU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1fU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1fU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1fU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1fU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1fU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x1fU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x20U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x20U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x20U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x20U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x20U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x20U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x21U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x21U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x21U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x21U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x21U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x21U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x22U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x22U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x22U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x22U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x22U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x22U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x23U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x23U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x23U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x23U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x23U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x23U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x24U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x24U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x24U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x24U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x24U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x24U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x25U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x25U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x25U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x25U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x25U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x25U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x26U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x26U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x26U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x26U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x26U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x26U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x27U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x27U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x27U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x27U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x27U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x27U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x28U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x28U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x28U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x28U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x28U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x28U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x29U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x29U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x29U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x29U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x29U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x29U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2aU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2aU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2aU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2aU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2aU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2aU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2bU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2bU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2bU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2bU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2bU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2bU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2cU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2cU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2cU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2cU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2cU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2cU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2dU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2dU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2dU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2dU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2dU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2dU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2eU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2eU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2eU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2eU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2eU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2eU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2fU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2fU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2fU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2fU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2fU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x2fU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x30U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x30U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x30U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x30U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x30U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x30U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x31U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x31U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x31U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x31U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x31U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x31U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x32U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x32U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x32U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x32U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x32U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x32U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x33U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x33U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x33U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x33U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x33U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x33U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x34U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x34U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x34U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x34U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x34U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x34U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x35U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x35U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x35U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x35U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x35U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x35U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x36U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x36U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x36U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x36U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x36U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x36U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x37U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x37U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x37U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x37U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x37U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x37U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x38U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x38U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x38U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x38U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x38U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x38U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x39U][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x39U][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x39U][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x39U][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x39U][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x39U][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3aU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3aU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3aU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3aU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3aU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3aU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3bU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3bU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3bU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3bU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3bU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3bU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3cU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3cU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3cU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3cU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3cU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3cU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3dU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3dU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3dU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3dU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3dU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3dU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3eU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3eU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3eU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3eU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3eU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3eU][5U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3fU][0U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3fU][1U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3fU][2U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3fU][3U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3fU][4U] = 0ULL;
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[0x3fU][5U] = 0ULL;
    }
    if (__Vdlyvset__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v385) {
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray[__Vdlyvdim0__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v385][__Vdlyvdim1__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v385] 
            = __Vdlyvval__top__DOT__mem1__DOT__dcache_0__DOT__dataarray__v385;
    }
    vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state 
        = __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state;
    vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen 
        = __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen;
    vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
        = __Vdly__top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr;
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi)))) {
        ++(vlSymsp->__Vcoverage[5023]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5024]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5025]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5026]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5027]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5028]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5029]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5030]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5031]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5032]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5033]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5034]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5035]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5036]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5037]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5038]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5039]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5040]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5041]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5042]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5043]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5044]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5045]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5046]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5047]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5048]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5049]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5050]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5051]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5052]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5053]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5054]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5055]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5056]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5057]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5058]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5059]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5060]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5061]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5062]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5063]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5064]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5065]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5066]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5067]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5068]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5069]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5070]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5071]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5072]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5073]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5074]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5075]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5076]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5077]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5078]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5079]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5080]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5081]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5082]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5083]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5084]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5085]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5086]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__arvalid) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__arvalid))) {
        ++(vlSymsp->__Vcoverage[5178]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__arvalid 
            = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__arvalid;
    }
    if (((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__awvalid) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__awvalid))) {
        ++(vlSymsp->__Vcoverage[5224]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__awvalid 
            = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__awvalid;
    }
    if (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid) 
         ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__arvalid))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__arvalid 
            = vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid;
    }
    if (((IData)(vlSelf->inst_update) ^ (IData)(vlSelf->top__DOT____Vtogcov__inst_update))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->top__DOT____Vtogcov__inst_update = vlSelf->inst_update;
    }
    vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state 
        = __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state;
    vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen 
        = __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen;
    vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
        = __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr;
    if ((1U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi)))) {
        ++(vlSymsp->__Vcoverage[1549]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1550]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1551]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1552]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1553]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1554]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1555]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1556]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1557]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1558]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1559]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1560]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1561]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1562]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1563]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1564]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1565]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1566]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1567]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1568]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1569]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1570]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1571]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1572]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1573]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1574]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1575]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1576]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1577]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1578]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1579]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1580]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1581]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1583]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1584]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1585]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1586]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1587]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1588]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1589]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1590]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1591]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1592]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1593]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1594]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1596]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1597]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1598]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1599]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1600]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1601]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1602]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1603]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1604]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1605]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1606]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1607]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1608]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1609]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1610]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1611]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1612]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wready) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wready))) {
        ++(vlSymsp->__Vcoverage[5212]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wready 
            = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wready;
    }
    if (((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wvalid) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wvalid))) {
        ++(vlSymsp->__Vcoverage[5225]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wvalid 
            = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wvalid;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_w_len) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_w_len)))) {
        ++(vlSymsp->__Vcoverage[5182]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_w_len 
            = ((6U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_w_len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_w_len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_w_len) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_w_len)))) {
        ++(vlSymsp->__Vcoverage[5183]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_w_len 
            = ((5U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_w_len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_w_len)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_w_len) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_w_len)))) {
        ++(vlSymsp->__Vcoverage[5184]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_w_len 
            = ((3U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_w_len)) 
               | (4U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_w_len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_r_len) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_r_len)))) {
        ++(vlSymsp->__Vcoverage[5179]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_r_len 
            = ((6U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_r_len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_r_len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_r_len) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_r_len)))) {
        ++(vlSymsp->__Vcoverage[5180]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_r_len 
            = ((5U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_r_len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_r_len)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_r_len) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_r_len)))) {
        ++(vlSymsp->__Vcoverage[5181]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_r_len 
            = ((3U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__d_r_len)) 
               | (4U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_r_len)));
    }
    vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wlast 
        = (8U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen));
    if (((8U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen)) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wlast))) {
        ++(vlSymsp->__Vcoverage[5211]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wlast 
            = (8U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5290]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen)) 
               | (1U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5291]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen)) 
               | (2U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5292]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen)) 
               | (4U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5293]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen)) 
               | (8U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen) 
                  ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5294]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen) 
                  ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5295]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen) 
                  ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5296]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen) 
                  ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5297]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__c_awlen)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi)))) {
        ++(vlSymsp->__Vcoverage[5226]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5227]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5228]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5229]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5230]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5231]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5232]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5233]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5234]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5235]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5236]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5237]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5238]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5239]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5240]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5241]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5242]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5243]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5244]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5245]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5246]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5247]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5248]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5249]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5250]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5251]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5252]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5253]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5254]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5255]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5256]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5257]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5258]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5259]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5260]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5261]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5262]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5263]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5264]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5265]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5266]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5267]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5268]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5269]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5270]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5271]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5272]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5273]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5274]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5275]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5276]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5277]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5278]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5279]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5280]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5281]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5282]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5283]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5284]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5285]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5286]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5287]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5288]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5289]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                       [5U][4U]) ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata)))) {
        ++(vlSymsp->__Vcoverage[5500]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                               [5U]
                                               [4U])))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 1U)) ^ (IData)(
                                                   (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                    >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5501]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 2U)) ^ (IData)(
                                                   (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                    >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5502]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 3U)) ^ (IData)(
                                                   (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                    >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5503]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 4U)) ^ (IData)(
                                                   (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                    >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5504]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 5U)) ^ (IData)(
                                                   (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                    >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5505]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 6U)) ^ (IData)(
                                                   (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                    >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5506]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 7U)) ^ (IData)(
                                                   (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                    >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5507]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 8U)) ^ (IData)(
                                                   (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                    >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5508]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 9U)) ^ (IData)(
                                                   (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                    >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5509]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0xaU)) ^ (IData)(
                                                     (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                      >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5510]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0xbU)) ^ (IData)(
                                                     (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                      >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5511]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0xcU)) ^ (IData)(
                                                     (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                      >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5512]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0xdU)) ^ (IData)(
                                                     (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                      >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5513]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0xeU)) ^ (IData)(
                                                     (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                      >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5514]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0xfU)) ^ (IData)(
                                                     (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                      >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5515]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x10U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5516]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x11U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5517]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x12U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5518]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x13U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5519]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x14U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5520]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x15U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5521]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x16U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5522]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x17U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5523]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x18U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5524]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x19U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5525]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x1aU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5526]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x1bU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5527]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x1cU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5528]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x1dU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5529]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x1eU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5530]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x1fU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5531]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x20U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5532]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x21U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5533]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x22U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5534]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x23U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5535]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x24U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5536]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x25U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5537]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x26U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5538]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x27U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5539]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x28U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5540]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x29U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5541]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x2aU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5542]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x2bU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5543]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x2cU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5544]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x2dU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5545]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x2eU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5546]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x2fU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5547]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x30U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5548]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x31U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5549]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x32U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5550]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x33U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5551]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x34U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5552]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x35U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5553]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x36U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5554]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x37U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5555]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x38U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5556]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x39U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5557]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x3aU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5558]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x3bU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5559]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x3cU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5560]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x3dU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5561]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x3eU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5562]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                        [5U][4U] >> 0x3fU)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5563]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                                 [5U]
                                                 [4U] 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rvalid) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rvalid))) {
        ++(vlSymsp->__Vcoverage[5175]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rvalid 
            = vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rvalid;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rresp) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rresp)))) {
        ++(vlSymsp->__Vcoverage[5185]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rresp 
            = ((2U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rresp)) 
               | (1U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rresp)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rresp) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rresp)))) {
        ++(vlSymsp->__Vcoverage[5186]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rresp 
            = ((1U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rresp)) 
               | (2U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rresp)));
    }
    if (((0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state)) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__arready))) {
        ++(vlSymsp->__Vcoverage[5177]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__arready 
            = (0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[5644]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state 
            = ((6U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[5645]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state 
            = ((5U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[5646]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state 
            = ((3U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state)) 
               | (4U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state)));
    }
    if (((8U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rlast))) {
        ++(vlSymsp->__Vcoverage[5087]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT____Vtogcov__rlast 
            = (8U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen));
    }
    vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rlast 
        = (8U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen));
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5596]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)) 
               | (1U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5597]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)) 
               | (2U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5598]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)) 
               | (4U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5599]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)) 
               | (8U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen) 
                  ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5600]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen) 
                  ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5601]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen) 
                  ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5602]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen) 
                  ^ (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5603]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
    }
    if ((1U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
               ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5564]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (1U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((2U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
               ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5565]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (2U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((4U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
               ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5566]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (4U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((8U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
               ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5567]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (8U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                  ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5568]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffffffefU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x10U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                  ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5569]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x20U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                  ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5570]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x40U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                  ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5571]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x80U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                   ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5572]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x100U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                   ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5573]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x200U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                   ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5574]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x400U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                   ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5575]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x800U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                    ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5576]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffffefffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x1000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                    ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5577]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x2000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                    ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5578]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x4000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                    ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5579]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x8000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                     ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5580]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x10000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                     ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5581]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x20000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                     ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5582]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x40000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                     ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5583]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x80000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                      ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5584]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffefffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x100000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                      ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5585]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x200000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                      ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5586]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x400000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                      ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5587]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x800000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                       ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5588]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x1000000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                       ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5589]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x2000000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                       ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5590]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x4000000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                       ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5591]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x8000000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                        ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5592]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xefffffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x10000000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                        ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5593]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x20000000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                        ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5594]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x40000000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if (((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
          ^ vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5595]);
        vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x80000000U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid) 
         ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rvalid))) {
        ++(vlSymsp->__Vcoverage[1624]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rvalid 
            = vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rresp) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rresp)))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rresp 
            = ((2U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rresp)) 
               | (1U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rresp)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rresp) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rresp)))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rresp 
            = ((1U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rresp)) 
               | (2U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rresp)));
    }
    if (((0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)) 
         ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__arready))) {
        ++(vlSymsp->__Vcoverage[1626]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__arready 
            = (0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1723]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state 
            = ((6U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1724]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state 
            = ((5U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1725]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state 
            = ((3U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state)) 
               | (4U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)));
    }
    if (((8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)) 
         ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rlast))) {
        ++(vlSymsp->__Vcoverage[1627]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rlast 
            = (8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen));
    }
    vlSelf->top__DOT__i0__DOT__icache0__DOT__rlast 
        = (8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen));
    if ((1U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen 
            = ((0xfeU & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)) 
               | (1U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen 
            = ((0xfdU & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)) 
               | (2U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen 
            = ((0xfbU & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)) 
               | (4U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen 
            = ((0xf7U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)) 
               | (8U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen) 
                  ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1719]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen 
            = ((0xefU & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)) 
               | (0x10U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen) 
                  ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1720]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen 
            = ((0xdfU & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)) 
               | (0x20U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen) 
                  ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1721]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen 
            = ((0xbfU & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)) 
               | (0x40U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen) 
                  ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1722]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen 
            = ((0x7fU & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)) 
               | (0x80U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
    }
    if ((1U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
               ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffffffeU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (1U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((2U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
               ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffffffdU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (2U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((4U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
               ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffffffbU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (4U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((8U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
               ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffffff7U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (8U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x10U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                  ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffffffefU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x10U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x20U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                  ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffffffdfU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x20U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x40U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                  ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffffffbfU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x40U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x80U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                  ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffffff7fU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x80U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x100U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                   ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffffeffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x100U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x200U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                   ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffffdffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x200U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x400U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                   ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffffbffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x400U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x800U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                   ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffff7ffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x800U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x1000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                    ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffffefffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x1000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x2000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                    ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffffdfffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x2000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x4000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                    ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffffbfffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x4000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x8000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                    ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffff7fffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x8000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x10000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                     ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffeffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x10000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
}
