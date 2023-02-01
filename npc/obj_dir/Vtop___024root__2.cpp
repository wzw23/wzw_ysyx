// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__10\n"); );
    // Body
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6744]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [0U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
          [0U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6745]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[6746]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (1U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[6747]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (2U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[6748]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (4U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[6749]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (8U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                  [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[6750]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x10U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                  [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[6751]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x20U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                  [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[6752]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x40U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                  [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[6753]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x80U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                   [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[6754]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x100U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                   [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[6755]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x200U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                   [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[6756]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x400U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                   [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[6757]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x800U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                    [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[6758]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                    [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[6759]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                    [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[6760]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                    [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[6761]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                     [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[6762]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                     [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[6763]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                     [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[6764]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                     [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[6765]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                      [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[6766]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                      [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[6767]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                      [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[6768]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                      [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[6769]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                       [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[6770]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                       [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[6771]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                       [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[6772]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                       [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[6773]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                        [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[6774]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                        [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[6775]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                        [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[6776]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
          [1U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
          [1U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6777]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[6778]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (1U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[6779]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (2U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[6780]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (4U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[6781]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (8U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                  [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[6782]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x10U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                  [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[6783]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x20U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                  [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[6784]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x40U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                  [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[6785]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x80U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                   [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[6786]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x100U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                   [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[6787]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x200U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                   [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[6788]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x400U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                   [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                   [2U]))) {
        ++(vlSymsp->__Vcoverage[6789]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x800U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                    [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[6790]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                    [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[6791]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                    [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[6792]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                    [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                    [2U]))) {
        ++(vlSymsp->__Vcoverage[6793]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                     [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[6794]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                     [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[6795]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                     [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[6796]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                     [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                     [2U]))) {
        ++(vlSymsp->__Vcoverage[6797]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                      [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[6798]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                      [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[6799]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                      [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[6800]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                      [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                      [2U]))) {
        ++(vlSymsp->__Vcoverage[6801]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                       [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                       [2U]))) {
        ++(vlSymsp->__Vcoverage[6802]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                       [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                       [2U]))) {
        ++(vlSymsp->__Vcoverage[6803]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                       [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                       [2U]))) {
        ++(vlSymsp->__Vcoverage[6804]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                       [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                       [2U]))) {
        ++(vlSymsp->__Vcoverage[6805]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                        [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                        [2U]))) {
        ++(vlSymsp->__Vcoverage[6806]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                        [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                        [2U]))) {
        ++(vlSymsp->__Vcoverage[6807]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                        [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                        [2U]))) {
        ++(vlSymsp->__Vcoverage[6808]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
          [2U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
          [2U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6809]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[6810]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (1U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[6811]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (2U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[6812]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (4U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[6813]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (8U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                  [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[6814]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x10U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                  [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[6815]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x20U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                  [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[6816]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x40U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                  [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[6817]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x80U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                   [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[6818]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x100U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                   [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[6819]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x200U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                   [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[6820]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x400U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                   [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                   [3U]))) {
        ++(vlSymsp->__Vcoverage[6821]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x800U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                    [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[6822]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                    [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[6823]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                    [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[6824]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                    [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                    [3U]))) {
        ++(vlSymsp->__Vcoverage[6825]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                     [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[6826]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                     [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[6827]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                     [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[6828]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                     [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                     [3U]))) {
        ++(vlSymsp->__Vcoverage[6829]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                      [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[6830]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                      [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[6831]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                      [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[6832]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                      [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                      [3U]))) {
        ++(vlSymsp->__Vcoverage[6833]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                       [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                       [3U]))) {
        ++(vlSymsp->__Vcoverage[6834]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                       [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                       [3U]))) {
        ++(vlSymsp->__Vcoverage[6835]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                       [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                       [3U]))) {
        ++(vlSymsp->__Vcoverage[6836]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                       [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                       [3U]))) {
        ++(vlSymsp->__Vcoverage[6837]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                        [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                        [3U]))) {
        ++(vlSymsp->__Vcoverage[6838]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                        [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                        [3U]))) {
        ++(vlSymsp->__Vcoverage[6839]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                        [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                        [3U]))) {
        ++(vlSymsp->__Vcoverage[6840]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
          [3U] ^ vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
          [3U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6841]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                         [3U]));
    }
    ++(vlSymsp->__Vcoverage[6883]);
    ++(vlSymsp->__Vcoverage[6883]);
    ++(vlSymsp->__Vcoverage[6883]);
    ++(vlSymsp->__Vcoverage[6883]);
    ++(vlSymsp->__Vcoverage[6885]);
    ++(vlSymsp->__Vcoverage[6886]);
    vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__i = 4U;
    vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__hit 
        = (vlSelf->inst == vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__de__DOT__mwmask = ((IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__hit)
                                          ? (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out)
                                          : 0U);
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[4257]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[4258]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[4259]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[4260]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[4261]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[4262]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[4263]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[4264]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[4265]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [1U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[4266]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[4267]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[4268]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[4269]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[4270]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [2U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[4271]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[4272]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[4273]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[4274]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[4275]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [3U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[4276]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[4277]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[4278]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[4279]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[4280]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [4U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[4281]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[4282]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[4283]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[4284]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[4285]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [5U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[4286]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[4287]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[4288]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[4289]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[4290]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [6U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[4291]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[4292]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[4293]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[4294]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[4295]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [7U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [7U]))) {
        ++(vlSymsp->__Vcoverage[4296]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[4297]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [8U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[4298]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [8U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[4299]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [8U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[4300]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [8U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [8U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [8U]))) {
        ++(vlSymsp->__Vcoverage[4301]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [8U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [9U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [9U]))) {
        ++(vlSymsp->__Vcoverage[4302]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[9U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [9U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [9U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [9U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [9U]))) {
        ++(vlSymsp->__Vcoverage[4303]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[9U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [9U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [9U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [9U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [9U]))) {
        ++(vlSymsp->__Vcoverage[4304]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[9U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [9U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [9U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [9U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [9U]))) {
        ++(vlSymsp->__Vcoverage[4305]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[9U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [9U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [9U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [9U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [9U]))) {
        ++(vlSymsp->__Vcoverage[4306]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[9U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [9U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                         [9U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xaU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[4307]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xaU] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xaU]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xaU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xaU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[4308]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xaU] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xaU]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xaU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xaU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[4309]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xaU] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xaU]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xaU]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xaU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[4310]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xaU] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xaU]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xaU]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0xaU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0xaU]))) {
        ++(vlSymsp->__Vcoverage[4311]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xaU] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xaU]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xaU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xbU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[4312]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xbU] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xbU]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xbU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xbU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[4313]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xbU] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xbU]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xbU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xbU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[4314]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xbU] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xbU]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xbU]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xbU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[4315]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xbU] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xbU]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xbU]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0xbU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0xbU]))) {
        ++(vlSymsp->__Vcoverage[4316]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xbU] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xbU]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xbU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xcU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[4317]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xcU] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xcU]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xcU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xcU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[4318]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xcU] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xcU]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xcU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xcU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[4319]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xcU] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xcU]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xcU]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xcU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[4320]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xcU] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xcU]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xcU]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0xcU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0xcU]))) {
        ++(vlSymsp->__Vcoverage[4321]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xcU] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xcU]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xcU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xdU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[4322]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xdU] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xdU]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xdU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xdU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[4323]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xdU] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xdU]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xdU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xdU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[4324]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xdU] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xdU]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xdU]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xdU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[4325]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xdU] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xdU]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xdU]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0xdU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0xdU]))) {
        ++(vlSymsp->__Vcoverage[4326]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xdU] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xdU]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xdU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xeU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[4327]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xeU] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xeU]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xeU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xeU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[4328]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xeU] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xeU]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xeU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xeU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[4329]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xeU] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xeU]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xeU]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xeU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[4330]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xeU] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xeU]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xeU]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0xeU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0xeU]))) {
        ++(vlSymsp->__Vcoverage[4331]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xeU] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xeU]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xeU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xfU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[4332]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xfU] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xfU]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xfU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xfU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[4333]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xfU] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xfU]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xfU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xfU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[4334]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xfU] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xfU]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xfU]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0xfU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[4335]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xfU] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xfU]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xfU]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0xfU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0xfU]))) {
        ++(vlSymsp->__Vcoverage[4336]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0xfU] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0xfU]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                           [0xfU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x10U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x10U]))) {
        ++(vlSymsp->__Vcoverage[4337]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x10U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x10U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x10U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x10U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x10U]))) {
        ++(vlSymsp->__Vcoverage[4338]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x10U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x10U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x10U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x10U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x10U]))) {
        ++(vlSymsp->__Vcoverage[4339]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x10U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x10U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x10U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x10U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x10U]))) {
        ++(vlSymsp->__Vcoverage[4340]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x10U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x10U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x10U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x10U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x10U]))) {
        ++(vlSymsp->__Vcoverage[4341]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x10U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x10U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x10U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x11U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x11U]))) {
        ++(vlSymsp->__Vcoverage[4342]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x11U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x11U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x11U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x11U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x11U]))) {
        ++(vlSymsp->__Vcoverage[4343]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x11U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x11U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x11U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x11U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x11U]))) {
        ++(vlSymsp->__Vcoverage[4344]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x11U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x11U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x11U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x11U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x11U]))) {
        ++(vlSymsp->__Vcoverage[4345]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x11U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x11U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x11U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x11U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x11U]))) {
        ++(vlSymsp->__Vcoverage[4346]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x11U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x11U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x11U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x12U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x12U]))) {
        ++(vlSymsp->__Vcoverage[4347]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x12U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x12U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x12U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x12U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x12U]))) {
        ++(vlSymsp->__Vcoverage[4348]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x12U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x12U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x12U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x12U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x12U]))) {
        ++(vlSymsp->__Vcoverage[4349]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x12U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x12U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x12U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x12U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x12U]))) {
        ++(vlSymsp->__Vcoverage[4350]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x12U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x12U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x12U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x12U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x12U]))) {
        ++(vlSymsp->__Vcoverage[4351]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x12U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x12U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x12U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x13U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x13U]))) {
        ++(vlSymsp->__Vcoverage[4352]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x13U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x13U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x13U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x13U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x13U]))) {
        ++(vlSymsp->__Vcoverage[4353]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x13U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x13U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x13U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x13U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x13U]))) {
        ++(vlSymsp->__Vcoverage[4354]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x13U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x13U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x13U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x13U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x13U]))) {
        ++(vlSymsp->__Vcoverage[4355]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x13U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x13U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x13U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x13U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x13U]))) {
        ++(vlSymsp->__Vcoverage[4356]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x13U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x13U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x13U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x14U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x14U]))) {
        ++(vlSymsp->__Vcoverage[4357]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x14U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x14U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x14U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x14U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x14U]))) {
        ++(vlSymsp->__Vcoverage[4358]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x14U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x14U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x14U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x14U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x14U]))) {
        ++(vlSymsp->__Vcoverage[4359]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x14U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x14U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x14U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x14U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x14U]))) {
        ++(vlSymsp->__Vcoverage[4360]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x14U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x14U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x14U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x14U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x14U]))) {
        ++(vlSymsp->__Vcoverage[4361]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x14U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x14U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x14U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x15U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x15U]))) {
        ++(vlSymsp->__Vcoverage[4362]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x15U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x15U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x15U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x15U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x15U]))) {
        ++(vlSymsp->__Vcoverage[4363]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x15U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x15U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x15U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x15U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x15U]))) {
        ++(vlSymsp->__Vcoverage[4364]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x15U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x15U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x15U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x15U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x15U]))) {
        ++(vlSymsp->__Vcoverage[4365]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x15U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x15U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x15U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x15U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x15U]))) {
        ++(vlSymsp->__Vcoverage[4366]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x15U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x15U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x15U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x16U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x16U]))) {
        ++(vlSymsp->__Vcoverage[4367]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x16U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x16U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x16U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x16U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x16U]))) {
        ++(vlSymsp->__Vcoverage[4368]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x16U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x16U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x16U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x16U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x16U]))) {
        ++(vlSymsp->__Vcoverage[4369]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x16U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x16U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x16U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x16U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x16U]))) {
        ++(vlSymsp->__Vcoverage[4370]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x16U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x16U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x16U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x16U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x16U]))) {
        ++(vlSymsp->__Vcoverage[4371]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x16U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x16U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x16U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x17U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x17U]))) {
        ++(vlSymsp->__Vcoverage[4372]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x17U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x17U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x17U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x17U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x17U]))) {
        ++(vlSymsp->__Vcoverage[4373]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x17U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x17U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x17U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x17U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x17U]))) {
        ++(vlSymsp->__Vcoverage[4374]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x17U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x17U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x17U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x17U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x17U]))) {
        ++(vlSymsp->__Vcoverage[4375]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x17U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x17U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x17U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x17U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x17U]))) {
        ++(vlSymsp->__Vcoverage[4376]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x17U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x17U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x17U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x18U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x18U]))) {
        ++(vlSymsp->__Vcoverage[4377]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x18U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x18U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x18U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x18U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x18U]))) {
        ++(vlSymsp->__Vcoverage[4378]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x18U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x18U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x18U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x18U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x18U]))) {
        ++(vlSymsp->__Vcoverage[4379]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x18U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x18U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x18U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x18U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x18U]))) {
        ++(vlSymsp->__Vcoverage[4380]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x18U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x18U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x18U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x18U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x18U]))) {
        ++(vlSymsp->__Vcoverage[4381]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x18U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x18U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x18U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x19U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x19U]))) {
        ++(vlSymsp->__Vcoverage[4382]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x19U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x19U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x19U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x19U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x19U]))) {
        ++(vlSymsp->__Vcoverage[4383]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x19U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x19U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x19U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x19U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x19U]))) {
        ++(vlSymsp->__Vcoverage[4384]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x19U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x19U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x19U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x19U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x19U]))) {
        ++(vlSymsp->__Vcoverage[4385]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x19U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x19U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x19U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x19U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x19U]))) {
        ++(vlSymsp->__Vcoverage[4386]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x19U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x19U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x19U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1aU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[4387]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1aU] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1aU]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1aU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1aU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[4388]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1aU] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1aU]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1aU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1aU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[4389]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1aU] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1aU]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1aU]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1aU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[4390]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1aU] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1aU]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1aU]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x1aU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[4391]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1aU] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1aU]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1aU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1bU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[4392]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1bU] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1bU]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1bU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1bU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[4393]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1bU] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1bU]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1bU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1bU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[4394]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1bU] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1bU]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1bU]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1bU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[4395]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1bU] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1bU]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1bU]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x1bU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[4396]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1bU] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1bU]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1bU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1cU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[4397]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1cU] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1cU]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1cU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1cU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[4398]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1cU] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1cU]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1cU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1cU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[4399]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1cU] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1cU]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1cU]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1cU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[4400]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1cU] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1cU]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1cU]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x1cU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[4401]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1cU] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1cU]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1cU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1dU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[4402]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1dU] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1dU]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1dU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1dU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[4403]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1dU] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1dU]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1dU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1dU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[4404]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1dU] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1dU]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1dU]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1dU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[4405]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1dU] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1dU]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1dU]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x1dU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[4406]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1dU] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1dU]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1dU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1eU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[4407]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1eU] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1eU]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1eU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1eU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[4408]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1eU] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1eU]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1eU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1eU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[4409]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1eU] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1eU]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1eU]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1eU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[4410]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1eU] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1eU]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1eU]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x1eU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[4411]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1eU] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1eU]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1eU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1fU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[4412]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1fU] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1fU]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1fU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1fU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[4413]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1fU] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1fU]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1fU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1fU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[4414]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1fU] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1fU]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1fU]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x1fU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[4415]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1fU] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1fU]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1fU]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x1fU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[4416]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x1fU] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x1fU]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x1fU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x20U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x20U]))) {
        ++(vlSymsp->__Vcoverage[4417]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x20U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x20U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x20U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x20U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x20U]))) {
        ++(vlSymsp->__Vcoverage[4418]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x20U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x20U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x20U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x20U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x20U]))) {
        ++(vlSymsp->__Vcoverage[4419]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x20U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x20U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x20U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x20U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x20U]))) {
        ++(vlSymsp->__Vcoverage[4420]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x20U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x20U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x20U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x20U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x20U]))) {
        ++(vlSymsp->__Vcoverage[4421]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x20U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x20U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x20U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x21U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x21U]))) {
        ++(vlSymsp->__Vcoverage[4422]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x21U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x21U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x21U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x21U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x21U]))) {
        ++(vlSymsp->__Vcoverage[4423]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x21U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x21U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x21U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x21U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x21U]))) {
        ++(vlSymsp->__Vcoverage[4424]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x21U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x21U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x21U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x21U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x21U]))) {
        ++(vlSymsp->__Vcoverage[4425]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x21U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x21U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x21U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x21U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x21U]))) {
        ++(vlSymsp->__Vcoverage[4426]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x21U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x21U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x21U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x22U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x22U]))) {
        ++(vlSymsp->__Vcoverage[4427]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x22U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x22U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x22U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x22U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x22U]))) {
        ++(vlSymsp->__Vcoverage[4428]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x22U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x22U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x22U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x22U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x22U]))) {
        ++(vlSymsp->__Vcoverage[4429]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x22U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x22U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x22U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x22U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x22U]))) {
        ++(vlSymsp->__Vcoverage[4430]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x22U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x22U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x22U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x22U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x22U]))) {
        ++(vlSymsp->__Vcoverage[4431]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x22U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x22U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x22U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x23U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x23U]))) {
        ++(vlSymsp->__Vcoverage[4432]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x23U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x23U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x23U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x23U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x23U]))) {
        ++(vlSymsp->__Vcoverage[4433]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x23U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x23U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x23U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x23U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x23U]))) {
        ++(vlSymsp->__Vcoverage[4434]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x23U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x23U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x23U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x23U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x23U]))) {
        ++(vlSymsp->__Vcoverage[4435]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x23U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x23U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x23U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x23U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x23U]))) {
        ++(vlSymsp->__Vcoverage[4436]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x23U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x23U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x23U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x24U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x24U]))) {
        ++(vlSymsp->__Vcoverage[4437]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x24U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x24U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x24U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x24U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x24U]))) {
        ++(vlSymsp->__Vcoverage[4438]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x24U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x24U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x24U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x24U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x24U]))) {
        ++(vlSymsp->__Vcoverage[4439]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x24U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x24U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x24U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x24U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x24U]))) {
        ++(vlSymsp->__Vcoverage[4440]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x24U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x24U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x24U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x24U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x24U]))) {
        ++(vlSymsp->__Vcoverage[4441]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x24U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x24U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x24U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x25U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x25U]))) {
        ++(vlSymsp->__Vcoverage[4442]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x25U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x25U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x25U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x25U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x25U]))) {
        ++(vlSymsp->__Vcoverage[4443]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x25U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x25U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x25U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x25U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x25U]))) {
        ++(vlSymsp->__Vcoverage[4444]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x25U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x25U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x25U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x25U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x25U]))) {
        ++(vlSymsp->__Vcoverage[4445]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x25U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x25U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x25U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x25U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x25U]))) {
        ++(vlSymsp->__Vcoverage[4446]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x25U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x25U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x25U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x26U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x26U]))) {
        ++(vlSymsp->__Vcoverage[4447]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x26U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x26U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x26U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x26U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x26U]))) {
        ++(vlSymsp->__Vcoverage[4448]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x26U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x26U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x26U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x26U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x26U]))) {
        ++(vlSymsp->__Vcoverage[4449]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x26U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x26U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x26U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x26U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x26U]))) {
        ++(vlSymsp->__Vcoverage[4450]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x26U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x26U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x26U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x26U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x26U]))) {
        ++(vlSymsp->__Vcoverage[4451]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x26U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x26U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x26U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x27U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x27U]))) {
        ++(vlSymsp->__Vcoverage[4452]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x27U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x27U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x27U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x27U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x27U]))) {
        ++(vlSymsp->__Vcoverage[4453]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x27U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x27U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x27U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x27U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x27U]))) {
        ++(vlSymsp->__Vcoverage[4454]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x27U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x27U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x27U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x27U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x27U]))) {
        ++(vlSymsp->__Vcoverage[4455]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x27U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x27U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x27U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x27U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x27U]))) {
        ++(vlSymsp->__Vcoverage[4456]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x27U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x27U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x27U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x28U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x28U]))) {
        ++(vlSymsp->__Vcoverage[4457]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x28U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x28U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x28U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x28U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x28U]))) {
        ++(vlSymsp->__Vcoverage[4458]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x28U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x28U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x28U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x28U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x28U]))) {
        ++(vlSymsp->__Vcoverage[4459]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x28U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x28U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x28U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x28U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x28U]))) {
        ++(vlSymsp->__Vcoverage[4460]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x28U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x28U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x28U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x28U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x28U]))) {
        ++(vlSymsp->__Vcoverage[4461]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x28U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x28U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x28U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x29U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x29U]))) {
        ++(vlSymsp->__Vcoverage[4462]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x29U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x29U]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x29U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x29U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x29U]))) {
        ++(vlSymsp->__Vcoverage[4463]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x29U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x29U]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x29U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x29U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x29U]))) {
        ++(vlSymsp->__Vcoverage[4464]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x29U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x29U]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x29U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x29U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x29U]))) {
        ++(vlSymsp->__Vcoverage[4465]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x29U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x29U]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x29U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x29U] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x29U]))) {
        ++(vlSymsp->__Vcoverage[4466]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x29U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x29U]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x29U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x2aU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x2aU]))) {
        ++(vlSymsp->__Vcoverage[4467]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x2aU] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x2aU]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x2aU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x2aU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x2aU]))) {
        ++(vlSymsp->__Vcoverage[4468]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x2aU] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x2aU]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x2aU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x2aU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x2aU]))) {
        ++(vlSymsp->__Vcoverage[4469]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x2aU] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x2aU]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x2aU]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x2aU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x2aU]))) {
        ++(vlSymsp->__Vcoverage[4470]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x2aU] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x2aU]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x2aU]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x2aU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x2aU]))) {
        ++(vlSymsp->__Vcoverage[4471]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x2aU] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x2aU]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x2aU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x2bU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x2bU]))) {
        ++(vlSymsp->__Vcoverage[4472]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x2bU] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x2bU]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x2bU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x2bU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x2bU]))) {
        ++(vlSymsp->__Vcoverage[4473]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x2bU] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x2bU]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x2bU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x2bU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x2bU]))) {
        ++(vlSymsp->__Vcoverage[4474]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x2bU] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x2bU]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x2bU]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x2bU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x2bU]))) {
        ++(vlSymsp->__Vcoverage[4475]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x2bU] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x2bU]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x2bU]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x2bU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x2bU]))) {
        ++(vlSymsp->__Vcoverage[4476]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x2bU] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x2bU]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x2bU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x2cU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x2cU]))) {
        ++(vlSymsp->__Vcoverage[4477]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x2cU] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x2cU]) | (1U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x2cU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x2cU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x2cU]))) {
        ++(vlSymsp->__Vcoverage[4478]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x2cU] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x2cU]) | (2U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x2cU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x2cU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x2cU]))) {
        ++(vlSymsp->__Vcoverage[4479]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x2cU] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x2cU]) | (4U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x2cU]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
               [0x2cU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
               [0x2cU]))) {
        ++(vlSymsp->__Vcoverage[4480]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x2cU] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x2cU]) | (8U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x2cU]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                  [0x2cU] ^ vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                  [0x2cU]))) {
        ++(vlSymsp->__Vcoverage[4481]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list[0x2cU] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__data_list
                [0x2cU]) | (0x10U & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
                            [0x2cU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[4078]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[4079]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[4080]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[4081]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[4082]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[4083]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[1U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [1U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[4084]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[4085]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [2U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[4086]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[2U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [2U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[4087]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[4088]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [3U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[4089]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[3U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [3U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [3U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[4090]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[4091]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [4U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[4092]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[4U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [4U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [4U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[4093]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[4094]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [5U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[4095]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[5U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [5U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [5U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[4096]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[4097]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [6U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[4098]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[6U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [6U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [6U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[4099]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[4100]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [7U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [7U]))) {
        ++(vlSymsp->__Vcoverage[4101]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[7U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [7U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [7U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[4102]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [8U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[4103]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [8U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [8U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [8U]))) {
        ++(vlSymsp->__Vcoverage[4104]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[8U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [8U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [8U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [9U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [9U]))) {
        ++(vlSymsp->__Vcoverage[4105]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[9U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [9U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [9U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [9U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [9U]))) {
        ++(vlSymsp->__Vcoverage[4106]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[9U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [9U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [9U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [9U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [9U]))) {
        ++(vlSymsp->__Vcoverage[4107]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[9U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [9U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                         [9U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xaU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[4108]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xaU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xaU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xaU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xaU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[4109]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xaU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xaU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xaU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xaU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xaU]))) {
        ++(vlSymsp->__Vcoverage[4110]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xaU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xaU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xaU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xbU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[4111]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xbU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xbU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xbU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xbU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[4112]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xbU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xbU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xbU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xbU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xbU]))) {
        ++(vlSymsp->__Vcoverage[4113]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xbU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xbU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xbU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xcU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[4114]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xcU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xcU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xcU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xcU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[4115]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xcU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xcU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xcU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xcU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xcU]))) {
        ++(vlSymsp->__Vcoverage[4116]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xcU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xcU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xcU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xdU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[4117]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xdU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xdU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xdU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xdU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[4118]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xdU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xdU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xdU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xdU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xdU]))) {
        ++(vlSymsp->__Vcoverage[4119]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xdU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xdU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xdU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xeU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[4120]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xeU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xeU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xeU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xeU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[4121]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xeU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xeU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xeU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xeU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xeU]))) {
        ++(vlSymsp->__Vcoverage[4122]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xeU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xeU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xeU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xfU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[4123]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xfU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xfU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xfU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xfU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[4124]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xfU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xfU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xfU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0xfU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0xfU]))) {
        ++(vlSymsp->__Vcoverage[4125]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0xfU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0xfU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                           [0xfU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x10U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x10U]))) {
        ++(vlSymsp->__Vcoverage[4126]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x10U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x10U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x10U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x10U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x10U]))) {
        ++(vlSymsp->__Vcoverage[4127]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x10U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x10U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x10U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x10U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x10U]))) {
        ++(vlSymsp->__Vcoverage[4128]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x10U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x10U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x10U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x11U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x11U]))) {
        ++(vlSymsp->__Vcoverage[4129]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x11U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x11U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x11U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x11U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x11U]))) {
        ++(vlSymsp->__Vcoverage[4130]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x11U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x11U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x11U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x11U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x11U]))) {
        ++(vlSymsp->__Vcoverage[4131]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x11U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x11U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x11U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x12U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x12U]))) {
        ++(vlSymsp->__Vcoverage[4132]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x12U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x12U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x12U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x12U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x12U]))) {
        ++(vlSymsp->__Vcoverage[4133]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x12U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x12U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x12U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x12U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x12U]))) {
        ++(vlSymsp->__Vcoverage[4134]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x12U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x12U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x12U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x13U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x13U]))) {
        ++(vlSymsp->__Vcoverage[4135]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x13U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x13U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x13U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x13U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x13U]))) {
        ++(vlSymsp->__Vcoverage[4136]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x13U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x13U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x13U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x13U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x13U]))) {
        ++(vlSymsp->__Vcoverage[4137]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x13U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x13U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x13U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x14U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x14U]))) {
        ++(vlSymsp->__Vcoverage[4138]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x14U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x14U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x14U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x14U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x14U]))) {
        ++(vlSymsp->__Vcoverage[4139]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x14U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x14U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x14U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x14U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x14U]))) {
        ++(vlSymsp->__Vcoverage[4140]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x14U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x14U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x14U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x15U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x15U]))) {
        ++(vlSymsp->__Vcoverage[4141]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x15U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x15U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x15U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x15U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x15U]))) {
        ++(vlSymsp->__Vcoverage[4142]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x15U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x15U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x15U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x15U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x15U]))) {
        ++(vlSymsp->__Vcoverage[4143]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x15U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x15U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x15U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x16U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x16U]))) {
        ++(vlSymsp->__Vcoverage[4144]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x16U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x16U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x16U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x16U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x16U]))) {
        ++(vlSymsp->__Vcoverage[4145]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x16U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x16U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x16U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x16U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x16U]))) {
        ++(vlSymsp->__Vcoverage[4146]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x16U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x16U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x16U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x17U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x17U]))) {
        ++(vlSymsp->__Vcoverage[4147]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x17U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x17U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x17U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x17U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x17U]))) {
        ++(vlSymsp->__Vcoverage[4148]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x17U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x17U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x17U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x17U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x17U]))) {
        ++(vlSymsp->__Vcoverage[4149]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x17U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x17U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x17U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x18U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x18U]))) {
        ++(vlSymsp->__Vcoverage[4150]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x18U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x18U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x18U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x18U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x18U]))) {
        ++(vlSymsp->__Vcoverage[4151]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x18U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x18U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x18U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x18U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x18U]))) {
        ++(vlSymsp->__Vcoverage[4152]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x18U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x18U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x18U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x19U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x19U]))) {
        ++(vlSymsp->__Vcoverage[4153]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x19U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x19U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x19U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x19U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x19U]))) {
        ++(vlSymsp->__Vcoverage[4154]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x19U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x19U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x19U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x19U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x19U]))) {
        ++(vlSymsp->__Vcoverage[4155]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x19U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x19U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x19U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1aU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[4156]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1aU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1aU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1aU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1aU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[4157]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1aU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1aU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1aU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1aU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1aU]))) {
        ++(vlSymsp->__Vcoverage[4158]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1aU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1aU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1aU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1bU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[4159]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1bU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1bU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1bU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1bU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[4160]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1bU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1bU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1bU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1bU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1bU]))) {
        ++(vlSymsp->__Vcoverage[4161]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1bU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1bU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1bU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1cU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[4162]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1cU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1cU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1cU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1cU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[4163]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1cU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1cU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1cU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1cU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1cU]))) {
        ++(vlSymsp->__Vcoverage[4164]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1cU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1cU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1cU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1dU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[4165]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1dU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1dU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1dU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1dU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[4166]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1dU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1dU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1dU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1dU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1dU]))) {
        ++(vlSymsp->__Vcoverage[4167]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1dU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1dU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1dU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1eU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[4168]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1eU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1eU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1eU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1eU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[4169]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1eU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1eU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1eU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1eU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1eU]))) {
        ++(vlSymsp->__Vcoverage[4170]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1eU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1eU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1eU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1fU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[4171]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1fU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1fU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1fU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1fU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[4172]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1fU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1fU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1fU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x1fU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x1fU]))) {
        ++(vlSymsp->__Vcoverage[4173]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x1fU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x1fU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x1fU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x20U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x20U]))) {
        ++(vlSymsp->__Vcoverage[4174]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x20U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x20U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x20U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x20U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x20U]))) {
        ++(vlSymsp->__Vcoverage[4175]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x20U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x20U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x20U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x20U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x20U]))) {
        ++(vlSymsp->__Vcoverage[4176]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x20U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x20U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x20U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x21U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x21U]))) {
        ++(vlSymsp->__Vcoverage[4177]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x21U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x21U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x21U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x21U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x21U]))) {
        ++(vlSymsp->__Vcoverage[4178]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x21U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x21U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x21U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x21U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x21U]))) {
        ++(vlSymsp->__Vcoverage[4179]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x21U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x21U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x21U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x22U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x22U]))) {
        ++(vlSymsp->__Vcoverage[4180]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x22U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x22U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x22U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x22U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x22U]))) {
        ++(vlSymsp->__Vcoverage[4181]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x22U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x22U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x22U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x22U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x22U]))) {
        ++(vlSymsp->__Vcoverage[4182]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x22U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x22U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x22U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x23U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x23U]))) {
        ++(vlSymsp->__Vcoverage[4183]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x23U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x23U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x23U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x23U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x23U]))) {
        ++(vlSymsp->__Vcoverage[4184]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x23U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x23U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x23U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x23U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x23U]))) {
        ++(vlSymsp->__Vcoverage[4185]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x23U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x23U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x23U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x24U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x24U]))) {
        ++(vlSymsp->__Vcoverage[4186]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x24U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x24U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x24U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x24U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x24U]))) {
        ++(vlSymsp->__Vcoverage[4187]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x24U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x24U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x24U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x24U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x24U]))) {
        ++(vlSymsp->__Vcoverage[4188]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x24U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x24U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x24U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x25U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x25U]))) {
        ++(vlSymsp->__Vcoverage[4189]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x25U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x25U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x25U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x25U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x25U]))) {
        ++(vlSymsp->__Vcoverage[4190]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x25U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x25U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x25U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x25U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x25U]))) {
        ++(vlSymsp->__Vcoverage[4191]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x25U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x25U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x25U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x26U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x26U]))) {
        ++(vlSymsp->__Vcoverage[4192]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x26U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x26U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x26U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x26U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x26U]))) {
        ++(vlSymsp->__Vcoverage[4193]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x26U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x26U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x26U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x26U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x26U]))) {
        ++(vlSymsp->__Vcoverage[4194]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x26U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x26U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x26U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x27U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x27U]))) {
        ++(vlSymsp->__Vcoverage[4195]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x27U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x27U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x27U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x27U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x27U]))) {
        ++(vlSymsp->__Vcoverage[4196]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x27U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x27U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x27U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x27U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x27U]))) {
        ++(vlSymsp->__Vcoverage[4197]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x27U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x27U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x27U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x28U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x28U]))) {
        ++(vlSymsp->__Vcoverage[4198]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x28U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x28U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x28U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x28U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x28U]))) {
        ++(vlSymsp->__Vcoverage[4199]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x28U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x28U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x28U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x28U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x28U]))) {
        ++(vlSymsp->__Vcoverage[4200]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x28U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x28U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x28U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x29U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x29U]))) {
        ++(vlSymsp->__Vcoverage[4201]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x29U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x29U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x29U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x29U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x29U]))) {
        ++(vlSymsp->__Vcoverage[4202]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x29U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x29U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x29U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x29U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x29U]))) {
        ++(vlSymsp->__Vcoverage[4203]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x29U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x29U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x29U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2aU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2aU]))) {
        ++(vlSymsp->__Vcoverage[4204]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2aU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2aU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2aU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2aU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2aU]))) {
        ++(vlSymsp->__Vcoverage[4205]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2aU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2aU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2aU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2aU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2aU]))) {
        ++(vlSymsp->__Vcoverage[4206]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2aU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2aU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2aU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2bU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2bU]))) {
        ++(vlSymsp->__Vcoverage[4207]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2bU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2bU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2bU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2bU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2bU]))) {
        ++(vlSymsp->__Vcoverage[4208]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2bU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2bU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2bU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2bU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2bU]))) {
        ++(vlSymsp->__Vcoverage[4209]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2bU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2bU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2bU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2cU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2cU]))) {
        ++(vlSymsp->__Vcoverage[4210]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2cU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2cU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2cU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2cU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2cU]))) {
        ++(vlSymsp->__Vcoverage[4211]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2cU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2cU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2cU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2cU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2cU]))) {
        ++(vlSymsp->__Vcoverage[4212]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2cU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2cU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2cU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2dU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2dU]))) {
        ++(vlSymsp->__Vcoverage[4213]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2dU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2dU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2dU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2dU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2dU]))) {
        ++(vlSymsp->__Vcoverage[4214]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2dU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2dU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2dU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2dU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2dU]))) {
        ++(vlSymsp->__Vcoverage[4215]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2dU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2dU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2dU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2eU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2eU]))) {
        ++(vlSymsp->__Vcoverage[4216]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2eU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2eU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2eU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2eU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2eU]))) {
        ++(vlSymsp->__Vcoverage[4217]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2eU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2eU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2eU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2eU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2eU]))) {
        ++(vlSymsp->__Vcoverage[4218]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2eU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2eU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2eU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2fU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2fU]))) {
        ++(vlSymsp->__Vcoverage[4219]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2fU] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2fU]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2fU]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2fU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2fU]))) {
        ++(vlSymsp->__Vcoverage[4220]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2fU] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2fU]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2fU]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x2fU] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x2fU]))) {
        ++(vlSymsp->__Vcoverage[4221]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x2fU] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x2fU]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x2fU]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x30U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x30U]))) {
        ++(vlSymsp->__Vcoverage[4222]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x30U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x30U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x30U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x30U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x30U]))) {
        ++(vlSymsp->__Vcoverage[4223]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x30U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x30U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x30U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x30U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x30U]))) {
        ++(vlSymsp->__Vcoverage[4224]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x30U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x30U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x30U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x31U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x31U]))) {
        ++(vlSymsp->__Vcoverage[4225]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x31U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x31U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x31U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x31U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x31U]))) {
        ++(vlSymsp->__Vcoverage[4226]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x31U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x31U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x31U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x31U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x31U]))) {
        ++(vlSymsp->__Vcoverage[4227]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x31U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x31U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x31U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x32U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x32U]))) {
        ++(vlSymsp->__Vcoverage[4228]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x32U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x32U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x32U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x32U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x32U]))) {
        ++(vlSymsp->__Vcoverage[4229]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x32U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x32U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x32U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x32U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x32U]))) {
        ++(vlSymsp->__Vcoverage[4230]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x32U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x32U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x32U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x33U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x33U]))) {
        ++(vlSymsp->__Vcoverage[4231]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x33U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x33U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x33U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x33U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x33U]))) {
        ++(vlSymsp->__Vcoverage[4232]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x33U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x33U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x33U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x33U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x33U]))) {
        ++(vlSymsp->__Vcoverage[4233]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x33U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x33U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x33U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x34U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x34U]))) {
        ++(vlSymsp->__Vcoverage[4234]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x34U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x34U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x34U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x34U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x34U]))) {
        ++(vlSymsp->__Vcoverage[4235]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x34U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x34U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x34U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x34U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x34U]))) {
        ++(vlSymsp->__Vcoverage[4236]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x34U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x34U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x34U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x35U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x35U]))) {
        ++(vlSymsp->__Vcoverage[4237]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x35U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x35U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x35U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x35U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x35U]))) {
        ++(vlSymsp->__Vcoverage[4238]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x35U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x35U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x35U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x35U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x35U]))) {
        ++(vlSymsp->__Vcoverage[4239]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x35U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x35U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x35U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x36U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x36U]))) {
        ++(vlSymsp->__Vcoverage[4240]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x36U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x36U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x36U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x36U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x36U]))) {
        ++(vlSymsp->__Vcoverage[4241]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x36U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x36U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x36U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x36U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x36U]))) {
        ++(vlSymsp->__Vcoverage[4242]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x36U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x36U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x36U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x37U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x37U]))) {
        ++(vlSymsp->__Vcoverage[4243]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x37U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x37U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x37U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x37U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x37U]))) {
        ++(vlSymsp->__Vcoverage[4244]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x37U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x37U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x37U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x37U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x37U]))) {
        ++(vlSymsp->__Vcoverage[4245]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x37U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x37U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x37U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x38U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x38U]))) {
        ++(vlSymsp->__Vcoverage[4246]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x38U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x38U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x38U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x38U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x38U]))) {
        ++(vlSymsp->__Vcoverage[4247]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x38U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x38U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x38U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
               [0x38U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
               [0x38U]))) {
        ++(vlSymsp->__Vcoverage[4248]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list[0x38U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__data_list
                [0x38U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
                            [0x38U]));
    }
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4253]);
    ++(vlSymsp->__Vcoverage[4255]);
    ++(vlSymsp->__Vcoverage[4256]);
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__i = 0x39U;
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x24U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x25U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x26U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x27U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x27U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x27U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x28U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x28U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x28U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x29U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x29U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x29U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x2aU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x2aU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x2aU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x2bU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x2bU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x2bU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x2cU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x2cU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x2cU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x2dU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x2dU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x2dU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x2eU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x2eU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x2eU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x2fU]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x2fU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x2fU]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x30U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x30U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x30U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x31U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x31U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x31U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x32U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x32U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x32U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x33U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x33U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x33U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x34U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x34U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x34U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x35U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x35U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x35U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x36U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x36U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x36U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x37U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x37U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x37U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                          [0x38U]))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [0x38U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [0x38U]));
    vlSelf->top__DOT__de__DOT__Type = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit)
                                        ? (IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out)
                                        : 7U);
    if (((IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[5101]);
        vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5089]);
        vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffeU & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5090]);
        vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffdU & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5091]);
        vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffbU & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5092]);
        vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xff7U & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5093]);
        vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfefU & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5094]);
        vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x20U & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5095]);
        vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x40U & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5096]);
        vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x80U & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5097]);
        vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xeffU & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x100U & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5098]);
        vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xdffU & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x200U & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5099]);
        vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xbffU & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x400U & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5100]);
        vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x800U & (IData)(vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__lut_out)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__rcsraddr1) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1 
            = ((0xffeU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__rcsraddr1)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__rcsraddr1) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1 
            = ((0xffdU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__rcsraddr1)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__rcsraddr1) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1 
            = ((0xffbU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__rcsraddr1)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__rcsraddr1) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1 
            = ((0xff7U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__rcsraddr1)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__rcsraddr1) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1 
            = ((0xfefU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__rcsraddr1)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__de__DOT__rcsraddr1) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)) 
               | (0x20U & (IData)(vlSelf->top__DOT__de__DOT__rcsraddr1)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__de__DOT__rcsraddr1) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)) 
               | (0x40U & (IData)(vlSelf->top__DOT__de__DOT__rcsraddr1)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__de__DOT__rcsraddr1) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)) 
               | (0x80U & (IData)(vlSelf->top__DOT__de__DOT__rcsraddr1)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__de__DOT__rcsraddr1) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1 
            = ((0xeffU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)) 
               | (0x100U & (IData)(vlSelf->top__DOT__de__DOT__rcsraddr1)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__de__DOT__rcsraddr1) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1 
            = ((0xdffU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)) 
               | (0x200U & (IData)(vlSelf->top__DOT__de__DOT__rcsraddr1)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__de__DOT__rcsraddr1) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1 
            = ((0xbffU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)) 
               | (0x400U & (IData)(vlSelf->top__DOT__de__DOT__rcsraddr1)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__de__DOT__rcsraddr1) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__rcsraddr1)) 
               | (0x800U & (IData)(vlSelf->top__DOT__de__DOT__rcsraddr1)));
    }
    if (((IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[6882]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6874]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfeU & (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6875]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfdU & (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6876]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfbU & (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6877]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xf7U & (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6878]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xefU & (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6879]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xdfU & (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x20U & (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6880]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xbfU & (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x40U & (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6881]);
        vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x7fU & (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x80U & (IData)(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__mwmask) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mwmask)))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwmask 
            = ((0xfeU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mwmask)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__mwmask)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__mwmask) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mwmask)))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwmask 
            = ((0xfdU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mwmask)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__mwmask)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__mwmask) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mwmask)))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwmask 
            = ((0xfbU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mwmask)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__mwmask)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__mwmask) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mwmask)))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwmask 
            = ((0xf7U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mwmask)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__mwmask)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__mwmask) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mwmask)))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwmask 
            = ((0xefU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mwmask)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__mwmask)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__de__DOT__mwmask) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mwmask)))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwmask 
            = ((0xdfU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mwmask)) 
               | (0x20U & (IData)(vlSelf->top__DOT__de__DOT__mwmask)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__de__DOT__mwmask) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mwmask)))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwmask 
            = ((0xbfU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mwmask)) 
               | (0x40U & (IData)(vlSelf->top__DOT__de__DOT__mwmask)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__de__DOT__mwmask) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mwmask)))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mwmask 
            = ((0x7fU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__mwmask)) 
               | (0x80U & (IData)(vlSelf->top__DOT__de__DOT__mwmask)));
    }
    if (((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[4252]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4249]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((6U & (IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4250]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((5U & (IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4251]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((3U & (IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__Type)))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type 
            = ((6U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__Type)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__Type)))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type 
            = ((5U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__Type)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__Type)))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type 
            = ((3U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__Type)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x20U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x40U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x80U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x100U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x200U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x400U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x800U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x1000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x2000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x4000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x8000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x10000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x10000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x20000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x20000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x40000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x40000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x80000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x80000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x100000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x100000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x200000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x200000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x400000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x400000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x800000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x800000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x1000000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x1000000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x2000000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x2000000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x4000000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x4000000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x8000000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x8000000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x10000000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x10000000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x20000000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x20000000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((0x40000000U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x40000000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((((IData)(vlSelf->top__DOT__de__DOT__Type) 
          ^ vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type_return 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Type_return) 
               | (0x80000000U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__13(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__13\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__de__DOT__r0__DOT__rf__v0;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__de__DOT__r0__DOT__csrs__v0;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__de__DOT__r0__DOT__csrs__v1;
    QData/*63:0*/ __Vdlyvval__top__DOT__de__DOT__r0__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__de__DOT__r0__DOT__csrs__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__de__DOT__r0__DOT__csrs__v1;
    // Body
    ++(vlSymsp->__Vcoverage[102]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->cpupc = 0x80000000U;
    } else {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->cpupc = vlSelf->top__DOT__dnpc;
    }
    ++(vlSymsp->__Vcoverage[4075]);
    ++(vlSymsp->__Vcoverage[4077]);
    ++(vlSymsp->__Vcoverage[4072]);
    ++(vlSymsp->__Vcoverage[4074]);
    __Vdlyvval__top__DOT__de__DOT__r0__DOT__rf__v0 
        = vlSelf->top__DOT__de__DOT__wdata;
    __Vdlyvdim0__top__DOT__de__DOT__r0__DOT__rf__v0 
        = vlSelf->top__DOT__de__DOT__waddr;
    __Vdlyvval__top__DOT__de__DOT__r0__DOT__csrs__v0 
        = vlSelf->top__DOT__de__DOT__wcsrdata1;
    __Vdlyvdim0__top__DOT__de__DOT__r0__DOT__csrs__v0 
        = vlSelf->top__DOT__de__DOT__wcsraddr1;
    __Vdlyvval__top__DOT__de__DOT__r0__DOT__csrs__v1 
        = vlSelf->top__DOT__de__DOT__wcsrdata2;
    __Vdlyvdim0__top__DOT__de__DOT__r0__DOT__csrs__v1 
        = vlSelf->top__DOT__de__DOT__wcsraddr2;
    vlSelf->top__DOT__de__DOT__r0__DOT__csrs[__Vdlyvdim0__top__DOT__de__DOT__r0__DOT__csrs__v0] 
        = __Vdlyvval__top__DOT__de__DOT__r0__DOT__csrs__v0;
    vlSelf->top__DOT__de__DOT__r0__DOT__csrs[__Vdlyvdim0__top__DOT__de__DOT__r0__DOT__csrs__v1] 
        = __Vdlyvval__top__DOT__de__DOT__r0__DOT__csrs__v1;
    vlSelf->top__DOT__de__DOT__r0__DOT__rf[__Vdlyvdim0__top__DOT__de__DOT__r0__DOT__rf__v0] 
        = __Vdlyvval__top__DOT__de__DOT__r0__DOT__rf__v0;
    vlSelf->top__DOT__de__DOT__r0__DOT__rf[0U] = 0ULL;
    if ((2U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6326]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (2U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((4U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6327]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (4U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((8U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6328]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (8U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6329]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x10U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6330]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x20U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6331]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x40U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6332]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x80U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6333]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x100U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6334]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x200U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6335]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x400U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6336]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x800U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6337]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x1000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6338]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x2000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6339]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x4000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6340]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x8000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->cpupc) 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6341]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x10000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->cpupc) 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6342]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x20000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->cpupc) 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6343]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x40000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->cpupc) 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6344]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x80000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->cpupc) 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6345]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x100000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->cpupc) 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6346]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x200000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->cpupc) 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6347]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x400000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->cpupc) 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6348]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x800000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->cpupc) 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6349]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x1000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->cpupc) 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6350]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x2000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->cpupc) 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6351]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x4000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->cpupc) 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6352]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x8000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->cpupc) 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6353]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x10000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->cpupc) 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6354]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x20000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->cpupc) 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[6355]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x40000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if (((((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6356]);
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
        ++(vlSymsp->__Vcoverage[2790]);
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
        ++(vlSymsp->__Vcoverage[2791]);
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
        ++(vlSymsp->__Vcoverage[2792]);
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
        ++(vlSymsp->__Vcoverage[2793]);
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
        ++(vlSymsp->__Vcoverage[2794]);
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
        ++(vlSymsp->__Vcoverage[2795]);
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
        ++(vlSymsp->__Vcoverage[2796]);
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
        ++(vlSymsp->__Vcoverage[2797]);
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
        ++(vlSymsp->__Vcoverage[2798]);
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
        ++(vlSymsp->__Vcoverage[2799]);
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
        ++(vlSymsp->__Vcoverage[2800]);
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
        ++(vlSymsp->__Vcoverage[2801]);
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
        ++(vlSymsp->__Vcoverage[2802]);
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
        ++(vlSymsp->__Vcoverage[2803]);
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
        ++(vlSymsp->__Vcoverage[2804]);
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
        ++(vlSymsp->__Vcoverage[2805]);
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
        ++(vlSymsp->__Vcoverage[2806]);
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
        ++(vlSymsp->__Vcoverage[2807]);
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
        ++(vlSymsp->__Vcoverage[2808]);
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
        ++(vlSymsp->__Vcoverage[2809]);
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
        ++(vlSymsp->__Vcoverage[2810]);
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
        ++(vlSymsp->__Vcoverage[2811]);
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
        ++(vlSymsp->__Vcoverage[2812]);
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
        ++(vlSymsp->__Vcoverage[2813]);
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
        ++(vlSymsp->__Vcoverage[2814]);
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
        ++(vlSymsp->__Vcoverage[2815]);
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
        ++(vlSymsp->__Vcoverage[2816]);
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
        ++(vlSymsp->__Vcoverage[2817]);
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
        ++(vlSymsp->__Vcoverage[2818]);
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
        ++(vlSymsp->__Vcoverage[2819]);
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
        ++(vlSymsp->__Vcoverage[2820]);
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
        ++(vlSymsp->__Vcoverage[2821]);
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
        ++(vlSymsp->__Vcoverage[2822]);
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
        ++(vlSymsp->__Vcoverage[2823]);
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
        ++(vlSymsp->__Vcoverage[2824]);
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
        ++(vlSymsp->__Vcoverage[2825]);
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
        ++(vlSymsp->__Vcoverage[2826]);
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
        ++(vlSymsp->__Vcoverage[2827]);
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
        ++(vlSymsp->__Vcoverage[2828]);
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
        ++(vlSymsp->__Vcoverage[2829]);
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
        ++(vlSymsp->__Vcoverage[2830]);
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
        ++(vlSymsp->__Vcoverage[2831]);
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
        ++(vlSymsp->__Vcoverage[2832]);
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
        ++(vlSymsp->__Vcoverage[2833]);
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
        ++(vlSymsp->__Vcoverage[2834]);
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
        ++(vlSymsp->__Vcoverage[2835]);
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
        ++(vlSymsp->__Vcoverage[2836]);
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
        ++(vlSymsp->__Vcoverage[2837]);
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
        ++(vlSymsp->__Vcoverage[2838]);
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
        ++(vlSymsp->__Vcoverage[2839]);
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
        ++(vlSymsp->__Vcoverage[2840]);
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
        ++(vlSymsp->__Vcoverage[2841]);
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
        ++(vlSymsp->__Vcoverage[2842]);
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
        ++(vlSymsp->__Vcoverage[2843]);
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
        ++(vlSymsp->__Vcoverage[2844]);
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
        ++(vlSymsp->__Vcoverage[2845]);
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
        ++(vlSymsp->__Vcoverage[2846]);
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
        ++(vlSymsp->__Vcoverage[2847]);
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
        ++(vlSymsp->__Vcoverage[2848]);
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
        ++(vlSymsp->__Vcoverage[2849]);
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
        ++(vlSymsp->__Vcoverage[2850]);
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
        ++(vlSymsp->__Vcoverage[2851]);
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
        ++(vlSymsp->__Vcoverage[2852]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((QData)((IData)(vlSelf->cpupc))) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__upc)))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | (IData)((IData)((1U & (IData)((QData)((IData)(vlSelf->cpupc)))))));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[566]);
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
