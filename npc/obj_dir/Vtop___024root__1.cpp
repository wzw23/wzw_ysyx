// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__5\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__c_wen1_2) ^ (IData)(vlSelf->top__DOT____Vtogcov__c_wen1_2))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->top__DOT____Vtogcov__c_wen1_2 = vlSelf->top__DOT__c_wen1_2;
    }
    if (((IData)(vlSelf->top__DOT__c_wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__c_wen))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->top__DOT____Vtogcov__c_wen = vlSelf->top__DOT__c_wen;
    }
    if (((IData)(vlSelf->top__DOT__rf_wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_wen))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->top__DOT____Vtogcov__rf_wen = vlSelf->top__DOT__rf_wen;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld)))) {
        ++(vlSymsp->__Vcoverage[4007]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4008]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4009]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4010]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4011]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4012]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4013]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4014]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4015]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4016]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4017]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4018]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4019]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4020]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4021]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4022]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4023]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4024]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4025]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4026]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4027]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4028]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4029]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4030]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4031]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4032]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4033]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4034]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4035]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4036]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4037]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4038]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4039]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4040]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4041]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4042]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4043]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4044]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4045]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4046]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4047]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4048]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4049]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4050]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4051]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4052]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4053]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4054]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4055]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4056]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4057]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4058]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4059]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4060]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4061]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4062]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4063]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4064]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4065]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4066]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4067]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4068]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4069]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4070]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_ld) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu)))) {
        ++(vlSymsp->__Vcoverage[4263]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | (IData)((IData)((1U & (IData)((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))))));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4264]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4265]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4266]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4267]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4268]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4269]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4270]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4271]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4272]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4273]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4274]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4275]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4276]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4277]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4278]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4279]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4280]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4281]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4282]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4283]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4284]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4285]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4286]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4287]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4288]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4289]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4290]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4291]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4292]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4293]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4294]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4295]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4296]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4297]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4298]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4299]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4300]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4301]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4302]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4303]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4304]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4305]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4306]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4307]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4308]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4309]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4310]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4311]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4312]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4313]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4314]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4315]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4316]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4317]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4318]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4319]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4320]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4321]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4322]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4323]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4324]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4325]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4326]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu)))) {
        ++(vlSymsp->__Vcoverage[4391]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | (IData)((IData)((1U & (IData)((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))))))));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4392]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4393]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4394]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4395]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4396]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4397]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4398]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4399]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4400]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4401]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4402]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4403]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4404]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4405]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4406]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4407]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4408]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4409]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4410]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4411]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4412]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4413]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4414]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4415]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4416]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4417]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4418]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4419]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4420]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4421]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4422]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4423]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4424]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4425]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4426]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4427]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4428]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4429]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4430]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4431]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4432]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4433]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4434]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4435]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4436]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4437]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4438]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4439]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4440]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4441]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4442]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4443]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4444]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4445]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4446]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4447]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4448]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4449]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4450]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4451]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4452]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4453]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4454]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu)))) {
        ++(vlSymsp->__Vcoverage[4519]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | (IData)((IData)((1U & (IData)((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))))))));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4520]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4521]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4522]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4523]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4524]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4525]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4526]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4527]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4528]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4529]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4530]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4531]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4532]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4533]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4534]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4535]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4536]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4537]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4538]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4539]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4540]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4541]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4542]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4543]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4544]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4545]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4546]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4547]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4548]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4549]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4550]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4551]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4552]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4553]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4554]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4555]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4556]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4557]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4558]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4559]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4560]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4561]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4562]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4563]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4564]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4565]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4566]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4567]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4568]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4569]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4570]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4571]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4572]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4573]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4574]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4575]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4576]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4577]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4578]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4579]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4580]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4581]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4582]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__mem_2__DOT__r_rdata_lw = (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)));
    vlSelf->top__DOT__mem_2__DOT__r_rdata_lh = (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                                >> 0xfU)))))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))));
    vlSelf->top__DOT__mem_2__DOT__r_rdata_lb = (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                                >> 7U)))))) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))));
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_lw) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw)))) {
        ++(vlSymsp->__Vcoverage[4199]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_lw)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4200]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4201]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4202]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4203]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4204]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4205]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4206]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4207]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4208]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4209]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4210]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4211]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4212]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4213]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4214]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4215]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4216]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4217]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4218]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4219]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4220]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4221]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4222]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4223]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4224]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4225]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4226]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4227]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4228]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4229]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4230]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4231]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4232]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4233]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4234]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4235]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4236]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4237]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4238]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4239]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4240]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4241]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4242]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4243]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4244]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4245]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4246]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4247]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4248]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4249]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4250]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4251]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4252]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4253]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4254]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4255]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4256]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4257]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4258]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4259]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4260]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4261]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4262]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_lh) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh)))) {
        ++(vlSymsp->__Vcoverage[4327]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_lh)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4328]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4329]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4330]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4331]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4332]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4333]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4334]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4335]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4336]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4337]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4338]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4339]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4340]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4341]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4342]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4343]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4344]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4345]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4346]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4347]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4348]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4349]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4350]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4351]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4352]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4353]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4354]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4355]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4356]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4357]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4358]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4359]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4360]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4361]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4362]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4363]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4364]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4365]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4366]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4367]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4368]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4369]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4370]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4371]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4372]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4373]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4374]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4375]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4376]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4377]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4378]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4379]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4380]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4381]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4382]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4383]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4384]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4385]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4386]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4387]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4388]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4389]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4390]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_lb) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb)))) {
        ++(vlSymsp->__Vcoverage[4455]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_lb)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4456]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4457]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4458]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4459]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4460]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4461]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4462]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4463]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4464]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4465]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4466]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4467]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4468]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4469]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4470]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4471]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4472]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4473]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4474]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4475]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4476]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4477]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4478]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4479]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4480]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4481]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4482]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4483]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4484]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4485]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4486]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4487]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4488]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4489]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4490]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4491]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4492]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4493]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4494]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4495]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4496]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4497]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4498]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4499]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4500]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4501]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4502]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4503]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4504]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4505]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4506]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4507]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4508]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4509]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4510]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4511]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4512]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4513]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4514]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4515]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4516]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4517]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4518]);
        vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0U] 
        = (IData)((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[1U] 
        = (IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                   >> 0x20U));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[2U] 
        = (0x40U | ((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_lb) 
                    << 7U));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[3U] 
        = (((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_lb) 
            >> 0x19U) | ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                  >> 0x20U)) << 7U));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[4U] 
        = (0x1000U | (((IData)((QData)((IData)((0xffffU 
                                                & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))) 
                       << 0xeU) | ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lb 
                                            >> 0x20U)) 
                                   >> 0x19U)));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[5U] 
        = (((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))) 
            >> 0x12U) | ((IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                  >> 0x20U)) << 0xeU));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[6U] 
        = (0x40000U | (((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_lh) 
                        << 0x15U) | ((IData)(((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                              >> 0x20U)) 
                                     >> 0x12U)));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[7U] 
        = (((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_lh) 
            >> 0xbU) | ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                 >> 0x20U)) << 0x15U));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[8U] 
        = (0x1000000U | (((IData)((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))) 
                          << 0x1cU) | ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lh 
                                                >> 0x20U)) 
                                       >> 0xbU)));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[9U] 
        = (((IData)((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))) 
            >> 4U) | ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                               >> 0x20U)) << 0x1cU));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
        = (0x40000000U | ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                   >> 0x20U)) >> 4U));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
        = ((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_lw) 
           << 3U);
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
        = (((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_lw) 
            >> 0x1dU) | ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
        = (0x10U | (((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld) 
                     << 0xaU) | ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_lw 
                                          >> 0x20U)) 
                                 >> 0x1dU)));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
        = (((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld) 
            >> 0x16U) | ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                  >> 0x20U)) << 0xaU));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
        = (0x400U | ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                              >> 0x20U)) >> 0x16U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0U];
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[1U];
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x7fU & vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[2U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[3U] 
            << 0x19U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[2U] 
                         >> 7U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[4U] 
            << 0x19U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[3U] 
                         >> 7U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[4U] 
                    >> 7U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[5U] 
            << 0x12U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[4U] 
                         >> 0xeU));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[6U] 
            << 0x12U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[5U] 
                         >> 0xeU));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[6U] 
                    >> 0xeU));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[7U] 
            << 0xbU) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[6U] 
                        >> 0x15U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[8U] 
            << 0xbU) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[7U] 
                        >> 0x15U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[8U] 
                    >> 0x15U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[9U] 
            << 4U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[8U] 
                      >> 0x1cU));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
            << 4U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[9U] 
                      >> 0x1cU));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x7fU & ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
                     << 4U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
                               >> 0x1cU)));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
            << 0x1dU) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
                         >> 3U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
            << 0x1dU) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
                         >> 3U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
                    >> 3U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
            << 0x16U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
                         >> 0xaU));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
            << 0x16U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
                         >> 0xaU));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[6U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
                    >> 0xaU));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[1U] 
        = (0x7fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[2U] 
        = (0x7fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[3U] 
        = (0x7fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[4U] 
        = (0x7fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[5U] 
        = (0x7fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[6U] 
        = (0x7fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [6U][2U]);
    if ((1U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[4649]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7eU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[4650]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7dU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[4651]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7bU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[4652]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x77U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (8U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[4653]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x6fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[4654]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x5fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[4655]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x3fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[4656]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0x7eU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (1U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[4657]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0x7dU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (2U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[4658]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0x7bU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (4U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[4659]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0x77U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (8U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [1U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[4660]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0x6fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x10U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [1U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[4661]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0x5fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x20U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [1U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[4662]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0x3fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x40U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[4663]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0x7eU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (1U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[4664]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0x7dU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (2U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[4665]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0x7bU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (4U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[4666]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0x77U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (8U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [2U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[4667]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0x6fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x10U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [2U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[4668]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0x5fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x20U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [2U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[4669]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0x3fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x40U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[4670]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0x7eU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (1U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[4671]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0x7dU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (2U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[4672]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0x7bU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (4U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((8U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[4673]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0x77U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (8U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [3U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[4674]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0x6fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x10U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [3U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[4675]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0x5fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x20U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [3U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[4676]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0x3fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x40U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((1U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[4677]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0x7eU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (1U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((2U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[4678]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0x7dU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (2U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((4U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[4679]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0x7bU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (4U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((8U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[4680]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0x77U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (8U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [4U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[4681]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0x6fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (0x10U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [4U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[4682]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0x5fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (0x20U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [4U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[4683]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0x3fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (0x40U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((1U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[4684]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0x7eU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (1U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((2U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[4685]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0x7dU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (2U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((4U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[4686]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0x7bU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (4U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((8U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[4687]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0x77U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (8U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [5U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[4688]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0x6fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (0x10U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [5U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[4689]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0x5fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (0x20U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [5U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[4690]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0x3fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (0x40U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((1U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [6U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[4691]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0x7eU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (1U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((2U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [6U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[4692]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0x7dU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (2U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((4U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [6U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[4693]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0x7bU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (4U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((8U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
               [6U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[4694]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0x77U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (8U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [6U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[4695]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0x6fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (0x10U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [6U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[4696]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0x5fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (0x20U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                  [6U] ^ vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[4697]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0x3fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (0x40U & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                         [6U]));
    }
    ++(vlSymsp->__Vcoverage[4763]);
    ++(vlSymsp->__Vcoverage[4763]);
    ++(vlSymsp->__Vcoverage[4763]);
    ++(vlSymsp->__Vcoverage[4763]);
    ++(vlSymsp->__Vcoverage[4763]);
    ++(vlSymsp->__Vcoverage[4763]);
    ++(vlSymsp->__Vcoverage[4763]);
    ++(vlSymsp->__Vcoverage[4764]);
    ++(vlSymsp->__Vcoverage[4766]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                               == vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__l_choose) == vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__i = 7U;
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__ram_data = vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out;
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[4762]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4698]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4699]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4700]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4701]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4702]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4703]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4704]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4705]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4706]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4707]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4708]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4709]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4710]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4711]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4712]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4713]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4714]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4715]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4716]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4717]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4718]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4719]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4720]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4721]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4722]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4723]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4724]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4725]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4726]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4727]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4728]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4729]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4730]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4731]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4732]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4733]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4734]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4735]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4736]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4737]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4738]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4739]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4740]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4741]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4742]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4743]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4744]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4745]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4746]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4747]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4748]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4749]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4750]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4751]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4752]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4753]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4754]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4755]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4756]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4757]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4758]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4759]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4760]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4761]);
        vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__ram_data) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ram_data)))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffffffeULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | (IData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->top__DOT__ram_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffffffdULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 1U))))) 
                                                    << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffffffbULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 2U))))) 
                                                    << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffffff7ULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 3U))))) 
                                                    << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffffffefULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 4U))))) 
                                                    << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffffffdfULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 5U))))) 
                                                    << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffffffbfULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 6U))))) 
                                                    << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffffff7fULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 7U))))) 
                                                    << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffffeffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 8U))))) 
                                                    << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffffdffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 9U))))) 
                                                    << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffffbffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0xaU))))) 
                                                    << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffff7ffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0xbU))))) 
                                                    << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffffefffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0xcU))))) 
                                                    << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffffdfffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0xdU))))) 
                                                    << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffffbfffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0xeU))))) 
                                                    << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffff7fffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0xfU))))) 
                                                    << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffeffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x10U))))) 
                                                    << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffdffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x11U))))) 
                                                    << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffbffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x12U))))) 
                                                    << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffff7ffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x13U))))) 
                                                    << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffefffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x14U))))) 
                                                    << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffdfffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x15U))))) 
                                                    << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffbfffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x16U))))) 
                                                    << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffff7fffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x17U))))) 
                                                    << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffeffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x18U))))) 
                                                    << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffdffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x19U))))) 
                                                    << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffbffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x1aU))))) 
                                                    << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffff7ffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x1bU))))) 
                                                    << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffefffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x1cU))))) 
                                                    << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffdfffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x1dU))))) 
                                                    << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffbfffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x1eU))))) 
                                                    << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffff7fffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x1fU))))) 
                                                    << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffeffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x20U))))) 
                                                    << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffdffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x21U))))) 
                                                    << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffbffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x22U))))) 
                                                    << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffff7ffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x23U))))) 
                                                    << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffefffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x24U))))) 
                                                    << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffdfffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x25U))))) 
                                                    << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffbfffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x26U))))) 
                                                    << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffff7fffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x27U))))) 
                                                    << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffeffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x28U))))) 
                                                    << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffdffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x29U))))) 
                                                    << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffbffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x2aU))))) 
                                                    << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffff7ffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x2bU))))) 
                                                    << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffefffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x2cU))))) 
                                                    << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffdfffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x2dU))))) 
                                                    << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffbfffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x2eU))))) 
                                                    << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffff7fffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x2fU))))) 
                                                    << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffeffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x30U))))) 
                                                    << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffdffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x31U))))) 
                                                    << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffbffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x32U))))) 
                                                    << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfff7ffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x33U))))) 
                                                    << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffefffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x34U))))) 
                                                    << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffdfffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x35U))))) 
                                                    << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffbfffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x36U))))) 
                                                    << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xff7fffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x37U))))) 
                                                    << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfeffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x38U))))) 
                                                    << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfdffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x39U))))) 
                                                    << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfbffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x3aU))))) 
                                                    << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xf7ffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x3bU))))) 
                                                    << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xefffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x3cU))))) 
                                                    << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xdfffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x3dU))))) 
                                                    << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xbfffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x3eU))))) 
                                                    << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0x7fffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x3fU))))) 
                                                    << 0x3fU));
    }
}
