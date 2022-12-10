// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___combo__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__3\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp59;
    VlWide<9>/*287:0*/ __Vtemp60;
    VlWide<5>/*159:0*/ __Vtemp62;
    VlWide<13>/*415:0*/ __Vtemp63;
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst) ^ (IData)(vlSelf->top__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->top__DOT____Vtogcov__rst = vlSelf->rst;
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
    vlSelf->top__DOT__de__DOT__Type = ((IData)((0x13U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->inst)))
                                        ? 1U : 7U);
    __Vtemp59[3U] = (((IData)((((QData)((IData)((vlSelf->inst 
                                                 >> 0x1fU))) 
                                << 0xbU) | (QData)((IData)(
                                                           ((0x400U 
                                                             & (vlSelf->inst 
                                                                << 3U)) 
                                                            | ((0x3f0U 
                                                                & (vlSelf->inst 
                                                                   >> 0x15U)) 
                                                               | (0xfU 
                                                                  & (vlSelf->inst 
                                                                     >> 8U)))))))) 
                      >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                              (vlSelf->inst 
                                                               >> 0x1fU))) 
                                              << 0xbU) 
                                             | (QData)((IData)(
                                                               ((0x400U 
                                                                 & (vlSelf->inst 
                                                                    << 3U)) 
                                                                | ((0x3f0U 
                                                                    & (vlSelf->inst 
                                                                       >> 0x15U)) 
                                                                   | (0xfU 
                                                                      & (vlSelf->inst 
                                                                         >> 8U))))))) 
                                            >> 0x20U)) 
                                   << 6U));
    __Vtemp60[5U] = ((0x3fU & ((IData)((((QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x19U))) 
                                         << 5U) | (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->inst 
                                                                      >> 7U)))))) 
                               >> 0x17U)) | ((0x1c0U 
                                              & ((IData)(
                                                         (((QData)((IData)(
                                                                           (vlSelf->inst 
                                                                            >> 0x19U))) 
                                                           << 5U) 
                                                          | (QData)((IData)(
                                                                            (0x1fU 
                                                                             & (vlSelf->inst 
                                                                                >> 7U)))))) 
                                                 >> 0x17U)) 
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
                                                << 9U)));
    __Vtemp60[6U] = (0x400U | ((0x3fU & ((IData)(((
                                                   ((QData)((IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0x19U))) 
                                                    << 5U) 
                                                   | (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelf->inst 
                                                                         >> 7U))))) 
                                                  >> 0x20U)) 
                                         >> 0x17U)) 
                               | (((IData)((QData)((IData)(
                                                           (vlSelf->inst 
                                                            >> 0x14U)))) 
                                   << 0xcU) | (0x1c0U 
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
                                                  >> 0x17U)))));
    __Vtemp60[7U] = ((0x3fU & ((IData)((QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0x14U)))) 
                               >> 0x14U)) | ((0x1c0U 
                                              & ((IData)((QData)((IData)(
                                                                         (vlSelf->inst 
                                                                          >> 0x14U)))) 
                                                 >> 0x14U)) 
                                             | ((0xe00U 
                                                 & ((IData)((QData)((IData)(
                                                                            (vlSelf->inst 
                                                                             >> 0x14U)))) 
                                                    >> 0x14U)) 
                                                | ((IData)(
                                                           ((QData)((IData)(
                                                                            (vlSelf->inst 
                                                                             >> 0x14U))) 
                                                            >> 0x20U)) 
                                                   << 0xcU))));
    __Vtemp60[8U] = (0x1000U | ((0x3fU & ((IData)(((QData)((IData)(
                                                                   (vlSelf->inst 
                                                                    >> 0x14U))) 
                                                   >> 0x20U)) 
                                          >> 0x14U)) 
                                | ((0x1c0U & ((IData)(
                                                      ((QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x14U))) 
                                                       >> 0x20U)) 
                                              >> 0x14U)) 
                                   | (0xe00U & ((IData)(
                                                        ((QData)((IData)(
                                                                         (vlSelf->inst 
                                                                          >> 0x14U))) 
                                                         >> 0x20U)) 
                                                >> 0x14U)))));
    __Vtemp62[3U] = (((IData)((((QData)((IData)((vlSelf->inst 
                                                 >> 0x1fU))) 
                                << 0x13U) | (QData)((IData)(
                                                            ((0x7f800U 
                                                              & (vlSelf->inst 
                                                                 >> 1U)) 
                                                             | ((0x400U 
                                                                 & (vlSelf->inst 
                                                                    >> 0xaU)) 
                                                                | (0x3ffU 
                                                                   & (vlSelf->inst 
                                                                      >> 0x15U)))))))) 
                      >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                              (vlSelf->inst 
                                                               >> 0x1fU))) 
                                              << 0x13U) 
                                             | (QData)((IData)(
                                                               ((0x7f800U 
                                                                 & (vlSelf->inst 
                                                                    >> 1U)) 
                                                                | ((0x400U 
                                                                    & (vlSelf->inst 
                                                                       >> 0xaU)) 
                                                                   | (0x3ffU 
                                                                      & (vlSelf->inst 
                                                                         >> 0x15U))))))) 
                                            >> 0x20U)) 
                                   << 3U));
    __Vtemp63[6U] = (0x100U | ((7U & ((IData)(((QData)((IData)(
                                                               (vlSelf->inst 
                                                                >> 0xcU))) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (((IData)((((QData)((IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                           << 0xbU) 
                                          | (QData)((IData)(
                                                            ((0x400U 
                                                              & (vlSelf->inst 
                                                                 << 3U)) 
                                                             | ((0x3f0U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x15U)) 
                                                                | (0xfU 
                                                                   & (vlSelf->inst 
                                                                      >> 8U)))))))) 
                                 << 9U) | (0x38U & 
                                           ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0xcU))) 
                                                     >> 0x20U)) 
                                            >> 0x1aU)))));
    __Vtemp63[8U] = (0x600U | ((__Vtemp59[3U] >> 0x1dU) 
                               | (((IData)((((QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x19U))) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->inst 
                                                                  >> 7U)))))) 
                                   << 0xcU) | (0x1f8U 
                                               & ((IData)(
                                                          ((((QData)((IData)(
                                                                             (vlSelf->inst 
                                                                              >> 0x1fU))) 
                                                             << 0xbU) 
                                                            | (QData)((IData)(
                                                                              ((0x400U 
                                                                                & (vlSelf->inst 
                                                                                << 3U)) 
                                                                               | ((0x3f0U 
                                                                                & (vlSelf->inst 
                                                                                >> 0x15U)) 
                                                                                | (0xfU 
                                                                                & (vlSelf->inst 
                                                                                >> 8U))))))) 
                                                           >> 0x20U)) 
                                                  >> 0x17U)))));
    __Vtemp63[9U] = ((7U & ((IData)((((QData)((IData)(
                                                      (vlSelf->inst 
                                                       >> 0x19U))) 
                                      << 5U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U)))))) 
                            >> 0x14U)) | (__Vtemp60[5U] 
                                          << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0U] = 0U;
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[1U] = 0U;
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[2U] 
        = (7U | ((IData)((((QData)((IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                           << 0x13U) | (QData)((IData)(
                                                       ((0x7f800U 
                                                         & (vlSelf->inst 
                                                            >> 1U)) 
                                                        | ((0x400U 
                                                            & (vlSelf->inst 
                                                               >> 0xaU)) 
                                                           | (0x3ffU 
                                                              & (vlSelf->inst 
                                                                 >> 0x15U)))))))) 
                 << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[3U] 
        = __Vtemp62[3U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[4U] 
        = (0x28U | (((IData)((QData)((IData)((vlSelf->inst 
                                              >> 0xcU)))) 
                     << 6U) | ((IData)(((((QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x1fU))) 
                                          << 0x13U) 
                                         | (QData)((IData)(
                                                           ((0x7f800U 
                                                             & (vlSelf->inst 
                                                                >> 1U)) 
                                                            | ((0x400U 
                                                                & (vlSelf->inst 
                                                                   >> 0xaU)) 
                                                               | (0x3ffU 
                                                                  & (vlSelf->inst 
                                                                     >> 0x15U))))))) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[5U] 
        = ((7U & ((IData)((QData)((IData)((vlSelf->inst 
                                           >> 0xcU)))) 
                  >> 0x1aU)) | ((0x38U & ((IData)((QData)((IData)(
                                                                  (vlSelf->inst 
                                                                   >> 0xcU)))) 
                                          >> 0x1aU)) 
                                | ((IData)(((QData)((IData)(
                                                            (vlSelf->inst 
                                                             >> 0xcU))) 
                                            >> 0x20U)) 
                                   << 6U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[6U] 
        = __Vtemp63[6U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[7U] 
        = ((7U & ((IData)((((QData)((IData)((vlSelf->inst 
                                             >> 0x1fU))) 
                            << 0xbU) | (QData)((IData)(
                                                       ((0x400U 
                                                         & (vlSelf->inst 
                                                            << 3U)) 
                                                        | ((0x3f0U 
                                                            & (vlSelf->inst 
                                                               >> 0x15U)) 
                                                           | (0xfU 
                                                              & (vlSelf->inst 
                                                                 >> 8U)))))))) 
                  >> 0x17U)) | (__Vtemp59[3U] << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[8U] 
        = __Vtemp63[8U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[9U] 
        = __Vtemp63[9U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xaU] 
        = ((__Vtemp60[5U] >> 0x1dU) | (__Vtemp60[6U] 
                                       << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xbU] 
        = ((__Vtemp60[6U] >> 0x1dU) | (__Vtemp60[7U] 
                                       << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xcU] 
        = ((__Vtemp60[7U] >> 0x1dU) | (__Vtemp60[8U] 
                                       << 3U));
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__Type)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type 
            = ((6U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__Type)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__Type)))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type 
            = ((5U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__Type)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__Type) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__Type)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Type 
            = ((3U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__Type)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__Type)));
    }
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0U];
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[1U];
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[2U]);
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[2U] 
                         >> 3U));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[3U] 
                         >> 3U));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[4U] 
                 >> 3U));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[5U] 
            << 0x1aU) | (vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[4U] 
                         >> 6U));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[6U] 
            << 0x1aU) | (vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[5U] 
                         >> 6U));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[6U] 
                 >> 6U));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[7U] 
            << 0x17U) | (vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[6U] 
                         >> 9U));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[8U] 
            << 0x17U) | (vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[7U] 
                         >> 9U));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[8U] 
                 >> 9U));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[9U] 
            << 0x14U) | (vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[8U] 
                         >> 0xcU));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xaU] 
            << 0x14U) | (vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[9U] 
                         >> 0xcU));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[4U][2U] 
        = (7U & (vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xaU] 
                 >> 0xcU));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xbU] 
            << 0x11U) | (vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xaU] 
                         >> 0xfU));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xcU] 
            << 0x11U) | (vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xbU] 
                         >> 0xfU));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[5U][2U] 
        = (7U & (vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xcU] 
                 >> 0xfU));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[3U] 
        = (7U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[4U] 
        = (7U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[5U] 
        = (7U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list
           [5U][2U]);
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((6U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (1U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((5U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (2U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((3U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (4U & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                         [5U]));
    }
    ++(vlSymsp->__Vcoverage[531]);
    ++(vlSymsp->__Vcoverage[531]);
    ++(vlSymsp->__Vcoverage[531]);
    ++(vlSymsp->__Vcoverage[531]);
    ++(vlSymsp->__Vcoverage[531]);
    ++(vlSymsp->__Vcoverage[531]);
    ++(vlSymsp->__Vcoverage[533]);
    ++(vlSymsp->__Vcoverage[534]);
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__de__DOT__Type) 
                               == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__i = 6U;
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__Type) 
           == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__de__DOT__Type) 
                                  == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__de__DOT__Type) 
              == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__de__DOT__Type) 
                                  == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__de__DOT__Type) 
              == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__de__DOT__Type) 
                                  == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__de__DOT__Type) 
              == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__de__DOT__Type) 
                                  == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__de__DOT__Type) 
              == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__de__DOT__Type) 
                                  == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__de__DOT__Type) 
              == vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__de__DOT__imm = ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit)
                                       ? vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out
                                       : 0ULL);
    if (((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__imm) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__imm)))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__imm)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__imm 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__imm 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*3:0*/ __Vdly__top__DOT__count_c;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__de__DOT__r0__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__de__DOT__r0__DOT__rf__v0;
    // Body
    __Vdly__top__DOT__count_c = vlSelf->top__DOT__count_c;
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[72]);
        __Vdly__top__DOT__count_c = 0U;
    } else {
        __Vdly__top__DOT__count_c = (0xfU & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__count_c)));
        ++(vlSymsp->__Vcoverage[73]);
        if (VL_UNLIKELY((0xaU <= (IData)(vlSelf->top__DOT__count_c)))) {
            VL_WRITEF("*-* All Finished *-*\n");
            ++(vlSymsp->__Vcoverage[70]);
            VL_FINISH_MT("vsrc/top.v", 30, "");
        } else {
            ++(vlSymsp->__Vcoverage[71]);
        }
    }
    ++(vlSymsp->__Vcoverage[74]);
    ++(vlSymsp->__Vcoverage[113]);
    if (vlSelf->rst) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->out = 0x80000000U;
    } else {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->out = vlSelf->top__DOT__i0__DOT__zhongjian;
    }
    ++(vlSymsp->__Vcoverage[444]);
    ++(vlSymsp->__Vcoverage[446]);
    __Vdlyvval__top__DOT__de__DOT__r0__DOT__rf__v0 
        = vlSelf->top__DOT__de__DOT__wdata;
    __Vdlyvdim0__top__DOT__de__DOT__r0__DOT__rf__v0 
        = vlSelf->top__DOT__de__DOT__waddr;
    vlSelf->top__DOT__count_c = __Vdly__top__DOT__count_c;
    vlSelf->top__DOT__de__DOT__r0__DOT__rf[__Vdlyvdim0__top__DOT__de__DOT__r0__DOT__rf__v0] 
        = __Vdlyvval__top__DOT__de__DOT__r0__DOT__rf__v0;
    if ((1U & ((IData)(vlSelf->top__DOT__count_c) ^ (IData)(vlSelf->top__DOT____Vtogcov__count_c)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->top__DOT____Vtogcov__count_c = ((0xeU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__count_c)) 
                                                | (1U 
                                                   & (IData)(vlSelf->top__DOT__count_c)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__count_c) ^ (IData)(vlSelf->top__DOT____Vtogcov__count_c)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->top__DOT____Vtogcov__count_c = ((0xdU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__count_c)) 
                                                | (2U 
                                                   & (IData)(vlSelf->top__DOT__count_c)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__count_c) ^ (IData)(vlSelf->top__DOT____Vtogcov__count_c)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->top__DOT____Vtogcov__count_c = ((0xbU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__count_c)) 
                                                | (4U 
                                                   & (IData)(vlSelf->top__DOT__count_c)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__count_c) ^ (IData)(vlSelf->top__DOT____Vtogcov__count_c)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->top__DOT____Vtogcov__count_c = ((7U 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__count_c)) 
                                                | (8U 
                                                   & (IData)(vlSelf->top__DOT__count_c)));
    }
    vlSelf->top__DOT__i0__DOT__zhongjian = ((IData)(4U) 
                                            + vlSelf->out);
    if ((2U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xfffffffdU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (2U & ((IData)(4U) + vlSelf->out)));
    }
    if ((4U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xfffffffbU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (4U & ((IData)(4U) + vlSelf->out)));
    }
    if ((8U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xfffffff7U & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (8U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xffffffefU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x10U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xffffffdfU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x20U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xffffffbfU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x40U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xffffff7fU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x80U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xfffffeffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x100U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xfffffdffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x200U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xfffffbffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x400U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xfffff7ffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x800U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xffffefffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x1000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xffffdfffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x2000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xffffbfffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x4000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xffff7fffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x8000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xfffeffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x10000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xfffdffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x20000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xfffbffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x40000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xfff7ffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x80000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xffefffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x100000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xffdfffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x200000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xffbfffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x400000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xff7fffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x800000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->out) 
                       ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xfeffffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x1000000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->out) 
                       ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xfdffffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x2000000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->out) 
                       ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xfbffffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x4000000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->out) 
                       ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xf7ffffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x8000000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->out) 
                        ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xefffffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x10000000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->out) 
                        ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xdfffffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x20000000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->out) 
                        ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0xbfffffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x40000000U & ((IData)(4U) + vlSelf->out)));
    }
    if (((((IData)(4U) + vlSelf->out) ^ vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian 
            = ((0x7fffffffU & vlSelf->top__DOT__i0__DOT____Vtogcov__zhongjian) 
               | (0x80000000U & ((IData)(4U) + vlSelf->out)));
    }
    if ((1U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffffeU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (1U & vlSelf->out));
    }
    if ((2U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffffdU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (2U & vlSelf->out));
    }
    if ((4U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffffbU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (4U & vlSelf->out));
    }
    if ((8U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffff7U 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (8U & vlSelf->out));
    }
    if ((0x10U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffffefU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x10U 
                                               & vlSelf->out));
    }
    if ((0x20U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffffdfU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x20U 
                                               & vlSelf->out));
    }
    if ((0x40U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffffbfU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x40U 
                                               & vlSelf->out));
    }
    if ((0x80U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffff7fU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x80U 
                                               & vlSelf->out));
    }
    if ((0x100U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffeffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x100U 
                                               & vlSelf->out));
    }
    if ((0x200U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffdffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x200U 
                                               & vlSelf->out));
    }
    if ((0x400U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffffbffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x400U 
                                               & vlSelf->out));
    }
    if ((0x800U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffff7ffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x800U 
                                               & vlSelf->out));
    }
    if ((0x1000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffefffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x1000U 
                                               & vlSelf->out));
    }
    if ((0x2000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffdfffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x2000U 
                                               & vlSelf->out));
    }
    if ((0x4000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->top__DOT____Vtogcov__out = ((0xffffbfffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x4000U 
                                               & vlSelf->out));
    }
    if ((0x8000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->top__DOT____Vtogcov__out = ((0xffff7fffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x8000U 
                                               & vlSelf->out));
    }
    if ((0x10000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffeffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x10000U 
                                               & vlSelf->out));
    }
    if ((0x20000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffdffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x20000U 
                                               & vlSelf->out));
    }
    if ((0x40000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->top__DOT____Vtogcov__out = ((0xfffbffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x40000U 
                                               & vlSelf->out));
    }
    if ((0x80000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->top__DOT____Vtogcov__out = ((0xfff7ffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x80000U 
                                               & vlSelf->out));
    }
    if ((0x100000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->top__DOT____Vtogcov__out = ((0xffefffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x100000U 
                                               & vlSelf->out));
    }
    if ((0x200000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->top__DOT____Vtogcov__out = ((0xffdfffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x200000U 
                                               & vlSelf->out));
    }
    if ((0x400000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->top__DOT____Vtogcov__out = ((0xffbfffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x400000U 
                                               & vlSelf->out));
    }
    if ((0x800000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->top__DOT____Vtogcov__out = ((0xff7fffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x800000U 
                                               & vlSelf->out));
    }
    if ((0x1000000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->top__DOT____Vtogcov__out = ((0xfeffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x1000000U 
                                               & vlSelf->out));
    }
    if ((0x2000000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->top__DOT____Vtogcov__out = ((0xfdffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x2000000U 
                                               & vlSelf->out));
    }
    if ((0x4000000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->top__DOT____Vtogcov__out = ((0xfbffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x4000000U 
                                               & vlSelf->out));
    }
    if ((0x8000000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->top__DOT____Vtogcov__out = ((0xf7ffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x8000000U 
                                               & vlSelf->out));
    }
    if ((0x10000000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->top__DOT____Vtogcov__out = ((0xefffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x10000000U 
                                               & vlSelf->out));
    }
    if ((0x20000000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->top__DOT____Vtogcov__out = ((0xdfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x20000000U 
                                               & vlSelf->out));
    }
    if ((0x40000000U & (vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->top__DOT____Vtogcov__out = ((0xbfffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x40000000U 
                                               & vlSelf->out));
    }
    if (((vlSelf->out ^ vlSelf->top__DOT____Vtogcov__out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->top__DOT____Vtogcov__out = ((0x7fffffffU 
                                             & vlSelf->top__DOT____Vtogcov__out) 
                                            | (0x80000000U 
                                               & vlSelf->out));
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__de__DOT__waddr = ((IData)((0x13U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)))
                                         ? (0x1fU & 
                                            (vlSelf->inst 
                                             >> 7U))
                                         : 0U);
    vlSelf->top__DOT__de__DOT__src2 = vlSelf->top__DOT__de__DOT__r0__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->top__DOT__de__DOT__src1 = vlSelf->top__DOT__de__DOT__r0__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0x1eU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0x1dU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0x1bU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0x17U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0xfU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__src2) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__src2)))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__src2)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__src1) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__src1)))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__src1)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__de__DOT__addidata = (vlSelf->top__DOT__de__DOT__src1 
                                           + vlSelf->top__DOT__de__DOT__imm);
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__addidata) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__addidata)))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__addidata)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addidata 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addidata 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addidata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addidata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__de__DOT__wdata = ((IData)((0x13U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)))
                                         ? vlSelf->top__DOT__de__DOT__addidata
                                         : 0ULL);
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__wdata) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wdata)))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__wdata)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wdata 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop___024root___combo__TOP__5(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
