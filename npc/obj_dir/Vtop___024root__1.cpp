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
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4524]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4525]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4526]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4527]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4528]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4529]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4530]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4531]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4532]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4533]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4534]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4535]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4536]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4537]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4538]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4539]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4540]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lwu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld))))) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu)))) {
        ++(vlSymsp->__Vcoverage[4605]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | (IData)((IData)((1U & (IData)((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))))))));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4606]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4607]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4608]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4609]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4610]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4611]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4612]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4613]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4614]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4615]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4616]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4617]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4618]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4619]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4620]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4621]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4622]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4623]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4624]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4625]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4626]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4627]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4628]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4629]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4630]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4631]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4632]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4633]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4634]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4635]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4636]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4637]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4638]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4639]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4640]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4641]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4642]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4643]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4644]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4645]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4646]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4647]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4648]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4649]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4650]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4651]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4652]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4653]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4654]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4655]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4656]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4657]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4658]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4659]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4660]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4661]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4662]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4663]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4664]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4665]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4666]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4667]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4668]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lhu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld))))) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu)))) {
        ++(vlSymsp->__Vcoverage[4733]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | (IData)((IData)((1U & (IData)((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))))))));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4734]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4735]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4736]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4737]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4738]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4739]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4740]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4741]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4742]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4743]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4744]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4745]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4746]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4747]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4748]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4749]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4750]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4751]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4752]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4753]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4754]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4755]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4756]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4757]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4758]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4759]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4760]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4761]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4762]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4763]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4764]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4765]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4766]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4767]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4768]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4769]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4770]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4771]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4772]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4773]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4774]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4775]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4776]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4777]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4778]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4779]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4780]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4781]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4782]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4783]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4784]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4785]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4786]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4787]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4788]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4789]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4790]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4791]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4792]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4793]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4794]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4795]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4796]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lbu) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__mem1__DOT__r_rdata_lw = (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__mem1__DOT__r_rdata_ld 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)));
    vlSelf->top__DOT__mem1__DOT__r_rdata_lh = (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__mem1__DOT__r_rdata_ld 
                                                                               >> 0xfU)))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))));
    vlSelf->top__DOT__mem1__DOT__r_rdata_lb = (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__mem1__DOT__r_rdata_ld 
                                                                               >> 7U)))))) 
                                                << 8U) 
                                               | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))));
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_lw) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw)))) {
        ++(vlSymsp->__Vcoverage[4413]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_lw)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4414]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4415]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4416]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4417]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4418]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4419]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4420]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4421]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4422]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4423]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4424]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4425]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4426]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4427]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4428]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4429]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4430]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4431]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4432]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4433]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4434]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4435]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4436]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4437]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4438]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4439]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4440]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4441]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4442]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4443]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4444]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4445]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4446]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4447]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4448]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4449]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4450]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4451]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4452]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4453]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4454]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4455]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4456]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4457]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4458]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4459]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4460]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4461]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4462]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4463]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4464]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4465]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4466]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4467]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4468]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4469]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4470]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4471]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4472]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4473]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4474]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4475]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4476]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lw) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_lh) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh)))) {
        ++(vlSymsp->__Vcoverage[4541]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_lh)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4542]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4543]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4544]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4545]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4546]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4547]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4548]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4549]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4550]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4551]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4552]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4553]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4554]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4555]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4556]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4557]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4558]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4559]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4560]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4561]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4562]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4563]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4564]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4565]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4566]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4567]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4568]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4569]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4570]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4571]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4572]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4573]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4574]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4575]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4576]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4577]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4578]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4579]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4580]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4581]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4582]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4583]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4584]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4585]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4586]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4587]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4588]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4589]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4590]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4591]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4592]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4593]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4594]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4595]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4596]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4597]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4598]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4599]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4600]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4601]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4602]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4603]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4604]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lh) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_lb) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb)))) {
        ++(vlSymsp->__Vcoverage[4669]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_lb)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4670]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4671]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4672]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4673]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4674]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4675]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4676]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4677]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4678]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4679]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4680]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4681]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4682]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4683]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4684]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4685]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4686]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4687]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4688]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4689]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4690]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4691]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4692]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4693]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4694]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4695]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4696]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4697]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4698]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4699]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4700]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4701]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4702]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4703]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4704]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4705]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4706]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4707]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4708]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4709]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4710]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4711]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4712]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4713]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4714]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4715]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4716]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4717]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4718]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4719]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4720]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4721]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4722]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4723]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4724]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4725]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4726]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4727]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4728]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4729]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4730]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4731]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4732]);
        vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem1__DOT____Vtogcov__r_rdata_lb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0U] 
        = (IData)((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))));
    vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[1U] 
        = (IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                   >> 0x20U));
    vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[2U] 
        = (0x40U | ((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_lb) 
                    << 7U));
    vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[3U] 
        = (((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_lb) 
            >> 0x19U) | ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                  >> 0x20U)) << 7U));
    vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[4U] 
        = (0x1000U | (((IData)((QData)((IData)((0xffffU 
                                                & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld))))) 
                       << 0xeU) | ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lb 
                                            >> 0x20U)) 
                                   >> 0x19U)));
    vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[5U] 
        = (((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld))))) 
            >> 0x12U) | ((IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                  >> 0x20U)) << 0xeU));
    vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[6U] 
        = (0x40000U | (((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_lh) 
                        << 0x15U) | ((IData)(((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))) 
                                              >> 0x20U)) 
                                     >> 0x12U)));
    vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[7U] 
        = (((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_lh) 
            >> 0xbU) | ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                 >> 0x20U)) << 0x15U));
    vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[8U] 
        = (0x1000000U | (((IData)((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld))) 
                          << 0x1cU) | ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lh 
                                                >> 0x20U)) 
                                       >> 0xbU)));
    vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[9U] 
        = (((IData)((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld))) 
            >> 4U) | ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                               >> 0x20U)) << 0x1cU));
    vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
        = (0x40000000U | ((IData)(((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)) 
                                   >> 0x20U)) >> 4U));
    vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
        = ((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_lw) 
           << 3U);
    vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
        = (((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_lw) 
            >> 0x1dU) | ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
        = (0x10U | (((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld) 
                     << 0xaU) | ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_lw 
                                          >> 0x20U)) 
                                 >> 0x1dU)));
    vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
        = (((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld) 
            >> 0x16U) | ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld 
                                  >> 0x20U)) << 0xaU));
    vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
        = (0x400U | ((IData)((vlSelf->top__DOT__mem1__DOT__r_rdata_ld 
                              >> 0x20U)) >> 0x16U));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0U];
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[1U];
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x7fU & vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[2U]);
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[3U] 
            << 0x19U) | (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[2U] 
                         >> 7U));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[4U] 
            << 0x19U) | (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[3U] 
                         >> 7U));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[4U] 
                    >> 7U));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[5U] 
            << 0x12U) | (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[4U] 
                         >> 0xeU));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[6U] 
            << 0x12U) | (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[5U] 
                         >> 0xeU));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[6U] 
                    >> 0xeU));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[7U] 
            << 0xbU) | (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[6U] 
                        >> 0x15U));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[8U] 
            << 0xbU) | (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[7U] 
                        >> 0x15U));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[8U] 
                    >> 0x15U));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[9U] 
            << 4U) | (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[8U] 
                      >> 0x1cU));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
            << 4U) | (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[9U] 
                      >> 0x1cU));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x7fU & ((vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
                     << 4U) | (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
                               >> 0x1cU)));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
            << 0x1dU) | (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
                         >> 3U));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
            << 0x1dU) | (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
                         >> 3U));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
                    >> 3U));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
            << 0x16U) | (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
                         >> 0xaU));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
            << 0x16U) | (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
                         >> 0xaU));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[6U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
                    >> 0xaU));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list[1U] 
        = (0x7fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list[2U] 
        = (0x7fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list[3U] 
        = (0x7fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list[4U] 
        = (0x7fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list[5U] 
        = (0x7fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list[6U] 
        = (0x7fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list
           [6U][2U]);
    if ((1U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[4805]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7eU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[4806]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7dU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[4807]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7bU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[4808]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x77U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (8U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[4809]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x6fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[4810]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x5fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[4811]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x3fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[4812]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0x7eU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (1U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[4813]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0x7dU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (2U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[4814]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0x7bU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (4U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [1U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[4815]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0x77U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (8U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [1U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[4816]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0x6fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x10U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [1U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[4817]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0x5fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x20U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [1U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[4818]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[1U] 
            = ((0x3fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [1U]) | (0x40U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[4819]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0x7eU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (1U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[4820]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0x7dU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (2U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[4821]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0x7bU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (4U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [2U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [2U]))) {
        ++(vlSymsp->__Vcoverage[4822]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0x77U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (8U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [2U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[4823]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0x6fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x10U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [2U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[4824]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0x5fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x20U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [2U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [2U]))) {
        ++(vlSymsp->__Vcoverage[4825]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[2U] 
            = ((0x3fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [2U]) | (0x40U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [2U]));
    }
    if ((1U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[4826]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0x7eU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (1U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((2U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[4827]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0x7dU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (2U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((4U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[4828]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0x7bU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (4U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((8U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [3U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [3U]))) {
        ++(vlSymsp->__Vcoverage[4829]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0x77U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (8U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [3U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[4830]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0x6fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x10U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [3U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[4831]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0x5fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x20U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [3U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [3U]))) {
        ++(vlSymsp->__Vcoverage[4832]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[3U] 
            = ((0x3fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [3U]) | (0x40U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [3U]));
    }
    if ((1U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[4833]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0x7eU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (1U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((2U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[4834]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0x7dU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (2U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((4U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[4835]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0x7bU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (4U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((8U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [4U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [4U]))) {
        ++(vlSymsp->__Vcoverage[4836]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0x77U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (8U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [4U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[4837]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0x6fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (0x10U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [4U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[4838]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0x5fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (0x20U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [4U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [4U]))) {
        ++(vlSymsp->__Vcoverage[4839]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[4U] 
            = ((0x3fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [4U]) | (0x40U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [4U]));
    }
    if ((1U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[4840]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0x7eU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (1U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((2U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[4841]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0x7dU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (2U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((4U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[4842]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0x7bU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (4U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((8U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [5U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [5U]))) {
        ++(vlSymsp->__Vcoverage[4843]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0x77U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (8U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [5U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[4844]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0x6fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (0x10U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [5U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[4845]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0x5fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (0x20U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [5U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [5U]))) {
        ++(vlSymsp->__Vcoverage[4846]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[5U] 
            = ((0x3fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [5U]) | (0x40U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [5U]));
    }
    if ((1U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [6U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[4847]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0x7eU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (1U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((2U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [6U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[4848]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0x7dU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (2U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((4U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [6U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[4849]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0x7bU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (4U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((8U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
               [6U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
               [6U]))) {
        ++(vlSymsp->__Vcoverage[4850]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0x77U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (8U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [6U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[4851]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0x6fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (0x10U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [6U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[4852]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0x5fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (0x20U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [6U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                  [6U] ^ vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                  [6U]))) {
        ++(vlSymsp->__Vcoverage[4853]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list[6U] 
            = ((0x3fU & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__key_list
                [6U]) | (0x40U & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                         [6U]));
    }
    ++(vlSymsp->__Vcoverage[4919]);
    ++(vlSymsp->__Vcoverage[4919]);
    ++(vlSymsp->__Vcoverage[4919]);
    ++(vlSymsp->__Vcoverage[4919]);
    ++(vlSymsp->__Vcoverage[4919]);
    ++(vlSymsp->__Vcoverage[4919]);
    ++(vlSymsp->__Vcoverage[4919]);
    ++(vlSymsp->__Vcoverage[4920]);
    ++(vlSymsp->__Vcoverage[4922]);
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                               == vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__l_choose) == vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__i = 7U;
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__ram_data = vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out;
    if (((IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[4918]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4854]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4855]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4856]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4857]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4858]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4859]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4860]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4861]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4862]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4863]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4864]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4865]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4866]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4867]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4868]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4869]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4870]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4871]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4872]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4873]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4874]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4875]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4876]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4877]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4878]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4879]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4880]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4881]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4882]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4883]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4884]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4885]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4886]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4887]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4888]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4889]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4890]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4891]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4892]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4893]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4894]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4895]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4896]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4897]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4898]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4899]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4900]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4901]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4902]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4903]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4904]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4905]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4906]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4907]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4908]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4909]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4910]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4911]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4912]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4913]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4914]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4915]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4916]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4917]);
        vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out 
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
