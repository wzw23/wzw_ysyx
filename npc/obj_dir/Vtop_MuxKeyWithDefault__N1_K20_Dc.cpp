// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_MuxKeyWithDefault__N1_K20_Dc.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop_MuxKeyWithDefault__N1_K20_Dc___settle__TOP__top__DOT__de__DOT__m19__2(Vtop_MuxKeyWithDefault__N1_K20_Dc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_MuxKeyWithDefault__N1_K20_Dc___settle__TOP__top__DOT__de__DOT__m19__2\n"); );
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4) 
               ^ (IData)(vlSelf->__Vtogcov__lut)))) {
        ++(vlSymsp->__Vcoverage[6728]);
        vlSelf->__Vtogcov__lut = ((0xffffffffffeULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | (IData)((IData)(
                                                    (1U 
                                                     & (IData)(vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 1U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6729]);
        vlSelf->__Vtogcov__lut = ((0xffffffffffdULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 1U))))) 
                                     << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 2U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6730]);
        vlSelf->__Vtogcov__lut = ((0xffffffffffbULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 2U))))) 
                                     << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 3U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6731]);
        vlSelf->__Vtogcov__lut = ((0xffffffffff7ULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 3U))))) 
                                     << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 4U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6732]);
        vlSelf->__Vtogcov__lut = ((0xfffffffffefULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 4U))))) 
                                     << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 5U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6733]);
        vlSelf->__Vtogcov__lut = ((0xfffffffffdfULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 5U))))) 
                                     << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 6U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6734]);
        vlSelf->__Vtogcov__lut = ((0xfffffffffbfULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 6U))))) 
                                     << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 7U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6735]);
        vlSelf->__Vtogcov__lut = ((0xfffffffff7fULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 7U))))) 
                                     << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 8U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6736]);
        vlSelf->__Vtogcov__lut = ((0xffffffffeffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 8U))))) 
                                     << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 9U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6737]);
        vlSelf->__Vtogcov__lut = ((0xffffffffdffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 9U))))) 
                                     << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0xaU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6738]);
        vlSelf->__Vtogcov__lut = ((0xffffffffbffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0xaU))))) 
                                     << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0xbU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6739]);
        vlSelf->__Vtogcov__lut = ((0xffffffff7ffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0xbU))))) 
                                     << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0xcU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6740]);
        vlSelf->__Vtogcov__lut = ((0xfffffffefffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0xcU))))) 
                                     << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0xdU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6741]);
        vlSelf->__Vtogcov__lut = ((0xfffffffdfffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0xdU))))) 
                                     << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0xeU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6742]);
        vlSelf->__Vtogcov__lut = ((0xfffffffbfffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0xeU))))) 
                                     << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0xfU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6743]);
        vlSelf->__Vtogcov__lut = ((0xfffffff7fffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0xfU))))) 
                                     << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x10U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6744]);
        vlSelf->__Vtogcov__lut = ((0xffffffeffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x10U))))) 
                                     << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x11U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6745]);
        vlSelf->__Vtogcov__lut = ((0xffffffdffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x11U))))) 
                                     << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x12U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6746]);
        vlSelf->__Vtogcov__lut = ((0xffffffbffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x12U))))) 
                                     << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x13U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6747]);
        vlSelf->__Vtogcov__lut = ((0xffffff7ffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x13U))))) 
                                     << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x14U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6748]);
        vlSelf->__Vtogcov__lut = ((0xfffffefffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x14U))))) 
                                     << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x15U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6749]);
        vlSelf->__Vtogcov__lut = ((0xfffffdfffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x15U))))) 
                                     << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x16U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6750]);
        vlSelf->__Vtogcov__lut = ((0xfffffbfffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x16U))))) 
                                     << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x17U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6751]);
        vlSelf->__Vtogcov__lut = ((0xfffff7fffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x17U))))) 
                                     << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x18U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6752]);
        vlSelf->__Vtogcov__lut = ((0xffffeffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x18U))))) 
                                     << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x19U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6753]);
        vlSelf->__Vtogcov__lut = ((0xffffdffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x19U))))) 
                                     << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x1aU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6754]);
        vlSelf->__Vtogcov__lut = ((0xffffbffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x1aU))))) 
                                     << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x1bU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6755]);
        vlSelf->__Vtogcov__lut = ((0xffff7ffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x1bU))))) 
                                     << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x1cU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6756]);
        vlSelf->__Vtogcov__lut = ((0xfffefffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x1cU))))) 
                                     << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x1dU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6757]);
        vlSelf->__Vtogcov__lut = ((0xfffdfffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x1dU))))) 
                                     << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x1eU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6758]);
        vlSelf->__Vtogcov__lut = ((0xfffbfffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x1eU))))) 
                                     << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x1fU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6759]);
        vlSelf->__Vtogcov__lut = ((0xfff7fffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x1fU))))) 
                                     << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x20U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6760]);
        vlSelf->__Vtogcov__lut = ((0xffeffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x20U))))) 
                                     << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x21U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6761]);
        vlSelf->__Vtogcov__lut = ((0xffdffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x21U))))) 
                                     << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x22U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6762]);
        vlSelf->__Vtogcov__lut = ((0xffbffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x22U))))) 
                                     << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x23U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6763]);
        vlSelf->__Vtogcov__lut = ((0xff7ffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x23U))))) 
                                     << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x24U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6764]);
        vlSelf->__Vtogcov__lut = ((0xfefffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x24U))))) 
                                     << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x25U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6765]);
        vlSelf->__Vtogcov__lut = ((0xfdfffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x25U))))) 
                                     << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x26U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6766]);
        vlSelf->__Vtogcov__lut = ((0xfbfffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x26U))))) 
                                     << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x27U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6767]);
        vlSelf->__Vtogcov__lut = ((0xf7fffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x27U))))) 
                                     << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x28U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[6768]);
        vlSelf->__Vtogcov__lut = ((0xeffffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x28U))))) 
                                     << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x29U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[6769]);
        vlSelf->__Vtogcov__lut = ((0xdffffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x29U))))) 
                                     << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x2aU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[6770]);
        vlSelf->__Vtogcov__lut = ((0xbffffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x2aU))))) 
                                     << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                        >> 0x2bU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[6771]);
        vlSelf->__Vtogcov__lut = ((0x7ffffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4 
                                                                 >> 0x2bU))))) 
                                     << 0x2bU));
    }
    vlSelf->__PVT__i0__DOT__pair_list[0U] = vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4;
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__pair_list
                       [0U]) ^ (IData)(vlSelf->i0__DOT____Vtogcov__pair_list
                                       [0U])))) {
        ++(vlSymsp->__Vcoverage[6772]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffffeULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | (IData)((IData)((1U & (IData)(
                                                    vlSelf->__PVT__i0__DOT__pair_list
                                                    [0U])))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 1U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6773]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffffdULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 1U))))) 
                       << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 2U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6774]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffffbULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 2U))))) 
                       << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 3U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6775]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffff7ULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 3U))))) 
                       << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 4U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6776]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffffefULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 4U))))) 
                       << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 5U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6777]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffffdfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 5U))))) 
                       << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 6U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6778]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffffbfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 6U))))) 
                       << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 7U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6779]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffff7fULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 7U))))) 
                       << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 8U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6780]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffeffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 8U))))) 
                       << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 9U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6781]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffdffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 9U))))) 
                       << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xaU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6782]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffbffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xaU))))) 
                       << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xbU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6783]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffff7ffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xbU))))) 
                       << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xcU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6784]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffefffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xcU))))) 
                       << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xdU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6785]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffdfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xdU))))) 
                       << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xeU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6786]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffbfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xeU))))) 
                       << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xfU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6787]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffff7fffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xfU))))) 
                       << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6788]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffeffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x10U))))) 
                       << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6789]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffdffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x11U))))) 
                       << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6790]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffbffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x12U))))) 
                       << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6791]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffff7ffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x13U))))) 
                       << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6792]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffefffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x14U))))) 
                       << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6793]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffdfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x15U))))) 
                       << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6794]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffbfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x16U))))) 
                       << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6795]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffff7fffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x17U))))) 
                       << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6796]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffeffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x18U))))) 
                       << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6797]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffdffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x19U))))) 
                       << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6798]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffbffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1aU))))) 
                       << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6799]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffff7ffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1bU))))) 
                       << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6800]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffefffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1cU))))) 
                       << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6801]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffdfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1dU))))) 
                       << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6802]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffbfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1eU))))) 
                       << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6803]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfff7fffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1fU))))) 
                       << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6804]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffeffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x20U))))) 
                       << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6805]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffdffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x21U))))) 
                       << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x22U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6806]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffbffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x22U))))) 
                       << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x23U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6807]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xff7ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x23U))))) 
                       << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x24U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6808]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfefffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x24U))))) 
                       << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x25U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6809]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfdfffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x25U))))) 
                       << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x26U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6810]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfbfffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x26U))))) 
                       << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x27U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6811]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xf7fffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x27U))))) 
                       << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x28U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[6812]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xeffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x28U))))) 
                       << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x29U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[6813]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xdffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x29U))))) 
                       << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x2aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[6814]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xbffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x2aU))))) 
                       << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x2bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[6815]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x7ffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x2bU))))) 
                       << 0x2bU));
    }
    vlSelf->__PVT__i0__DOT__data_list[0U] = (0xfffU 
                                             & (IData)(
                                                       vlSelf->__PVT__i0__DOT__pair_list
                                                       [0U]));
    vlSelf->__PVT__i0__DOT__key_list[0U] = (IData)(
                                                   (vlSelf->__PVT__i0__DOT__pair_list
                                                    [0U] 
                                                    >> 0xcU));
    if ((1U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6848]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffeU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (1U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6849]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffdU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (2U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6850]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffbU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (4U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6851]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xff7U & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (8U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6852]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfefU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x10U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6853]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfdfU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x20U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6854]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfbfU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x40U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6855]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xf7fU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x80U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6856]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xeffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x100U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6857]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xdffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x200U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6858]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xbffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x400U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6859]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0x7ffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x800U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6816]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffffeU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (1U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6817]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffffdU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (2U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6818]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffffbU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (4U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6819]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffff7U & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (8U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6820]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffffefU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x10U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6821]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffffdfU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x20U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6822]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffffbfU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x40U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6823]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffff7fU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x80U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__key_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6824]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffeffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x100U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__key_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6825]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffdffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x200U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__key_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6826]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffbffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x400U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__key_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6827]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffff7ffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x800U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x1000U & (vlSelf->__PVT__i0__DOT__key_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6828]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffefffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x1000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x2000U & (vlSelf->__PVT__i0__DOT__key_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6829]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffdfffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x2000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x4000U & (vlSelf->__PVT__i0__DOT__key_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6830]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffbfffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x4000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x8000U & (vlSelf->__PVT__i0__DOT__key_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6831]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffff7fffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x8000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x10000U & (vlSelf->__PVT__i0__DOT__key_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6832]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffeffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x10000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x20000U & (vlSelf->__PVT__i0__DOT__key_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6833]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffdffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x20000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x40000U & (vlSelf->__PVT__i0__DOT__key_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6834]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffbffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x40000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x80000U & (vlSelf->__PVT__i0__DOT__key_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6835]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfff7ffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x80000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x100000U & (vlSelf->__PVT__i0__DOT__key_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6836]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffefffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x100000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x200000U & (vlSelf->__PVT__i0__DOT__key_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6837]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffdfffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x200000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x400000U & (vlSelf->__PVT__i0__DOT__key_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6838]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffbfffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x400000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x800000U & (vlSelf->__PVT__i0__DOT__key_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6839]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xff7fffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x800000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x1000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6840]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfeffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x1000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x2000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6841]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfdffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x2000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x4000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6842]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfbffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x4000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x8000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6843]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xf7ffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x8000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x10000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6844]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xefffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x10000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x20000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6845]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xdfffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x20000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x40000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6846]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xbfffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x40000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if (((vlSelf->__PVT__i0__DOT__key_list[0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6847]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0x7fffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x80000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    vlSelf->__PVT__i0__DOT__lut_out = ((- (IData)((vlSymsp->TOP.inst 
                                                   == 
                                                   vlSelf->__PVT__i0__DOT__key_list
                                                   [0U]))) 
                                       & vlSelf->__PVT__i0__DOT__data_list
                                       [0U]);
    ++(vlSymsp->__Vcoverage[6873]);
    ++(vlSymsp->__Vcoverage[6875]);
    ++(vlSymsp->__Vcoverage[6876]);
    vlSelf->__PVT__i0__DOT__hit = (vlSymsp->TOP.inst 
                                   == vlSelf->__PVT__i0__DOT__key_list
                                   [0U]);
    vlSelf->__PVT__i0__DOT__i = 1U;
    vlSelf->out = ((IData)(vlSelf->__PVT__i0__DOT__hit)
                    ? (IData)(vlSelf->__PVT__i0__DOT__lut_out)
                    : 0U);
    if (((IData)(vlSelf->__PVT__i0__DOT__hit) ^ (IData)(vlSelf->i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[6872]);
        vlSelf->i0__DOT____Vtogcov__hit = vlSelf->__PVT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6860]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffeU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (1U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6861]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffdU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (2U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6862]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffbU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (4U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6863]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xff7U 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (8U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6864]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfefU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x10U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6865]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfdfU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x20U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6866]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfbfU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x40U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6867]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xf7fU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x80U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6868]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xeffU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x100U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x200U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6869]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xdffU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x200U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x400U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6870]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xbffU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x400U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x800U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6871]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0x7ffU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x800U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
}

VL_INLINE_OPT void Vtop_MuxKeyWithDefault__N1_K20_Dc___combo__TOP__top__DOT__de__DOT__m20__3(Vtop_MuxKeyWithDefault__N1_K20_Dc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_MuxKeyWithDefault__N1_K20_Dc___combo__TOP__top__DOT__de__DOT__m20__3\n"); );
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4) 
               ^ (IData)(vlSelf->__Vtogcov__lut)))) {
        ++(vlSymsp->__Vcoverage[6728]);
        vlSelf->__Vtogcov__lut = ((0xffffffffffeULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | (IData)((IData)(
                                                    (1U 
                                                     & (IData)(vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 1U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6729]);
        vlSelf->__Vtogcov__lut = ((0xffffffffffdULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 1U))))) 
                                     << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 2U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6730]);
        vlSelf->__Vtogcov__lut = ((0xffffffffffbULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 2U))))) 
                                     << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 3U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6731]);
        vlSelf->__Vtogcov__lut = ((0xffffffffff7ULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 3U))))) 
                                     << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 4U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6732]);
        vlSelf->__Vtogcov__lut = ((0xfffffffffefULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 4U))))) 
                                     << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 5U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6733]);
        vlSelf->__Vtogcov__lut = ((0xfffffffffdfULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 5U))))) 
                                     << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 6U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6734]);
        vlSelf->__Vtogcov__lut = ((0xfffffffffbfULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 6U))))) 
                                     << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 7U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6735]);
        vlSelf->__Vtogcov__lut = ((0xfffffffff7fULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 7U))))) 
                                     << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 8U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6736]);
        vlSelf->__Vtogcov__lut = ((0xffffffffeffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 8U))))) 
                                     << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 9U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6737]);
        vlSelf->__Vtogcov__lut = ((0xffffffffdffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 9U))))) 
                                     << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0xaU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6738]);
        vlSelf->__Vtogcov__lut = ((0xffffffffbffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0xaU))))) 
                                     << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0xbU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6739]);
        vlSelf->__Vtogcov__lut = ((0xffffffff7ffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0xbU))))) 
                                     << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0xcU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6740]);
        vlSelf->__Vtogcov__lut = ((0xfffffffefffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0xcU))))) 
                                     << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0xdU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6741]);
        vlSelf->__Vtogcov__lut = ((0xfffffffdfffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0xdU))))) 
                                     << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0xeU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6742]);
        vlSelf->__Vtogcov__lut = ((0xfffffffbfffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0xeU))))) 
                                     << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0xfU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6743]);
        vlSelf->__Vtogcov__lut = ((0xfffffff7fffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0xfU))))) 
                                     << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x10U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6744]);
        vlSelf->__Vtogcov__lut = ((0xffffffeffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x10U))))) 
                                     << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x11U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6745]);
        vlSelf->__Vtogcov__lut = ((0xffffffdffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x11U))))) 
                                     << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x12U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6746]);
        vlSelf->__Vtogcov__lut = ((0xffffffbffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x12U))))) 
                                     << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x13U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6747]);
        vlSelf->__Vtogcov__lut = ((0xffffff7ffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x13U))))) 
                                     << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x14U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6748]);
        vlSelf->__Vtogcov__lut = ((0xfffffefffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x14U))))) 
                                     << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x15U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6749]);
        vlSelf->__Vtogcov__lut = ((0xfffffdfffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x15U))))) 
                                     << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x16U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6750]);
        vlSelf->__Vtogcov__lut = ((0xfffffbfffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x16U))))) 
                                     << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x17U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6751]);
        vlSelf->__Vtogcov__lut = ((0xfffff7fffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x17U))))) 
                                     << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x18U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6752]);
        vlSelf->__Vtogcov__lut = ((0xffffeffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x18U))))) 
                                     << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x19U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6753]);
        vlSelf->__Vtogcov__lut = ((0xffffdffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x19U))))) 
                                     << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x1aU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6754]);
        vlSelf->__Vtogcov__lut = ((0xffffbffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x1aU))))) 
                                     << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x1bU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6755]);
        vlSelf->__Vtogcov__lut = ((0xffff7ffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x1bU))))) 
                                     << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x1cU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6756]);
        vlSelf->__Vtogcov__lut = ((0xfffefffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x1cU))))) 
                                     << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x1dU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6757]);
        vlSelf->__Vtogcov__lut = ((0xfffdfffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x1dU))))) 
                                     << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x1eU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6758]);
        vlSelf->__Vtogcov__lut = ((0xfffbfffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x1eU))))) 
                                     << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x1fU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6759]);
        vlSelf->__Vtogcov__lut = ((0xfff7fffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x1fU))))) 
                                     << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x20U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6760]);
        vlSelf->__Vtogcov__lut = ((0xffeffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x20U))))) 
                                     << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x21U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6761]);
        vlSelf->__Vtogcov__lut = ((0xffdffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x21U))))) 
                                     << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x22U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6762]);
        vlSelf->__Vtogcov__lut = ((0xffbffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x22U))))) 
                                     << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x23U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6763]);
        vlSelf->__Vtogcov__lut = ((0xff7ffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x23U))))) 
                                     << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x24U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6764]);
        vlSelf->__Vtogcov__lut = ((0xfefffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x24U))))) 
                                     << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x25U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6765]);
        vlSelf->__Vtogcov__lut = ((0xfdfffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x25U))))) 
                                     << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x26U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6766]);
        vlSelf->__Vtogcov__lut = ((0xfbfffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x26U))))) 
                                     << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x27U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6767]);
        vlSelf->__Vtogcov__lut = ((0xf7fffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x27U))))) 
                                     << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x28U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[6768]);
        vlSelf->__Vtogcov__lut = ((0xeffffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x28U))))) 
                                     << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x29U)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[6769]);
        vlSelf->__Vtogcov__lut = ((0xdffffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x29U))))) 
                                     << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x2aU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[6770]);
        vlSelf->__Vtogcov__lut = ((0xbffffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x2aU))))) 
                                     << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                        >> 0x2bU)) ^ (IData)((vlSelf->__Vtogcov__lut 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[6771]);
        vlSelf->__Vtogcov__lut = ((0x7ffffffffffULL 
                                   & vlSelf->__Vtogcov__lut) 
                                  | ((QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4 
                                                                 >> 0x2bU))))) 
                                     << 0x2bU));
    }
    vlSelf->__PVT__i0__DOT__pair_list[0U] = vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4;
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__pair_list
                       [0U]) ^ (IData)(vlSelf->i0__DOT____Vtogcov__pair_list
                                       [0U])))) {
        ++(vlSymsp->__Vcoverage[6772]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffffeULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | (IData)((IData)((1U & (IData)(
                                                    vlSelf->__PVT__i0__DOT__pair_list
                                                    [0U])))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 1U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6773]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffffdULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 1U))))) 
                       << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 2U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6774]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffffbULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 2U))))) 
                       << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 3U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6775]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffff7ULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 3U))))) 
                       << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 4U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6776]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffffefULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 4U))))) 
                       << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 5U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6777]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffffdfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 5U))))) 
                       << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 6U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6778]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffffbfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 6U))))) 
                       << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 7U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6779]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffff7fULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 7U))))) 
                       << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 8U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6780]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffeffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 8U))))) 
                       << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 9U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6781]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffdffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 9U))))) 
                       << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xaU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6782]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffbffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xaU))))) 
                       << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xbU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6783]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffff7ffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xbU))))) 
                       << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xcU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6784]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffefffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xcU))))) 
                       << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xdU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6785]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffdfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xdU))))) 
                       << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xeU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6786]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffbfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xeU))))) 
                       << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xfU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6787]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffff7fffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xfU))))) 
                       << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6788]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffeffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x10U))))) 
                       << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6789]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffdffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x11U))))) 
                       << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6790]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffbffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x12U))))) 
                       << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6791]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffff7ffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x13U))))) 
                       << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6792]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffefffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x14U))))) 
                       << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6793]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffdfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x15U))))) 
                       << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6794]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffbfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x16U))))) 
                       << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6795]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffff7fffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x17U))))) 
                       << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6796]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffeffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x18U))))) 
                       << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6797]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffdffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x19U))))) 
                       << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6798]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffbffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1aU))))) 
                       << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6799]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffff7ffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1bU))))) 
                       << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6800]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffefffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1cU))))) 
                       << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6801]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffdfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1dU))))) 
                       << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6802]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffbfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1eU))))) 
                       << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6803]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfff7fffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1fU))))) 
                       << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6804]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffeffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x20U))))) 
                       << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6805]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffdffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x21U))))) 
                       << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x22U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6806]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffbffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x22U))))) 
                       << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x23U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6807]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xff7ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x23U))))) 
                       << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x24U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6808]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfefffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x24U))))) 
                       << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x25U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6809]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfdfffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x25U))))) 
                       << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x26U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6810]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfbfffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x26U))))) 
                       << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x27U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6811]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xf7fffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x27U))))) 
                       << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x28U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[6812]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xeffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x28U))))) 
                       << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x29U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[6813]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xdffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x29U))))) 
                       << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x2aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[6814]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xbffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x2aU))))) 
                       << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x2bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[6815]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x7ffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x2bU))))) 
                       << 0x2bU));
    }
    vlSelf->__PVT__i0__DOT__data_list[0U] = (0xfffU 
                                             & (IData)(
                                                       vlSelf->__PVT__i0__DOT__pair_list
                                                       [0U]));
    vlSelf->__PVT__i0__DOT__key_list[0U] = (IData)(
                                                   (vlSelf->__PVT__i0__DOT__pair_list
                                                    [0U] 
                                                    >> 0xcU));
    if ((1U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6848]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffeU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (1U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6849]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffdU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (2U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6850]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffbU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (4U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6851]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xff7U & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (8U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6852]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfefU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x10U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6853]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfdfU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x20U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6854]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfbfU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x40U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6855]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xf7fU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x80U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6856]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xeffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x100U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6857]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xdffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x200U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6858]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xbffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x400U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6859]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0x7ffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x800U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6816]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffffeU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (1U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6817]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffffdU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (2U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6818]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffffbU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (4U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6819]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffff7U & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (8U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6820]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffffefU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x10U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6821]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffffdfU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x20U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6822]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffffbfU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x40U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6823]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffff7fU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x80U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__key_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6824]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffeffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x100U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__key_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6825]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffdffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x200U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__key_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6826]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffbffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x400U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__key_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6827]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffff7ffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x800U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x1000U & (vlSelf->__PVT__i0__DOT__key_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6828]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffefffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x1000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x2000U & (vlSelf->__PVT__i0__DOT__key_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6829]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffdfffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x2000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x4000U & (vlSelf->__PVT__i0__DOT__key_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6830]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffbfffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x4000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x8000U & (vlSelf->__PVT__i0__DOT__key_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6831]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffff7fffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x8000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x10000U & (vlSelf->__PVT__i0__DOT__key_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6832]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffeffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x10000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x20000U & (vlSelf->__PVT__i0__DOT__key_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6833]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffdffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x20000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x40000U & (vlSelf->__PVT__i0__DOT__key_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6834]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffbffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x40000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x80000U & (vlSelf->__PVT__i0__DOT__key_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6835]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfff7ffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x80000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x100000U & (vlSelf->__PVT__i0__DOT__key_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6836]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffefffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x100000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x200000U & (vlSelf->__PVT__i0__DOT__key_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6837]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffdfffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x200000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x400000U & (vlSelf->__PVT__i0__DOT__key_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6838]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffbfffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x400000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x800000U & (vlSelf->__PVT__i0__DOT__key_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6839]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xff7fffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x800000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x1000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6840]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfeffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x1000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x2000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6841]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfdffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x2000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x4000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6842]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfbffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x4000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x8000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6843]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xf7ffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x8000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x10000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6844]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xefffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x10000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x20000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6845]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xdfffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x20000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x40000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6846]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xbfffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x40000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if (((vlSelf->__PVT__i0__DOT__key_list[0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6847]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0x7fffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x80000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
}

VL_INLINE_OPT void Vtop_MuxKeyWithDefault__N1_K20_Dc___combo__TOP__top__DOT__de__DOT__m20__5(Vtop_MuxKeyWithDefault__N1_K20_Dc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_MuxKeyWithDefault__N1_K20_Dc___combo__TOP__top__DOT__de__DOT__m20__5\n"); );
    // Body
    vlSelf->__PVT__i0__DOT__lut_out = ((- (IData)((vlSymsp->TOP.inst 
                                                   == 
                                                   vlSelf->__PVT__i0__DOT__key_list
                                                   [0U]))) 
                                       & vlSelf->__PVT__i0__DOT__data_list
                                       [0U]);
    ++(vlSymsp->__Vcoverage[6873]);
    ++(vlSymsp->__Vcoverage[6875]);
    ++(vlSymsp->__Vcoverage[6876]);
    vlSelf->__PVT__i0__DOT__hit = (vlSymsp->TOP.inst 
                                   == vlSelf->__PVT__i0__DOT__key_list
                                   [0U]);
    vlSelf->__PVT__i0__DOT__i = 1U;
    vlSelf->out = ((IData)(vlSelf->__PVT__i0__DOT__hit)
                    ? (IData)(vlSelf->__PVT__i0__DOT__lut_out)
                    : 0U);
    if (((IData)(vlSelf->__PVT__i0__DOT__hit) ^ (IData)(vlSelf->i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[6872]);
        vlSelf->i0__DOT____Vtogcov__hit = vlSelf->__PVT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6860]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffeU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (1U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6861]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffdU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (2U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6862]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffbU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (4U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6863]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xff7U 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (8U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6864]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfefU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x10U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6865]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfdfU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x20U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6866]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfbfU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x40U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6867]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xf7fU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x80U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6868]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xeffU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x100U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x200U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6869]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xdffU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x200U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x400U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6870]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xbffU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x400U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x800U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6871]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0x7ffU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x800U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
}
