// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___settle__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__6\n"); );
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_result)))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffffffeULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | (IData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffffffdULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 1U))))) 
                                                      << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffffffbULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 2U))))) 
                                                      << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffffff7ULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 3U))))) 
                                                      << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffffffefULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 4U))))) 
                                                      << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffffffdfULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 5U))))) 
                                                      << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffffffbfULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 6U))))) 
                                                      << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffffff7fULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 7U))))) 
                                                      << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffffeffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 8U))))) 
                                                      << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffffdffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 9U))))) 
                                                      << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffffbffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0xaU))))) 
                                                      << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffff7ffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0xbU))))) 
                                                      << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffffefffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0xcU))))) 
                                                      << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffffdfffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0xdU))))) 
                                                      << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffffbfffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0xeU))))) 
                                                      << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffff7fffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0xfU))))) 
                                                      << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffeffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x10U))))) 
                                                      << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffdffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x11U))))) 
                                                      << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffbffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x12U))))) 
                                                      << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffff7ffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x13U))))) 
                                                      << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffefffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x14U))))) 
                                                      << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffdfffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x15U))))) 
                                                      << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffbfffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x16U))))) 
                                                      << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffff7fffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x17U))))) 
                                                      << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffeffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x18U))))) 
                                                      << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffdffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x19U))))) 
                                                      << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffbffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x1aU))))) 
                                                      << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffff7ffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x1bU))))) 
                                                      << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffefffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x1cU))))) 
                                                      << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffdfffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x1dU))))) 
                                                      << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffbfffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x1eU))))) 
                                                      << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffff7fffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x1fU))))) 
                                                      << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffeffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x20U))))) 
                                                      << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffdffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x21U))))) 
                                                      << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffbffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x22U))))) 
                                                      << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffff7ffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x23U))))) 
                                                      << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffefffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x24U))))) 
                                                      << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffdfffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x25U))))) 
                                                      << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffbfffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x26U))))) 
                                                      << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffff7fffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x27U))))) 
                                                      << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffeffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x28U))))) 
                                                      << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffdffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x29U))))) 
                                                      << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffbffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x2aU))))) 
                                                      << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffff7ffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x2bU))))) 
                                                      << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffefffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x2cU))))) 
                                                      << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffdfffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x2dU))))) 
                                                      << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffbfffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x2eU))))) 
                                                      << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffff7fffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x2fU))))) 
                                                      << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffeffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x30U))))) 
                                                      << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffdffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x31U))))) 
                                                      << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffbffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x32U))))) 
                                                      << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfff7ffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x33U))))) 
                                                      << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffefffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x34U))))) 
                                                      << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffdfffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x35U))))) 
                                                      << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffbfffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x36U))))) 
                                                      << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xff7fffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x37U))))) 
                                                      << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfeffffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x38U))))) 
                                                      << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfdffffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x39U))))) 
                                                      << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfbffffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x3aU))))) 
                                                      << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xf7ffffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x3bU))))) 
                                                      << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xefffffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x3cU))))) 
                                                      << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xdfffffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x3dU))))) 
                                                      << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xbfffffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x3eU))))) 
                                                      << 0x3eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0x7fffffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                                                                >> 0x3fU))))) 
                                                      << 0x3fU));
    }
    vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[0U] 
        = (IData)(vlSelf->top__DOT__c_rdata);
    vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[1U] 
        = (IData)((vlSelf->top__DOT__c_rdata >> 0x20U));
    vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[2U] 
        = (4U | ((IData)(vlSelf->top__DOT__ram_data) 
                 << 3U));
    vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[3U] 
        = (((IData)(vlSelf->top__DOT__ram_data) >> 0x1dU) 
           | ((IData)((vlSelf->top__DOT__ram_data >> 0x20U)) 
              << 3U));
    vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[4U] 
        = (0x10U | (((IData)(vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out) 
                     << 6U) | ((IData)((vlSelf->top__DOT__ram_data 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[5U] 
        = (((IData)(vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out) 
            >> 0x1aU) | ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                                  >> 0x20U)) << 6U));
    vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[6U] 
        = (0x40U | ((IData)((vlSymsp->TOP__top__DOT__exe_0__DOT__alu2__DOT__mux1.out 
                             >> 0x20U)) >> 0x1aU));
    vlSelf->dnpc = vlSymsp->TOP__top__DOT__i0__DOT__mux5.out;
    if ((1U & ((IData)(vlSelf->dnpc) ^ (IData)(vlSelf->top__DOT____Vtogcov__dnpc)))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffffffffffeULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | (IData)((IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->dnpc)))));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 1U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__dnpc 
                                                        >> 1U))))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffffffffffdULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 1U))))) 
                                                << 1U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 2U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__dnpc 
                                                        >> 2U))))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffffffffffbULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 2U))))) 
                                                << 2U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 3U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__dnpc 
                                                        >> 3U))))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffffffffff7ULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 3U))))) 
                                                << 3U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 4U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__dnpc 
                                                        >> 4U))))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffffffffffefULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 4U))))) 
                                                << 4U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 5U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__dnpc 
                                                        >> 5U))))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffffffffffdfULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 5U))))) 
                                                << 5U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 6U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__dnpc 
                                                        >> 6U))))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffffffffffbfULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 6U))))) 
                                                << 6U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 7U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__dnpc 
                                                        >> 7U))))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffffffffff7fULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 7U))))) 
                                                << 7U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 8U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__dnpc 
                                                        >> 8U))))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffffffffeffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 8U))))) 
                                                << 8U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 9U)) ^ (IData)(
                                                       (vlSelf->top__DOT____Vtogcov__dnpc 
                                                        >> 9U))))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffffffffdffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 9U))))) 
                                                << 9U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0xaU)) ^ (IData)(
                                                         (vlSelf->top__DOT____Vtogcov__dnpc 
                                                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffffffffbffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0xaU))))) 
                                                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0xbU)) ^ (IData)(
                                                         (vlSelf->top__DOT____Vtogcov__dnpc 
                                                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffffffff7ffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0xbU))))) 
                                                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0xcU)) ^ (IData)(
                                                         (vlSelf->top__DOT____Vtogcov__dnpc 
                                                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffffffffefffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0xcU))))) 
                                                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0xdU)) ^ (IData)(
                                                         (vlSelf->top__DOT____Vtogcov__dnpc 
                                                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffffffffdfffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0xdU))))) 
                                                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0xeU)) ^ (IData)(
                                                         (vlSelf->top__DOT____Vtogcov__dnpc 
                                                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffffffffbfffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0xeU))))) 
                                                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0xfU)) ^ (IData)(
                                                         (vlSelf->top__DOT____Vtogcov__dnpc 
                                                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffffffff7fffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0xfU))))) 
                                                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x10U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffffffeffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x10U))))) 
                                                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x11U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffffffdffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x11U))))) 
                                                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x12U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffffffbffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x12U))))) 
                                                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x13U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffffff7ffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x13U))))) 
                                                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x14U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffffffefffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x14U))))) 
                                                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x15U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffffffdfffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x15U))))) 
                                                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x16U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffffffbfffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x16U))))) 
                                                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x17U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffffff7fffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x17U))))) 
                                                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x18U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffffeffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x18U))))) 
                                                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x19U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffffdffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x19U))))) 
                                                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x1aU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffffbffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x1aU))))) 
                                                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x1bU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffff7ffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x1bU))))) 
                                                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x1cU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffffefffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x1cU))))) 
                                                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x1dU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffffdfffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x1dU))))) 
                                                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x1eU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffffbfffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x1eU))))) 
                                                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x1fU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffff7fffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x1fU))))) 
                                                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x20U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffeffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x20U))))) 
                                                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x21U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffdffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x21U))))) 
                                                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x22U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffffbffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x22U))))) 
                                                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x23U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffff7ffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x23U))))) 
                                                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x24U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffefffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x24U))))) 
                                                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x25U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffdfffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x25U))))) 
                                                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x26U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffffbfffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x26U))))) 
                                                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x27U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffff7fffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x27U))))) 
                                                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x28U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffeffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x28U))))) 
                                                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x29U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffdffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x29U))))) 
                                                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x2aU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffffbffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x2aU))))) 
                                                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x2bU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffff7ffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x2bU))))) 
                                                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x2cU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffefffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x2cU))))) 
                                                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x2dU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffdfffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x2dU))))) 
                                                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x2eU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffffbfffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x2eU))))) 
                                                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x2fU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffff7fffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x2fU))))) 
                                                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x30U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffeffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x30U))))) 
                                                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x31U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffdffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x31U))))) 
                                                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x32U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfffbffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x32U))))) 
                                                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x33U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfff7ffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x33U))))) 
                                                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x34U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffefffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x34U))))) 
                                                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x35U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffdfffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x35U))))) 
                                                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x36U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xffbfffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x36U))))) 
                                                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x37U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xff7fffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x37U))))) 
                                                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x38U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfeffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x38U))))) 
                                                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x39U)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfdffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x39U))))) 
                                                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x3aU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xfbffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x3aU))))) 
                                                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x3bU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xf7ffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x3bU))))) 
                                                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x3cU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xefffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x3cU))))) 
                                                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x3dU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xdfffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x3dU))))) 
                                                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x3eU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0xbfffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x3eU))))) 
                                                << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->dnpc >> 0x3fU)) ^ (IData)(
                                                          (vlSelf->top__DOT____Vtogcov__dnpc 
                                                           >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->top__DOT____Vtogcov__dnpc = ((0x7fffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__dnpc) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->dnpc 
                                                                            >> 0x3fU))))) 
                                                << 0x3fU));
    }
}

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

void Vtop___024root____Vdpiimwrap_top__DOT__mem_2__DOT__vpmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask, QData/*63:0*/ use_wen);
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
    CData/*2:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0;
    CData/*2:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__read_state;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0;
    CData/*2:0*/ __Vdlyvdim1__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v3;
    CData/*2:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__write_state;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385;
    CData/*2:0*/ __Vdlyvdim1__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68;
    CData/*2:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state;
    CData/*7:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen;
    CData/*2:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state;
    IData/*19:0*/ __Vdlyvval__top__DOT__i0__DOT__icache0__DOT__tagarray__v1;
    IData/*31:0*/ __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr;
    IData/*19:0*/ __Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2;
    IData/*31:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr;
    IData/*31:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr;
    IData/*31:0*/ __Vilp;
    QData/*63:0*/ __Vtask_top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__vpmem_read__0__mrdata;
    QData/*63:0*/ __Vtask_top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__vpmem_read__5__mrdata;
    QData/*63:0*/ __Vdlyvval__top__DOT__i0__DOT__icache0__DOT__dataarray__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__rf__v32;
    QData/*63:0*/ __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v3;
    QData/*63:0*/ __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v5;
    QData/*63:0*/ __Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385;
    // Body
    __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state 
        = vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state;
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state;
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen;
    __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen 
        = vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen;
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__write_state 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state;
    __Vdly__top__DOT__i0__DOT__icache0__DOT__state 
        = vlSelf->top__DOT__i0__DOT__icache0__DOT__state;
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__read_state 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state;
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr;
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state;
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr;
    __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0 = 0U;
    __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385 = 0U;
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state;
    __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1 = 0U;
    __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v3 = 0U;
    __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68 = 0U;
    __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0 = 0U;
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
    ++(vlSymsp->__Vcoverage[1518]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[1517]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state = 0U;
    } else if (((0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)) 
                & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid))) {
        ++(vlSymsp->__Vcoverage[1516]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state = 1U;
    } else if (((1U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)) 
                & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rready))) {
        ++(vlSymsp->__Vcoverage[1515]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state = 2U;
    } else if (((2U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)) 
                & (8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1514]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state = 3U;
    } else if ((3U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state))) {
        ++(vlSymsp->__Vcoverage[1512]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[1513]);
    }
    ++(vlSymsp->__Vcoverage[5522]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[5521]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state = 0U;
    } else if (((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state)) 
                & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__arvalid))) {
        ++(vlSymsp->__Vcoverage[5520]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state = 1U;
    } else if (((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state)) 
                & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rready))) {
        ++(vlSymsp->__Vcoverage[5519]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state = 2U;
    } else if (((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state)) 
                & (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5518]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state = 3U;
    } else if ((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state))) {
        ++(vlSymsp->__Vcoverage[5516]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[5517]);
    }
    ++(vlSymsp->__Vcoverage[4770]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[4769]);
        vlSelf->inst_finish = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[4767]);
        vlSelf->inst_finish = vlSelf->mem_finish;
    }
    ++(vlSymsp->__Vcoverage[5067]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[5066]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__write_state = 0U;
    } else if ((((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)) 
                 & (0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state))) 
                & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__awvalid))) {
        ++(vlSymsp->__Vcoverage[5065]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__write_state = 1U;
    } else if (((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)) 
                & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wready))) {
        ++(vlSymsp->__Vcoverage[5064]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__write_state = 2U;
    } else if (((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)) 
                & (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5063]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__write_state = 3U;
    } else if (((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)) 
                & (5U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)))) {
        ++(vlSymsp->__Vcoverage[5061]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__write_state = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[5062]);
    }
    ++(vlSymsp->__Vcoverage[1457]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[1456]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__state = 0U;
    } else if ((((0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)) 
                 & (0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state))) 
                & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid))) {
        ++(vlSymsp->__Vcoverage[1455]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__state = 1U;
    } else if (((1U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)) 
                & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid))) {
        ++(vlSymsp->__Vcoverage[1454]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__state = 2U;
    } else if (((2U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)) 
                & (8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1453]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__state = 3U;
    } else if (((3U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)) 
                & (IData)(vlSelf->mem_finish))) {
        ++(vlSymsp->__Vcoverage[1451]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__state = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[1452]);
    }
    ++(vlSymsp->__Vcoverage[5040]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[5039]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__read_state = 0U;
    } else if ((((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)) 
                 & (0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state))) 
                & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__arvalid))) {
        ++(vlSymsp->__Vcoverage[5038]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__read_state = 1U;
    } else if ((((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)) 
                 & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rvalid)) 
                & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rready))) {
        ++(vlSymsp->__Vcoverage[5037]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__read_state = 2U;
    } else if (((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)) 
                & (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5036]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__read_state = 3U;
    } else if (((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)) 
                & (5U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)))) {
        ++(vlSymsp->__Vcoverage[5034]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__read_state = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[5035]);
    }
    ++(vlSymsp->__Vcoverage[5525]);
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__arvalid) 
         & (0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state)))) {
        ++(vlSymsp->__Vcoverage[5523]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
            = (0xffffffc0U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr);
    } else {
        ++(vlSymsp->__Vcoverage[5524]);
    }
    ++(vlSymsp->__Vcoverage[5543]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[5542]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state = 0U;
    } else if (((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)) 
                & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__awvalid))) {
        ++(vlSymsp->__Vcoverage[5541]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state = 1U;
    } else if (((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)) 
                & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wvalid) 
                   & (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen))))) {
        ++(vlSymsp->__Vcoverage[5540]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state = 3U;
    } else if (((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)) 
                & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wvalid) 
                   & (8U != (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen))))) {
        ++(vlSymsp->__Vcoverage[5539]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state = 2U;
    } else if (((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)) 
                & (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5538]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state = 3U;
    } else if ((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state))) {
        ++(vlSymsp->__Vcoverage[5536]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[5537]);
    }
    ++(vlSymsp->__Vcoverage[5551]);
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__awvalid) 
         & (0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)))) {
        ++(vlSymsp->__Vcoverage[5549]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
            = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wraddr_block;
    } else {
        ++(vlSymsp->__Vcoverage[5550]);
    }
    ++(vlSymsp->__Vcoverage[5548]);
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wvalid) 
         & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wready))) {
        Vtop___024root____Vdpiimwrap_top__DOT__mem_2__DOT__vpmem_write_TOP((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr)), vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata, 0xffU, 1ULL);
        ++(vlSymsp->__Vcoverage[5544]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
            = ((IData)(8U) + vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__testwrite = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[5545]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__testwrite = 0U;
    }
    if ((8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen))) {
        ++(vlSymsp->__Vcoverage[5546]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__bresp = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[5547]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__bresp = 2U;
    }
    ++(vlSymsp->__Vcoverage[5050]);
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rvalid) 
         & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rready))) {
        ++(vlSymsp->__Vcoverage[5041]);
        __Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0 
            = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi;
        __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0 = 1U;
        __Vdlyvdim1__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0 
            = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len;
        __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0 
            = (0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                        >> 6U));
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len 
            = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len)));
    } else {
        ++(vlSymsp->__Vcoverage[5042]);
    }
    if ((8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen))) {
        ++(vlSymsp->__Vcoverage[5043]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len = 0U;
        __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1 = 1U;
        __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1 = 0x14U;
        __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1 
            = (0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                        >> 6U));
        __Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2 
            = (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
               >> 0xcU);
        __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2 = 0U;
        __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2 
            = (0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                        >> 6U));
    } else {
        ++(vlSymsp->__Vcoverage[5044]);
    }
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5045]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5046]);
        ++(vlSymsp->__Vcoverage[5047]);
        ++(vlSymsp->__Vcoverage[5048]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk1__DOT__i = 0x40U;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 6U;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk2__DOT__i = 0x40U;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len = 0U;
        __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v3 = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[5049]);
    }
    ++(vlSymsp->__Vcoverage[5345]);
    if ((6U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))) {
        ++(vlSymsp->__Vcoverage[5343]);
        __Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385 
            = ((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                [(0x3fU & (IData)((vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                   >> 6U)))][(7U & (IData)(
                                                           (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                                            >> 3U)))] 
                & (~ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wmask_align)) 
               | (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wdata_align 
                  & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wmask_align));
        __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385 = 1U;
        __Vdlyvdim1__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385 
            = (7U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                             >> 3U)));
        __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385 
            = (0x3fU & (IData)((vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                >> 6U)));
        __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67 = 0x15U;
        __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67 
            = (0x3fU & (IData)((vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                >> 6U)));
        if (vlSelf->rst) {
            ++(vlSymsp->__Vcoverage[5341]);
            __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68 = 1U;
            __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68 = 0x15U;
            __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68 
                = (0x3fU & (IData)((vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                    >> 6U)));
        } else {
            ++(vlSymsp->__Vcoverage[5342]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[5344]);
    }
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[4954]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 0U;
    } else if ((((((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                   & (~ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rcache_en))) 
                  & (~ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wcache_en))) 
                 & (IData)(vlSelf->inst_update)) & (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache))) {
        ++(vlSymsp->__Vcoverage[4953]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 5U;
    } else if (((((((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                    & ((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                        >> 0xcU) == (0xfffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                                     [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                >> 6U))]))) 
                   & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                      [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                 >> 6U))] >> 0x14U)) 
                  & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rcache_en)) 
                 & (IData)(vlSelf->inst_update)) & (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache))) {
        ++(vlSymsp->__Vcoverage[4952]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 4U;
    } else if (((((((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                    & ((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                        >> 0xcU) == (0xfffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                                     [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                >> 6U))]))) 
                   & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                      [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                 >> 6U))] >> 0x14U)) 
                  & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wcache_en)) 
                 & (IData)(vlSelf->inst_update)) & (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache))) {
        ++(vlSymsp->__Vcoverage[4951]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 6U;
    } else if (((((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                  & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rcache_en) 
                     | (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wcache_en))) 
                 & (IData)(vlSelf->inst_update)) & (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache))) {
        ++(vlSymsp->__Vcoverage[4950]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 1U;
    } else if (((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                & (~ (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                      [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                 >> 6U))] >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[4949]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 3U;
    } else if (((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                   [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                              >> 6U))] >> 0x15U))) {
        ++(vlSymsp->__Vcoverage[4948]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 2U;
        __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0 = 1U;
        __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0 = 0x15U;
        __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0 
            = (0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                        >> 6U));
    } else if (((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                & (3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)))) {
        ++(vlSymsp->__Vcoverage[4947]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 3U;
    } else if ((((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                 & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rcache_en)) 
                & (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[4946]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 4U;
    } else if ((((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                 & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wcache_en)) 
                & (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[4945]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 6U;
    } else if ((4U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))) {
        ++(vlSymsp->__Vcoverage[4944]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 5U;
    } else if ((6U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))) {
        ++(vlSymsp->__Vcoverage[4943]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 5U;
    } else if ((5U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))) {
        ++(vlSymsp->__Vcoverage[4941]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[4942]);
    }
    ++(vlSymsp->__Vcoverage[4955]);
    ++(vlSymsp->__Vcoverage[1521]);
    if (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid) 
         & (0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)))) {
        ++(vlSymsp->__Vcoverage[1519]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
            = (0xffffffc0U & (IData)(vlSelf->cpupc));
    } else {
        ++(vlSymsp->__Vcoverage[1520]);
    }
    ++(vlSymsp->__Vcoverage[1409]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[1408]);
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
        ++(vlSymsp->__Vcoverage[1407]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state = 3U;
    } else if ((0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state))) {
        ++(vlSymsp->__Vcoverage[1406]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state = 1U;
    } else if ((1U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state))) {
        ++(vlSymsp->__Vcoverage[1405]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state = 2U;
    } else if (((2U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state)) 
                & (8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1404]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state = 3U;
    } else if (((3U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state)) 
                & (IData)(vlSelf->mem_finish))) {
        ++(vlSymsp->__Vcoverage[1402]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[1403]);
    }
    ++(vlSymsp->__Vcoverage[2896]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2886]);
        ++(vlSymsp->__Vcoverage[2887]);
        ++(vlSymsp->__Vcoverage[2887]);
        ++(vlSymsp->__Vcoverage[2888]);
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__i = 3U;
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v0 = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[2889]);
    }
    if (vlSelf->top__DOT__rf_wen) {
        ++(vlSymsp->__Vcoverage[2890]);
        __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__rf__v32 
            = vlSymsp->TOP__top__DOT__wb0__DOT__mux3.out;
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v32 = 1U;
        __Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__rf__v32 
            = (0x1fU & (vlSelf->inst >> 7U));
    } else {
        ++(vlSymsp->__Vcoverage[2891]);
    }
    if (vlSelf->top__DOT__c_wen) {
        ++(vlSymsp->__Vcoverage[2892]);
        __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v3 
            = vlSymsp->TOP__top__DOT__exe_0__DOT__mux3.out;
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v3 = 1U;
        __Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__csr__v3 
            = vlSelf->top__DOT__c_raddr;
    } else {
        ++(vlSymsp->__Vcoverage[2893]);
    }
    if (vlSelf->top__DOT__c_wen1_2) {
        ++(vlSymsp->__Vcoverage[2894]);
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v4 = 1U;
        __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v5 
            = vlSelf->cpupc;
    } else {
        ++(vlSymsp->__Vcoverage[2895]);
    }
    ++(vlSymsp->__Vcoverage[1466]);
    if (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid) 
         & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rready))) {
        ++(vlSymsp->__Vcoverage[1459]);
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
        ++(vlSymsp->__Vcoverage[1460]);
    }
    if ((8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen))) {
        ++(vlSymsp->__Vcoverage[1461]);
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
        ++(vlSymsp->__Vcoverage[1462]);
    }
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1463]);
        ++(vlSymsp->__Vcoverage[1464]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__unnamedblk1__DOT__i = 0x40U;
        vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len = 0U;
        __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__tagarray__v2 = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[1465]);
    }
    vlSelf->top__DOT__i0__DOT__icache0__DOT__state 
        = __Vdly__top__DOT__i0__DOT__icache0__DOT__state;
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__read_state;
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state;
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr;
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__write_state;
    if (__Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray[__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0] 
            = ((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0))) 
               & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
               [__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0]);
    }
    if (__Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray[__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1] 
            = (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
               [__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1] 
               | (0x3fffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1))));
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray[__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2] 
            = (((~ ((IData)(0xfffffU) << (IData)(__Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2))) 
                & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                [__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2]) 
               | (0x3fffffU & (__Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2 
                               << (IData)(__Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2))));
    }
    if (__Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v3) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray[__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67] 
            = (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
               [__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67] 
               | (0x3fffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67))));
    }
    if (__Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray[__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68] 
            = ((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68))) 
               & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
               [__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68]);
    }
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state;
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
    if ((1U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1448]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state 
            = ((6U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1449]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state 
            = ((5U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1450]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state 
            = ((3U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__state)) 
               | (4U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)));
    }
    vlSelf->top__DOT__i0__DOT__icache0__DOT__rready 
        = ((1U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)) 
           | (2U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)));
    if (((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__mem_read_finish))) {
        ++(vlSymsp->__Vcoverage[4939]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__mem_read_finish 
            = (3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__read_state)))) {
        ++(vlSymsp->__Vcoverage[5031]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__read_state 
            = ((6U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__read_state)) 
               | (1U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__read_state)))) {
        ++(vlSymsp->__Vcoverage[5032]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__read_state 
            = ((5U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__read_state)) 
               | (2U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__read_state)))) {
        ++(vlSymsp->__Vcoverage[5033]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__read_state 
            = ((3U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__read_state)) 
               | (4U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)));
    }
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rready 
        = ((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)) 
           | (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)));
    if (((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__awready))) {
        ++(vlSymsp->__Vcoverage[5054]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__awready 
            = (0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state));
    }
    if (((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__bvalid))) {
        ++(vlSymsp->__Vcoverage[5060]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__bvalid 
            = (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state)))) {
        ++(vlSymsp->__Vcoverage[5533]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state 
            = ((6U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state)) 
               | (1U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state)))) {
        ++(vlSymsp->__Vcoverage[5534]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state 
            = ((5U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state)) 
               | (2U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state)))) {
        ++(vlSymsp->__Vcoverage[5535]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state 
            = ((3U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__write_state)) 
               | (4U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)));
    }
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__testwrite) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__testwrite))) {
        ++(vlSymsp->__Vcoverage[5512]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__testwrite 
            = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__testwrite;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__bresp) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__bresp)))) {
        ++(vlSymsp->__Vcoverage[5057]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__bresp 
            = ((2U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__bresp)) 
               | (1U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__bresp)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__bresp) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__bresp)))) {
        ++(vlSymsp->__Vcoverage[5058]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__bresp 
            = ((1U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__bresp)) 
               | (2U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__bresp)));
    }
    if ((1U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
               ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5480]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (1U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((2U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
               ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5481]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (2U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((4U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
               ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5482]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (4U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((8U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
               ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5483]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (8U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                  ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5484]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffffffefU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x10U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                  ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5485]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x20U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                  ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5486]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x40U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                  ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5487]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x80U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                   ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5488]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x100U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                   ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5489]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x200U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                   ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5490]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x400U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                   ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5491]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x800U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                    ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5492]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffffefffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x1000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                    ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5493]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x2000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                    ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5494]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x4000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                    ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5495]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x8000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                     ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5496]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x10000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                     ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5497]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x20000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                     ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5498]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x40000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                     ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5499]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x80000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                      ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5500]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffefffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x100000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                      ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5501]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x200000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                      ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5502]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x400000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                      ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5503]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x800000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                       ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5504]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x1000000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                       ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5505]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x2000000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                       ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5506]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x4000000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                       ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5507]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x8000000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                        ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5508]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xefffffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x10000000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                        ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5509]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x20000000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
                        ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr))) {
        ++(vlSymsp->__Vcoverage[5510]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x40000000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    if (((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
          ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5511]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_awaddr) 
               | (0x80000000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr));
    }
    ++(vlSymsp->__Vcoverage[5148]);
    if (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wready) {
        ++(vlSymsp->__Vcoverage[5142]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen)));
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
            = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
            [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                       >> 6U))][vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len];
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wvalid = 1U;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len 
            = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len)));
    } else {
        ++(vlSymsp->__Vcoverage[5143]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata = 0xffffffffULL;
    }
    if (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wlast) {
        ++(vlSymsp->__Vcoverage[5144]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len = 0U;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen = 0U;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wvalid = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[5145]);
    }
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[5146]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len = 0U;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen = 0U;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len = 0U;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wvalid = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[5147]);
    }
    if (((IData)(vlSelf->rst) | (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5526]);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[5527]);
    }
    ++(vlSymsp->__Vcoverage[5532]);
    if ((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state))) {
        Vtop___024root____Vdpiimwrap_top__DOT__i0__DOT__vpmem_read_TOP((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr)), __Vtask_top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__vpmem_read__5__mrdata);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
        ++(vlSymsp->__Vcoverage[5528]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
            = __Vtask_top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__vpmem_read__5__mrdata;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rresp = 0U;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rvalid = 1U;
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
            = ((IData)(8U) + vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr);
    } else {
        ++(vlSymsp->__Vcoverage[5529]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rvalid = 0U;
    }
    if (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rlast) {
        ++(vlSymsp->__Vcoverage[5530]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rvalid = 0U;
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[5531]);
    }
    if (((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__mem_write_finish))) {
        ++(vlSymsp->__Vcoverage[4938]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__mem_write_finish 
            = (3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__write_state)))) {
        ++(vlSymsp->__Vcoverage[5051]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__write_state 
            = ((6U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__write_state)) 
               | (1U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__write_state)))) {
        ++(vlSymsp->__Vcoverage[5052]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__write_state 
            = ((5U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__write_state)) 
               | (2U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__write_state)))) {
        ++(vlSymsp->__Vcoverage[5053]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__write_state 
            = ((3U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__write_state)) 
               | (4U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)));
    }
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__bready 
        = ((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)) 
           & (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)));
    if ((1U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
               [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5410]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3ffffeU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (1U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
               [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5411]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3ffffdU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (2U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
               [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5412]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3ffffbU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (4U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
               [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5413]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3ffff7U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (8U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5414]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3fffefU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x10U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5415]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3fffdfU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x20U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5416]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3fffbfU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x40U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5417]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3fff7fU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x80U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                   [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5418]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3ffeffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x100U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                   [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5419]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3ffdffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x200U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                   [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5420]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3ffbffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x400U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                   [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5421]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3ff7ffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x800U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                    [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5422]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3fefffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x1000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                    [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5423]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3fdfffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x2000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                    [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5424]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3fbfffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x4000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                    [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5425]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3f7fffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x8000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                     [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5426]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3effffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x10000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                     [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5427]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3dffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x20000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                     [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5428]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x3bffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x40000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                     [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5429]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x37ffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x80000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                      [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5430]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x2fffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x100000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                      [0U] ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag))) {
        ++(vlSymsp->__Vcoverage[5431]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag 
            = ((0x1fffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testtag) 
               | (0x200000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                  [0U]));
    }
    if (((5U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT____Vtogcov__cache_finish))) {
        ++(vlSymsp->__Vcoverage[4005]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__cache_finish 
            = (5U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state));
    }
    if (((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__mem_write_begin))) {
        ++(vlSymsp->__Vcoverage[4937]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__mem_write_begin 
            = (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state));
    }
    if (((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__mem_read_begin))) {
        ++(vlSymsp->__Vcoverage[4940]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__mem_read_begin 
            = (3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__cache_state)))) {
        ++(vlSymsp->__Vcoverage[4932]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__cache_state 
            = ((6U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__cache_state)) 
               | (1U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__cache_state)))) {
        ++(vlSymsp->__Vcoverage[4933]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__cache_state 
            = ((5U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__cache_state)) 
               | (2U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__cache_state)))) {
        ++(vlSymsp->__Vcoverage[4934]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__cache_state 
            = ((3U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__cache_state)) 
               | (4U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)));
    }
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__arvalid 
        = ((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)) 
           & (3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)));
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__awvalid 
        = ((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)) 
           & (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)));
    if ((1U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__cache_state)))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__cache_state 
            = ((6U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__cache_state)) 
               | (1U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__cache_state)))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__cache_state 
            = ((5U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__cache_state)) 
               | (2U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__cache_state)))) {
        ++(vlSymsp->__Vcoverage[1401]);
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
        ++(vlSymsp->__Vcoverage[2630]);
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
        ++(vlSymsp->__Vcoverage[2631]);
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
        ++(vlSymsp->__Vcoverage[2632]);
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
        ++(vlSymsp->__Vcoverage[2633]);
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
        ++(vlSymsp->__Vcoverage[2634]);
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
        ++(vlSymsp->__Vcoverage[2635]);
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
        ++(vlSymsp->__Vcoverage[2636]);
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
        ++(vlSymsp->__Vcoverage[2637]);
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
        ++(vlSymsp->__Vcoverage[2638]);
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
        ++(vlSymsp->__Vcoverage[2639]);
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
        ++(vlSymsp->__Vcoverage[2640]);
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
        ++(vlSymsp->__Vcoverage[2641]);
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
        ++(vlSymsp->__Vcoverage[2642]);
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
        ++(vlSymsp->__Vcoverage[2643]);
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
        ++(vlSymsp->__Vcoverage[2644]);
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
        ++(vlSymsp->__Vcoverage[2645]);
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
        ++(vlSymsp->__Vcoverage[2646]);
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
        ++(vlSymsp->__Vcoverage[2647]);
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
        ++(vlSymsp->__Vcoverage[2648]);
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
        ++(vlSymsp->__Vcoverage[2649]);
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
        ++(vlSymsp->__Vcoverage[2650]);
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
        ++(vlSymsp->__Vcoverage[2651]);
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
        ++(vlSymsp->__Vcoverage[2652]);
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
        ++(vlSymsp->__Vcoverage[2653]);
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
        ++(vlSymsp->__Vcoverage[2654]);
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
        ++(vlSymsp->__Vcoverage[2655]);
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
        ++(vlSymsp->__Vcoverage[2656]);
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
        ++(vlSymsp->__Vcoverage[2657]);
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
        ++(vlSymsp->__Vcoverage[2658]);
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
        ++(vlSymsp->__Vcoverage[2659]);
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
        ++(vlSymsp->__Vcoverage[2660]);
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
        ++(vlSymsp->__Vcoverage[2661]);
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
        ++(vlSymsp->__Vcoverage[2662]);
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
        ++(vlSymsp->__Vcoverage[2663]);
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
        ++(vlSymsp->__Vcoverage[2664]);
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
        ++(vlSymsp->__Vcoverage[2665]);
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
        ++(vlSymsp->__Vcoverage[2666]);
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
        ++(vlSymsp->__Vcoverage[2667]);
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
        ++(vlSymsp->__Vcoverage[2668]);
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
        ++(vlSymsp->__Vcoverage[2669]);
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
        ++(vlSymsp->__Vcoverage[2670]);
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
        ++(vlSymsp->__Vcoverage[2671]);
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
        ++(vlSymsp->__Vcoverage[2672]);
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
        ++(vlSymsp->__Vcoverage[2673]);
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
        ++(vlSymsp->__Vcoverage[2674]);
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
        ++(vlSymsp->__Vcoverage[2675]);
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
        ++(vlSymsp->__Vcoverage[2676]);
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
        ++(vlSymsp->__Vcoverage[2677]);
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
        ++(vlSymsp->__Vcoverage[2678]);
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
        ++(vlSymsp->__Vcoverage[2679]);
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
        ++(vlSymsp->__Vcoverage[2680]);
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
        ++(vlSymsp->__Vcoverage[2681]);
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
        ++(vlSymsp->__Vcoverage[2682]);
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
        ++(vlSymsp->__Vcoverage[2683]);
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
        ++(vlSymsp->__Vcoverage[2684]);
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
        ++(vlSymsp->__Vcoverage[2685]);
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
        ++(vlSymsp->__Vcoverage[2686]);
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
        ++(vlSymsp->__Vcoverage[2687]);
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
        ++(vlSymsp->__Vcoverage[2688]);
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
        ++(vlSymsp->__Vcoverage[2689]);
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
        ++(vlSymsp->__Vcoverage[2690]);
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
        ++(vlSymsp->__Vcoverage[2691]);
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
        ++(vlSymsp->__Vcoverage[2692]);
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
        ++(vlSymsp->__Vcoverage[2693]);
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
        ++(vlSymsp->__Vcoverage[2694]);
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
        ++(vlSymsp->__Vcoverage[2695]);
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
        ++(vlSymsp->__Vcoverage[2696]);
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
        ++(vlSymsp->__Vcoverage[2697]);
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
        ++(vlSymsp->__Vcoverage[2698]);
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
        ++(vlSymsp->__Vcoverage[2699]);
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
        ++(vlSymsp->__Vcoverage[2700]);
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
        ++(vlSymsp->__Vcoverage[2701]);
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
        ++(vlSymsp->__Vcoverage[2702]);
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
        ++(vlSymsp->__Vcoverage[2703]);
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
        ++(vlSymsp->__Vcoverage[2704]);
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
        ++(vlSymsp->__Vcoverage[2705]);
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
        ++(vlSymsp->__Vcoverage[2706]);
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
        ++(vlSymsp->__Vcoverage[2707]);
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
        ++(vlSymsp->__Vcoverage[2708]);
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
        ++(vlSymsp->__Vcoverage[2709]);
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
        ++(vlSymsp->__Vcoverage[2710]);
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
        ++(vlSymsp->__Vcoverage[2711]);
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
        ++(vlSymsp->__Vcoverage[2712]);
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
        ++(vlSymsp->__Vcoverage[2713]);
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
        ++(vlSymsp->__Vcoverage[2714]);
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
        ++(vlSymsp->__Vcoverage[2715]);
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
        ++(vlSymsp->__Vcoverage[2716]);
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
        ++(vlSymsp->__Vcoverage[2717]);
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
        ++(vlSymsp->__Vcoverage[2718]);
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
        ++(vlSymsp->__Vcoverage[2719]);
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
        ++(vlSymsp->__Vcoverage[2720]);
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
        ++(vlSymsp->__Vcoverage[2721]);
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
        ++(vlSymsp->__Vcoverage[2722]);
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
        ++(vlSymsp->__Vcoverage[2723]);
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
        ++(vlSymsp->__Vcoverage[2724]);
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
        ++(vlSymsp->__Vcoverage[2725]);
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
        ++(vlSymsp->__Vcoverage[2726]);
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
        ++(vlSymsp->__Vcoverage[2727]);
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
        ++(vlSymsp->__Vcoverage[2728]);
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
        ++(vlSymsp->__Vcoverage[2729]);
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
        ++(vlSymsp->__Vcoverage[2730]);
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
        ++(vlSymsp->__Vcoverage[2731]);
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
        ++(vlSymsp->__Vcoverage[2732]);
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
        ++(vlSymsp->__Vcoverage[2733]);
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
        ++(vlSymsp->__Vcoverage[2734]);
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
        ++(vlSymsp->__Vcoverage[2735]);
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
        ++(vlSymsp->__Vcoverage[2736]);
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
        ++(vlSymsp->__Vcoverage[2737]);
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
        ++(vlSymsp->__Vcoverage[2738]);
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
        ++(vlSymsp->__Vcoverage[2739]);
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
        ++(vlSymsp->__Vcoverage[2740]);
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
        ++(vlSymsp->__Vcoverage[2741]);
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
        ++(vlSymsp->__Vcoverage[2742]);
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
        ++(vlSymsp->__Vcoverage[2743]);
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
        ++(vlSymsp->__Vcoverage[2744]);
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
        ++(vlSymsp->__Vcoverage[2745]);
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
        ++(vlSymsp->__Vcoverage[2746]);
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
        ++(vlSymsp->__Vcoverage[2747]);
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
        ++(vlSymsp->__Vcoverage[2748]);
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
        ++(vlSymsp->__Vcoverage[2749]);
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
        ++(vlSymsp->__Vcoverage[2750]);
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
        ++(vlSymsp->__Vcoverage[2751]);
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
        ++(vlSymsp->__Vcoverage[2752]);
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
        ++(vlSymsp->__Vcoverage[2753]);
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
        ++(vlSymsp->__Vcoverage[2754]);
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
        ++(vlSymsp->__Vcoverage[2755]);
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
        ++(vlSymsp->__Vcoverage[2756]);
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
        ++(vlSymsp->__Vcoverage[2757]);
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
        ++(vlSymsp->__Vcoverage[2758]);
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
        ++(vlSymsp->__Vcoverage[2759]);
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
        ++(vlSymsp->__Vcoverage[2760]);
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
        ++(vlSymsp->__Vcoverage[2761]);
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
        ++(vlSymsp->__Vcoverage[2762]);
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
        ++(vlSymsp->__Vcoverage[2763]);
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
        ++(vlSymsp->__Vcoverage[2764]);
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
        ++(vlSymsp->__Vcoverage[2765]);
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
        ++(vlSymsp->__Vcoverage[2766]);
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
        ++(vlSymsp->__Vcoverage[2767]);
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
        ++(vlSymsp->__Vcoverage[2768]);
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
        ++(vlSymsp->__Vcoverage[2769]);
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
        ++(vlSymsp->__Vcoverage[2770]);
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
        ++(vlSymsp->__Vcoverage[2771]);
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
        ++(vlSymsp->__Vcoverage[2772]);
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
        ++(vlSymsp->__Vcoverage[2773]);
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
        ++(vlSymsp->__Vcoverage[2774]);
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
        ++(vlSymsp->__Vcoverage[2775]);
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
        ++(vlSymsp->__Vcoverage[2776]);
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
        ++(vlSymsp->__Vcoverage[2777]);
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
        ++(vlSymsp->__Vcoverage[2778]);
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
        ++(vlSymsp->__Vcoverage[2779]);
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
        ++(vlSymsp->__Vcoverage[2780]);
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
        ++(vlSymsp->__Vcoverage[2781]);
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
        ++(vlSymsp->__Vcoverage[2782]);
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
        ++(vlSymsp->__Vcoverage[2783]);
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
        ++(vlSymsp->__Vcoverage[2784]);
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
        ++(vlSymsp->__Vcoverage[2785]);
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
        ++(vlSymsp->__Vcoverage[2786]);
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
        ++(vlSymsp->__Vcoverage[2787]);
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
        ++(vlSymsp->__Vcoverage[2788]);
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
        ++(vlSymsp->__Vcoverage[2789]);
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
        ++(vlSymsp->__Vcoverage[2790]);
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
        ++(vlSymsp->__Vcoverage[2791]);
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
        ++(vlSymsp->__Vcoverage[2792]);
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
        ++(vlSymsp->__Vcoverage[2793]);
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
        ++(vlSymsp->__Vcoverage[2794]);
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
        ++(vlSymsp->__Vcoverage[2795]);
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
        ++(vlSymsp->__Vcoverage[2796]);
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
        ++(vlSymsp->__Vcoverage[2797]);
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
        ++(vlSymsp->__Vcoverage[2798]);
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
        ++(vlSymsp->__Vcoverage[2799]);
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
        ++(vlSymsp->__Vcoverage[2800]);
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
        ++(vlSymsp->__Vcoverage[2801]);
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
        ++(vlSymsp->__Vcoverage[2802]);
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
        ++(vlSymsp->__Vcoverage[2803]);
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
        ++(vlSymsp->__Vcoverage[2804]);
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
        ++(vlSymsp->__Vcoverage[2805]);
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
        ++(vlSymsp->__Vcoverage[2806]);
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
        ++(vlSymsp->__Vcoverage[2807]);
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
        ++(vlSymsp->__Vcoverage[2808]);
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
        ++(vlSymsp->__Vcoverage[2809]);
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
        ++(vlSymsp->__Vcoverage[2810]);
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
        ++(vlSymsp->__Vcoverage[2811]);
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
        ++(vlSymsp->__Vcoverage[2812]);
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
        ++(vlSymsp->__Vcoverage[2813]);
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
        ++(vlSymsp->__Vcoverage[2814]);
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
        ++(vlSymsp->__Vcoverage[2815]);
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
        ++(vlSymsp->__Vcoverage[2816]);
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
        ++(vlSymsp->__Vcoverage[2817]);
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
        ++(vlSymsp->__Vcoverage[2818]);
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
        ++(vlSymsp->__Vcoverage[2819]);
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
        ++(vlSymsp->__Vcoverage[2820]);
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
        ++(vlSymsp->__Vcoverage[2821]);
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
        ++(vlSymsp->__Vcoverage[2822]);
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
        ++(vlSymsp->__Vcoverage[2823]);
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
        ++(vlSymsp->__Vcoverage[2824]);
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
        ++(vlSymsp->__Vcoverage[2825]);
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
        ++(vlSymsp->__Vcoverage[2826]);
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
        ++(vlSymsp->__Vcoverage[2827]);
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
        ++(vlSymsp->__Vcoverage[2828]);
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
        ++(vlSymsp->__Vcoverage[2829]);
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
        ++(vlSymsp->__Vcoverage[2830]);
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
        ++(vlSymsp->__Vcoverage[2831]);
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
        ++(vlSymsp->__Vcoverage[2832]);
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
        ++(vlSymsp->__Vcoverage[2833]);
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
        ++(vlSymsp->__Vcoverage[2834]);
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
        ++(vlSymsp->__Vcoverage[2835]);
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
        ++(vlSymsp->__Vcoverage[2836]);
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
        ++(vlSymsp->__Vcoverage[2837]);
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
        ++(vlSymsp->__Vcoverage[2838]);
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
        ++(vlSymsp->__Vcoverage[2839]);
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
        ++(vlSymsp->__Vcoverage[2840]);
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
        ++(vlSymsp->__Vcoverage[2841]);
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
        ++(vlSymsp->__Vcoverage[2842]);
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
        ++(vlSymsp->__Vcoverage[2843]);
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
        ++(vlSymsp->__Vcoverage[2844]);
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
        ++(vlSymsp->__Vcoverage[2845]);
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
        ++(vlSymsp->__Vcoverage[2846]);
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
        ++(vlSymsp->__Vcoverage[2847]);
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
        ++(vlSymsp->__Vcoverage[2848]);
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
        ++(vlSymsp->__Vcoverage[2849]);
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
        ++(vlSymsp->__Vcoverage[2850]);
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
        ++(vlSymsp->__Vcoverage[2851]);
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
        ++(vlSymsp->__Vcoverage[2852]);
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
        ++(vlSymsp->__Vcoverage[2853]);
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
        ++(vlSymsp->__Vcoverage[2854]);
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
        ++(vlSymsp->__Vcoverage[2855]);
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
        ++(vlSymsp->__Vcoverage[2856]);
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
        ++(vlSymsp->__Vcoverage[2857]);
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
        ++(vlSymsp->__Vcoverage[2858]);
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
        ++(vlSymsp->__Vcoverage[2859]);
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
        ++(vlSymsp->__Vcoverage[2860]);
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
        ++(vlSymsp->__Vcoverage[2861]);
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
        ++(vlSymsp->__Vcoverage[2862]);
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
        ++(vlSymsp->__Vcoverage[2863]);
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
        ++(vlSymsp->__Vcoverage[2864]);
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
        ++(vlSymsp->__Vcoverage[2865]);
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
        ++(vlSymsp->__Vcoverage[2866]);
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
        ++(vlSymsp->__Vcoverage[2867]);
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
        ++(vlSymsp->__Vcoverage[2868]);
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
        ++(vlSymsp->__Vcoverage[2869]);
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
        ++(vlSymsp->__Vcoverage[2870]);
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
        ++(vlSymsp->__Vcoverage[2871]);
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
        ++(vlSymsp->__Vcoverage[2872]);
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
        ++(vlSymsp->__Vcoverage[2873]);
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
        ++(vlSymsp->__Vcoverage[2874]);
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
        ++(vlSymsp->__Vcoverage[2875]);
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
        ++(vlSymsp->__Vcoverage[2876]);
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
        ++(vlSymsp->__Vcoverage[2877]);
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
        ++(vlSymsp->__Vcoverage[2878]);
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
        ++(vlSymsp->__Vcoverage[2879]);
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
        ++(vlSymsp->__Vcoverage[2880]);
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
        ++(vlSymsp->__Vcoverage[2881]);
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
        ++(vlSymsp->__Vcoverage[2882]);
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
        ++(vlSymsp->__Vcoverage[2883]);
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
        ++(vlSymsp->__Vcoverage[2884]);
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
        ++(vlSymsp->__Vcoverage[2885]);
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
        ++(vlSymsp->__Vcoverage[1445]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__d_len 
            = ((6U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__d_len)) 
               | (1U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__d_len)))) {
        ++(vlSymsp->__Vcoverage[1446]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__d_len 
            = ((5U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__d_len)) 
               | (2U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__d_len)))) {
        ++(vlSymsp->__Vcoverage[1447]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__d_len 
            = ((3U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__d_len)) 
               | (4U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len)));
    }
    if (((IData)(vlSelf->rst) | (8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1522]);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[1523]);
    }
    ++(vlSymsp->__Vcoverage[1528]);
    if ((2U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state))) {
        Vtop___024root____Vdpiimwrap_top__DOT__i0__DOT__vpmem_read_TOP((QData)((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr)), __Vtask_top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__vpmem_read__0__mrdata);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
        ++(vlSymsp->__Vcoverage[1524]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
            = __Vtask_top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__vpmem_read__0__mrdata;
        vlSelf->top__DOT__i0__DOT__icache0__DOT__rresp = 0U;
        vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid = 1U;
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
            = ((IData)(8U) + vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr);
    } else {
        ++(vlSymsp->__Vcoverage[1525]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid = 0U;
    }
    if (vlSelf->top__DOT__i0__DOT__icache0__DOT__rlast) {
        ++(vlSymsp->__Vcoverage[1526]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid = 0U;
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[1527]);
    }
    ++(vlSymsp->__Vcoverage[1334]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelf->cpupc = 0x80000000ULL;
    } else {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelf->cpupc = vlSelf->dnpc;
    }
    if (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rready) 
         ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rready))) {
        ++(vlSymsp->__Vcoverage[1411]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rready 
            = vlSelf->top__DOT__i0__DOT__icache0__DOT__rready;
    }
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rready) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rready))) {
        ++(vlSymsp->__Vcoverage[5020]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rready 
            = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rready;
    }
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wready 
        = ((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)) 
           | (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)));
    if (__Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0][__Vdlyvdim1__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0] 
            = __Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0;
    }
    if (__Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v3) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[1U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[1U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[1U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[1U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[1U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[1U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[2U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[2U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[2U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[2U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[2U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[2U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[3U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[3U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[3U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[3U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[3U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[3U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[4U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[4U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[4U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[4U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[4U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[4U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[5U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[5U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[5U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[5U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[5U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[5U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[6U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[6U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[6U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[6U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[6U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[6U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[7U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[7U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[7U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[7U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[7U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[7U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[8U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[8U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[8U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[8U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[8U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[8U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[9U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[9U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[9U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[9U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[9U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[9U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xaU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xaU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xaU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xaU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xaU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xaU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xbU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xbU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xbU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xbU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xbU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xbU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xcU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xcU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xcU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xcU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xcU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xcU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xdU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xdU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xdU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xdU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xdU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xdU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xeU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xeU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xeU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xeU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xeU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xeU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xfU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xfU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xfU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xfU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xfU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xfU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x10U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x10U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x10U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x10U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x10U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x10U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x11U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x11U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x11U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x11U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x11U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x11U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x12U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x12U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x12U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x12U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x12U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x12U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x13U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x13U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x13U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x13U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x13U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x13U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x14U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x14U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x14U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x14U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x14U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x14U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x15U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x15U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x15U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x15U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x15U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x15U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x16U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x16U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x16U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x16U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x16U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x16U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x17U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x17U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x17U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x17U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x17U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x17U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x18U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x18U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x18U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x18U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x18U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x18U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x19U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x19U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x19U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x19U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x19U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x19U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1aU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1aU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1aU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1aU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1aU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1aU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1bU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1bU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1bU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1bU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1bU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1bU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1cU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1cU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1cU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1cU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1cU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1cU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1dU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1dU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1dU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1dU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1dU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1dU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1eU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1eU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1eU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1eU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1eU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1eU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1fU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1fU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1fU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1fU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1fU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1fU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x20U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x20U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x20U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x20U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x20U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x20U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x21U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x21U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x21U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x21U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x21U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x21U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x22U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x22U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x22U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x22U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x22U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x22U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x23U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x23U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x23U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x23U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x23U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x23U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x24U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x24U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x24U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x24U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x24U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x24U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x25U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x25U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x25U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x25U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x25U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x25U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x26U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x26U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x26U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x26U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x26U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x26U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x27U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x27U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x27U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x27U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x27U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x27U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x28U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x28U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x28U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x28U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x28U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x28U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x29U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x29U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x29U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x29U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x29U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x29U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2aU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2aU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2aU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2aU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2aU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2aU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2bU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2bU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2bU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2bU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2bU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2bU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2cU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2cU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2cU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2cU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2cU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2cU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2dU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2dU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2dU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2dU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2dU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2dU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2eU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2eU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2eU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2eU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2eU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2eU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2fU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2fU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2fU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2fU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2fU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2fU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x30U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x30U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x30U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x30U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x30U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x30U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x31U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x31U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x31U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x31U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x31U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x31U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x32U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x32U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x32U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x32U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x32U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x32U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x33U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x33U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x33U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x33U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x33U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x33U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x34U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x34U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x34U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x34U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x34U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x34U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x35U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x35U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x35U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x35U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x35U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x35U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x36U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x36U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x36U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x36U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x36U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x36U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x37U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x37U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x37U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x37U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x37U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x37U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x38U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x38U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x38U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x38U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x38U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x38U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x39U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x39U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x39U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x39U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x39U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x39U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3aU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3aU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3aU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3aU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3aU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3aU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3bU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3bU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3bU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3bU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3bU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3bU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3cU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3cU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3cU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3cU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3cU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3cU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3dU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3dU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3dU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3dU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3dU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3dU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3eU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3eU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3eU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3eU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3eU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3eU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3fU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3fU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3fU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3fU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3fU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3fU][5U] = 0ULL;
    }
    if (__Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385][__Vdlyvdim1__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385] 
            = __Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385;
    }
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state;
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen;
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr;
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi)))) {
        ++(vlSymsp->__Vcoverage[4867]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4868]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4869]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4870]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4871]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4872]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4873]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4874]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4875]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4876]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4877]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4878]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4879]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4880]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4881]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4882]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4883]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4884]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4885]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4886]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4887]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4888]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4889]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4890]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4891]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4892]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4893]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4894]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4895]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4896]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4897]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4898]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4899]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4900]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4901]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4902]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4903]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4904]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4905]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4906]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4907]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4908]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4909]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4910]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4911]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4912]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4913]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4914]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4915]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4916]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4917]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4918]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4919]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4920]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4921]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4922]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4923]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4924]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4925]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4926]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4927]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4928]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4929]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4930]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__bready) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__bready))) {
        ++(vlSymsp->__Vcoverage[5059]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__bready 
            = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__bready;
    }
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__arvalid) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__arvalid))) {
        ++(vlSymsp->__Vcoverage[5022]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__arvalid 
            = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__arvalid;
    }
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__awvalid) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__awvalid))) {
        ++(vlSymsp->__Vcoverage[5068]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__awvalid 
            = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__awvalid;
    }
    if (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid) 
         ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__arvalid))) {
        ++(vlSymsp->__Vcoverage[1458]);
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
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1367]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1369]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1370]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wvalid) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wvalid))) {
        ++(vlSymsp->__Vcoverage[5069]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wvalid 
            = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wvalid;
    }
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wready) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wready))) {
        ++(vlSymsp->__Vcoverage[5056]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wready 
            = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wready;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_w_len)))) {
        ++(vlSymsp->__Vcoverage[5026]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_w_len 
            = ((6U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_w_len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_w_len)))) {
        ++(vlSymsp->__Vcoverage[5027]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_w_len 
            = ((5U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_w_len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_w_len)))) {
        ++(vlSymsp->__Vcoverage[5028]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_w_len 
            = ((3U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_w_len)) 
               | (4U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_r_len)))) {
        ++(vlSymsp->__Vcoverage[5023]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_r_len 
            = ((6U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_r_len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_r_len)))) {
        ++(vlSymsp->__Vcoverage[5024]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_r_len 
            = ((5U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_r_len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_r_len)))) {
        ++(vlSymsp->__Vcoverage[5025]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_r_len 
            = ((3U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__d_r_len)) 
               | (4U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len)));
    }
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wlast 
        = (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen));
    if (((8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen)) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wlast))) {
        ++(vlSymsp->__Vcoverage[5055]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wlast 
            = (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5134]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen)) 
               | (1U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5135]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen)) 
               | (2U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5136]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen)) 
               | (4U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5137]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen)) 
               | (8U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen) 
                  ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5138]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen) 
                  ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5139]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen) 
                  ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5140]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen) 
                  ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen)))) {
        ++(vlSymsp->__Vcoverage[5141]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__c_awlen)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi)))) {
        ++(vlSymsp->__Vcoverage[5070]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5071]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5072]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5073]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5074]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5075]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5076]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5077]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5078]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5079]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5080]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5081]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5082]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5083]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5084]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5085]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5086]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5087]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5088]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5089]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5090]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5091]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5092]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5093]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5094]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5095]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5096]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5097]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5098]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5099]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5100]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5101]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5102]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5103]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5104]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5105]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5106]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5107]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5108]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5109]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5110]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5111]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5112]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5113]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5114]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5115]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5116]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5117]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5118]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5119]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5120]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5121]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5122]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5123]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5124]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5125]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5126]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5127]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5128]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5129]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5130]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5131]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5132]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5133]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__wdata_axi) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                       [0x38U][3U]) ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata)))) {
        ++(vlSymsp->__Vcoverage[5346]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                               [0x38U]
                                               [3U])))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 1U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5347]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 2U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5348]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 3U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5349]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 4U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5350]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 5U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5351]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 6U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5352]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 7U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5353]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 8U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5354]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 9U)) ^ (IData)(
                                                      (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                       >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5355]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0xaU)) ^ (IData)(
                                                        (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                         >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5356]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0xbU)) ^ (IData)(
                                                        (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                         >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5357]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0xcU)) ^ (IData)(
                                                        (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                         >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5358]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0xdU)) ^ (IData)(
                                                        (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                         >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5359]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0xeU)) ^ (IData)(
                                                        (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                         >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5360]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0xfU)) ^ (IData)(
                                                        (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                         >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5361]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x10U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5362]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x11U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5363]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x12U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5364]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x13U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5365]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x14U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5366]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x15U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5367]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x16U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5368]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x17U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5369]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x18U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5370]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x19U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5371]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x1aU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5372]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x1bU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5373]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x1cU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5374]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x1dU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5375]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x1eU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5376]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x1fU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5377]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x20U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5378]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x21U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5379]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x22U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5380]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x23U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5381]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x24U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5382]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x25U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5383]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x26U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5384]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x27U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5385]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x28U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5386]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x29U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5387]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x2aU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5388]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x2bU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5389]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x2cU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5390]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x2dU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5391]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x2eU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5392]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x2fU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5393]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x30U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5394]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x31U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5395]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x32U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5396]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x33U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5397]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x34U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5398]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x35U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5399]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x36U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5400]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x37U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5401]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x38U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5402]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x39U)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5403]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x3aU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5404]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x3bU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5405]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x3cU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5406]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x3dU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5407]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x3eU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5408]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                        [0x38U][3U] >> 0x3fU)) ^ (IData)(
                                                         (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
                                                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5409]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__testdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                 [0x38U]
                                                 [3U] 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rvalid) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rvalid))) {
        ++(vlSymsp->__Vcoverage[5019]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rvalid 
            = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rvalid;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rresp) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rresp)))) {
        ++(vlSymsp->__Vcoverage[5029]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rresp 
            = ((2U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rresp)) 
               | (1U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rresp)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rresp) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rresp)))) {
        ++(vlSymsp->__Vcoverage[5030]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rresp 
            = ((1U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rresp)) 
               | (2U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rresp)));
    }
    if (((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state)) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__arready))) {
        ++(vlSymsp->__Vcoverage[5021]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__arready 
            = (0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[5513]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state 
            = ((6U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[5514]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state 
            = ((5U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[5515]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state 
            = ((3U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__state)) 
               | (4U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state)));
    }
    if (((8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rlast))) {
        ++(vlSymsp->__Vcoverage[4931]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT____Vtogcov__rlast 
            = (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen));
    }
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rlast 
        = (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen));
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5464]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)) 
               | (1U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5465]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)) 
               | (2U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5466]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)) 
               | (4U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5467]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)) 
               | (8U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen) 
                  ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5468]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen) 
                  ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5469]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen) 
                  ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5470]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen) 
                  ^ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[5471]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__c_arlen)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
    }
    if ((1U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
               ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5432]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (1U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((2U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
               ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5433]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (2U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((4U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
               ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5434]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (4U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((8U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
               ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5435]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (8U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                  ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5436]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffffffefU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x10U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                  ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5437]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x20U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                  ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5438]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x40U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                  ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5439]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x80U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                   ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5440]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x100U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                   ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5441]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x200U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                   ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5442]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x400U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                   ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5443]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x800U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                    ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5444]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffffefffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x1000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                    ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5445]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x2000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                    ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5446]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x4000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                    ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5447]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x8000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                     ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5448]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x10000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                     ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5449]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x20000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                     ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5450]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x40000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                     ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5451]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x80000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                      ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5452]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffefffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x100000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                      ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5453]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x200000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                      ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5454]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x400000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                      ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5455]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x800000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                       ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5456]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x1000000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                       ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5457]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x2000000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                       ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5458]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x4000000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                       ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5459]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x8000000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                        ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5460]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xefffffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x10000000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                        ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5461]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x20000000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
                        ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[5462]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x40000000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if (((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
          ^ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5463]);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT____Vtogcov__r_araddr) 
               | (0x80000000U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr));
    }
    if (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid) 
         ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rvalid))) {
        ++(vlSymsp->__Vcoverage[1410]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rvalid 
            = vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rresp) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rresp)))) {
        ++(vlSymsp->__Vcoverage[1467]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rresp 
            = ((2U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rresp)) 
               | (1U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rresp)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rresp) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rresp)))) {
        ++(vlSymsp->__Vcoverage[1468]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rresp 
            = ((1U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rresp)) 
               | (2U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rresp)));
    }
    if (((0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)) 
         ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__arready))) {
        ++(vlSymsp->__Vcoverage[1412]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__arready 
            = (0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1509]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state 
            = ((6U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1510]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state 
            = ((5U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1511]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state 
            = ((3U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__state)) 
               | (4U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)));
    }
    if (((8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)) 
         ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rlast))) {
        ++(vlSymsp->__Vcoverage[1413]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__rlast 
            = (8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen));
    }
    vlSelf->top__DOT__i0__DOT__icache0__DOT__rlast 
        = (8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen));
    if ((1U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1501]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen 
            = ((0xfeU & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)) 
               | (1U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1502]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen 
            = ((0xfdU & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)) 
               | (2U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1503]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen 
            = ((0xfbU & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)) 
               | (4U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen) 
               ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1504]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen 
            = ((0xf7U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)) 
               | (8U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen) 
                  ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1505]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen 
            = ((0xefU & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)) 
               | (0x10U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen) 
                  ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1506]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen 
            = ((0xdfU & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)) 
               | (0x20U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen) 
                  ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1507]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen 
            = ((0xbfU & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)) 
               | (0x40U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen) 
                  ^ (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)))) {
        ++(vlSymsp->__Vcoverage[1508]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen 
            = ((0x7fU & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__c_arlen)) 
               | (0x80U & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
    }
    if ((1U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
               ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1469]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffffffeU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (1U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((2U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
               ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1470]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffffffdU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (2U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((4U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
               ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1471]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffffffbU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (4U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((8U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
               ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1472]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffffff7U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (8U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x10U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                  ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1473]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffffffefU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x10U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x20U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                  ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1474]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffffffdfU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x20U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x40U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                  ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1475]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffffffbfU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x40U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x80U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                  ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1476]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffffff7fU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x80U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x100U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                   ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1477]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffffeffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x100U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x200U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                   ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1478]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffffdffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x200U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x400U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                   ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1479]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffffbffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x400U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x800U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                   ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1480]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffff7ffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x800U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x1000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                    ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1481]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffffefffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x1000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x2000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                    ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1482]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffffdfffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x2000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x4000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                    ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1483]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffffbfffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x4000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x8000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                    ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1484]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffff7fffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x8000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x10000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                     ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1485]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffeffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x10000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x20000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                     ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1486]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffdffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x20000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x40000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                     ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1487]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfffbffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x40000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x80000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                     ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1488]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfff7ffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x80000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x100000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                      ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1489]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffefffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x100000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x200000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                      ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1490]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffdfffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x200000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x400000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                      ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1491]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xffbfffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x400000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x800000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                      ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1492]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xff7fffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x800000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                       ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1493]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfeffffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x1000000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                       ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1494]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfdffffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x2000000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                       ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1495]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xfbffffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x4000000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                       ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1496]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xf7ffffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x8000000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                        ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1497]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xefffffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x10000000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                        ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1498]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xdfffffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x20000000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
                        ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr))) {
        ++(vlSymsp->__Vcoverage[1499]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0xbfffffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x40000000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if (((vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
          ^ vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1500]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr 
            = ((0x7fffffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT____Vtogcov__r_araddr) 
               | (0x80000000U & vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr));
    }
    if ((1U & ((0x7fffffe0U & ((IData)(vlSelf->cpupc) 
                               >> 1U)) ^ (vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
                                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1414]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
            = (0xfffffffdU & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block);
    }
    if ((1U & ((0x3ffffff0U & ((IData)(vlSelf->cpupc) 
                               >> 2U)) ^ (vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
                                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1415]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
            = (0xfffffffbU & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block);
    }
    if ((1U & ((0x1ffffff8U & ((IData)(vlSelf->cpupc) 
                               >> 3U)) ^ (vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
                                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1416]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
            = (0xfffffff7U & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block);
    }
    if ((1U & ((0xffffffcU & ((IData)(vlSelf->cpupc) 
                              >> 4U)) ^ (vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
                                         >> 4U)))) {
        ++(vlSymsp->__Vcoverage[1417]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
            = (0xffffffefU & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block);
    }
    if ((1U & ((0x7fffffeU & ((IData)(vlSelf->cpupc) 
                              >> 5U)) ^ (vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
                                         >> 5U)))) {
        ++(vlSymsp->__Vcoverage[1418]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
            = (0xffffffdfU & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block);
    }
    if ((0x40U & ((IData)(vlSelf->cpupc) ^ vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block))) {
        ++(vlSymsp->__Vcoverage[1419]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
            = ((0xffffffbfU & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block) 
               | (0x40U & (IData)(vlSelf->cpupc)));
    }
    if ((0x80U & ((IData)(vlSelf->cpupc) ^ vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block))) {
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
            = ((0xffffff7fU & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block) 
               | (0x80U & (IData)(vlSelf->cpupc)));
    }
    if ((0x100U & ((IData)(vlSelf->cpupc) ^ vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block))) {
        ++(vlSymsp->__Vcoverage[1421]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
            = ((0xfffffeffU & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block) 
               | (0x100U & (IData)(vlSelf->cpupc)));
    }
    if ((0x200U & ((IData)(vlSelf->cpupc) ^ vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block))) {
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
            = ((0xfffffdffU & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block) 
               | (0x200U & (IData)(vlSelf->cpupc)));
    }
    if ((0x400U & ((IData)(vlSelf->cpupc) ^ vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block))) {
        ++(vlSymsp->__Vcoverage[1423]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
            = ((0xfffffbffU & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block) 
               | (0x400U & (IData)(vlSelf->cpupc)));
    }
    if ((0x800U & ((IData)(vlSelf->cpupc) ^ vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block))) {
        ++(vlSymsp->__Vcoverage[1424]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
            = ((0xfffff7ffU & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block) 
               | (0x800U & (IData)(vlSelf->cpupc)));
    }
    if ((0x1000U & ((IData)(vlSelf->cpupc) ^ vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block))) {
        ++(vlSymsp->__Vcoverage[1425]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
            = ((0xffffefffU & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block) 
               | (0x1000U & (IData)(vlSelf->cpupc)));
    }
    if ((0x2000U & ((IData)(vlSelf->cpupc) ^ vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block))) {
        ++(vlSymsp->__Vcoverage[1426]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
            = ((0xffffdfffU & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block) 
               | (0x2000U & (IData)(vlSelf->cpupc)));
    }
    if ((0x4000U & ((IData)(vlSelf->cpupc) ^ vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block))) {
        ++(vlSymsp->__Vcoverage[1427]);
        vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block 
            = ((0xffffbfffU & vlSelf->top__DOT__i0__DOT__icache0__DOT____Vtogcov__araddr_block) 
               | (0x4000U & (IData)(vlSelf->cpupc)));
    }
}
