// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Variables
    VlWide<8>/*255:0*/ __Vtemp70;
    VlWide<12>/*383:0*/ __Vtemp74;
    VlWide<24>/*767:0*/ __Vtemp84;
    VlWide<3>/*95:0*/ __Vtemp205;
    VlWide<3>/*95:0*/ __Vtemp208;
    VlWide<3>/*95:0*/ __Vtemp258;
    VlWide<3>/*95:0*/ __Vtemp259;
    VlWide<3>/*95:0*/ __Vtemp260;
    VlWide<3>/*95:0*/ __Vtemp261;
    VlWide<3>/*95:0*/ __Vtemp262;
    VlWide<3>/*95:0*/ __Vtemp264;
    VlWide<3>/*95:0*/ __Vtemp265;
    VlWide<3>/*95:0*/ __Vtemp280;
    // Body
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__pair_list[0U] = 1U;
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__pair_list[1U] = 2U;
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list[0U] = 0U;
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list[1U] = 4U;
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list[2U] = 3U;
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list[0U] = 0U;
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list[1U] = 4U;
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list[2U] = 3U;
    vlSelf->mem_finish = (4U == (IData)(vlSelf->top__DOT__mem0__DOT__mem_state));
    vlSelf->inst_update = (2U == (IData)(vlSelf->top__DOT__i0__DOT__state));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0U] 
        = (IData)((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)))));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[1U] 
        = (IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)))) 
                   >> 0x20U));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[2U] 
        = (0x40U | ((IData)((((- (QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                             >> 7U)))))) 
                              << 8U) | (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)))))) 
                    << 7U));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[3U] 
        = (((IData)((((- (QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                        >> 7U)))))) 
                      << 8U) | (QData)((IData)((0xffU 
                                                & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)))))) 
            >> 0x19U) | ((IData)(((((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                                   >> 7U)))))) 
                                    << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata))))) 
                                  >> 0x20U)) << 7U));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[4U] 
        = (0x1000U | (((IData)((QData)((IData)((0xffffU 
                                                & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata))))) 
                       << 0xeU) | ((IData)(((((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                                             >> 7U)))))) 
                                              << 8U) 
                                             | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata))))) 
                                            >> 0x20U)) 
                                   >> 0x19U)));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[5U] 
        = (((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata))))) 
            >> 0x12U) | ((IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)))) 
                                  >> 0x20U)) << 0xeU));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[6U] 
        = (0x40000U | (((IData)((((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                                 >> 0xfU)))))) 
                                  << 0x10U) | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)))))) 
                        << 0x15U) | ((IData)(((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)))) 
                                              >> 0x20U)) 
                                     >> 0x12U)));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[7U] 
        = (((IData)((((- (QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                        >> 0xfU)))))) 
                      << 0x10U) | (QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)))))) 
            >> 0xbU) | ((IData)(((((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                                  >> 0xfU)))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata))))) 
                                 >> 0x20U)) << 0x15U));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[8U] 
        = (0x1000000U | (((IData)((QData)((IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata))) 
                          << 0x1cU) | ((IData)(((((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                                                >> 0xfU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata))))) 
                                                >> 0x20U)) 
                                       >> 0xbU)));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[9U] 
        = (((IData)((QData)((IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata))) 
            >> 4U) | ((IData)(((QData)((IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)) 
                               >> 0x20U)) << 0x1cU));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
        = (0x40000000U | ((IData)(((QData)((IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)) 
                                   >> 0x20U)) >> 4U));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
        = ((IData)((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)))) 
           << 3U);
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
        = (((IData)((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata))) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
        = (0x10U | (((IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata) 
                     << 0xaU) | ((IData)(((((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata))) 
                                          >> 0x20U)) 
                                 >> 0x1dU)));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
        = (((IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata) 
            >> 0x16U) | ((IData)((vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                  >> 0x20U)) << 0xaU));
    vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
        = (0x400U | ((IData)((vlSelf->top__DOT__mem0__DOT__reg_rdata 
                              >> 0x20U)) >> 0x16U));
    vlSelf->inst = (IData)(vlSelf->top__DOT__i0__DOT__r_rdata);
    vlSelf->top__DOT__rvalid_0 = ((1U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                   ? (1U & (IData)(vlSelf->top__DOT__arbiter_0__DOT__rvalid))
                                   : 0U);
    vlSelf->top__DOT__rvalid_1 = ((2U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                   ? (1U & (IData)(vlSelf->top__DOT__arbiter_0__DOT__rvalid))
                                   : 0U);
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__data_list[1U] 
        = (1U & vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__data_list[1U] 
        = (1U & vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (1U & vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = (1U & vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list
                 [2U] >> 1U));
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (1U & vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = (1U & vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list
                 [2U] >> 1U));
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (1U & vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = (1U & vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list
                 [2U] >> 1U));
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (1U & vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = (1U & vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list
                 [2U] >> 1U));
    vlSelf->top__DOT__arvalid_1 = ((0U == (IData)(vlSelf->top__DOT__mem0__DOT__read_state)) 
                                   & (IData)(vlSelf->inst_update));
    vlSelf->top__DOT__wvalid_1 = ((0U == (IData)(vlSelf->top__DOT__mem0__DOT__write_state)) 
                                  & (IData)(vlSelf->inst_update));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0U];
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[1U];
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x7fU & vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[2U]);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[3U] 
            << 0x19U) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[2U] 
                         >> 7U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[4U] 
            << 0x19U) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[3U] 
                         >> 7U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[4U] 
                    >> 7U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[5U] 
            << 0x12U) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[4U] 
                         >> 0xeU));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[6U] 
            << 0x12U) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[5U] 
                         >> 0xeU));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[6U] 
                    >> 0xeU));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[7U] 
            << 0xbU) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[6U] 
                        >> 0x15U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[8U] 
            << 0xbU) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[7U] 
                        >> 0x15U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[8U] 
                    >> 0x15U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[9U] 
            << 4U) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[8U] 
                      >> 0x1cU));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
            << 4U) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[9U] 
                      >> 0x1cU));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x7fU & ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
                     << 4U) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
                               >> 0x1cU)));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
            << 0x1dU) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
                         >> 3U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
            << 0x1dU) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
                         >> 3U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
                    >> 3U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
            << 0x16U) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
                         >> 0xaU));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
            << 0x16U) | (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
                         >> 0xaU));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[6U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
                    >> 0xaU));
    vlSelf->top__DOT__e_inst = ((0x100073U == vlSelf->inst)
                                 ? 1U : ((0x73U == vlSelf->inst)
                                          ? 2U : ((0x30200073U 
                                                   == vlSelf->inst)
                                                   ? 4U
                                                   : 0U)));
    vlSelf->top__DOT__src2 = vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->top__DOT__src1 = vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    vlSelf->top__DOT__fu_7_d = ((0x18U & (IData)(vlSelf->top__DOT__fu_7_d)) 
                                | (((1U == (vlSelf->inst 
                                            >> 0x19U)) 
                                    << 2U) | (((0x20U 
                                                == 
                                                (vlSelf->inst 
                                                 >> 0x19U)) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (vlSelf->inst 
                                                  >> 0x19U)))));
    vlSelf->top__DOT__fu_7_d = ((7U & (IData)(vlSelf->top__DOT__fu_7_d)) 
                                | (((0x10U == (vlSelf->inst 
                                               >> 0x1aU)) 
                                    << 4U) | ((0U == 
                                               (vlSelf->inst 
                                                >> 0x1aU)) 
                                              << 3U)));
    vlSelf->top__DOT__op_d = ((0xff8U & (IData)(vlSelf->top__DOT__op_d)) 
                              | (((0x6fU == (0x7fU 
                                             & vlSelf->inst)) 
                                  << 2U) | (((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->inst)) 
                                             << 1U) 
                                            | (0x37U 
                                               == (0x7fU 
                                                   & vlSelf->inst)))));
    vlSelf->top__DOT__op_d = ((0xfc7U & (IData)(vlSelf->top__DOT__op_d)) 
                              | (((3U == (0x7fU & vlSelf->inst)) 
                                  << 5U) | (((0x63U 
                                              == (0x7fU 
                                                  & vlSelf->inst)) 
                                             << 4U) 
                                            | ((0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               << 3U))));
    vlSelf->top__DOT__op_d = ((0xe3fU & (IData)(vlSelf->top__DOT__op_d)) 
                              | (((0x33U == (0x7fU 
                                             & vlSelf->inst)) 
                                  << 8U) | (((0x13U 
                                              == (0x7fU 
                                                  & vlSelf->inst)) 
                                             << 7U) 
                                            | ((0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               << 6U))));
    vlSelf->top__DOT__op_d = ((0x1ffU & (IData)(vlSelf->top__DOT__op_d)) 
                              | (((0x3bU == (0x7fU 
                                             & vlSelf->inst)) 
                                  << 0xbU) | (((0x1bU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               << 0xaU) 
                                              | ((0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst)) 
                                                 << 9U))));
    vlSelf->top__DOT__id_0__DOT__immi = (((- (QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->inst 
                                                            >> 0x14U))));
    vlSelf->top__DOT__id_0__DOT__immu = (((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (0xfffff000U 
                                                            & vlSelf->inst))));
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__state) 
            == vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__key_list
            [0U]) & vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__state) 
           == vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__state) 
               == vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__key_list
               [1U]) & vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__i = 2U;
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__state) 
              == vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__arbiter_0__DOT__arready = vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->top__DOT__i0__DOT__state) 
            == vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list
            [0U]) & vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__i0__DOT__state) 
           == vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__i = 3U;
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__i0__DOT__state) 
               == vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list
               [1U]) & vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__i0__DOT__state) 
              == vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__i0__DOT__state) 
               == vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list
               [2U]) & vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__i0__DOT__state) 
              == vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__rready_0 = vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->top__DOT__mem0__DOT__read_state) 
            == vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list
            [0U]) & vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem0__DOT__read_state) 
           == vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__i = 3U;
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__mem0__DOT__read_state) 
               == vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list
               [1U]) & vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__mem0__DOT__read_state) 
              == vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__mem0__DOT__read_state) 
               == vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list
               [2U]) & vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__mem0__DOT__read_state) 
              == vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__rready_1 = vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[1U] 
        = (0x7fU & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[2U] 
        = (0x7fU & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[3U] 
        = (0x7fU & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[4U] 
        = (0x7fU & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[5U] 
        = (0x7fU & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[6U] 
        = (0x7fU & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->ebreak = (1U & (IData)(vlSelf->top__DOT__e_inst));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[0U] 
        = (IData)((((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__src1 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__src1))));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[1U] 
        = (IData)(((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__src1 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__src1))) 
                   >> 0x20U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[2U] 
        = (8U | ((IData)((QData)((IData)(vlSelf->top__DOT__src1))) 
                 << 4U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[3U] 
        = (((IData)((QData)((IData)(vlSelf->top__DOT__src1))) 
            >> 0x1cU) | ((IData)(((QData)((IData)(vlSelf->top__DOT__src1)) 
                                  >> 0x20U)) << 4U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
        = (0x40U | (((IData)(vlSelf->cpupc) << 8U) 
                    | ((IData)(((QData)((IData)(vlSelf->top__DOT__src1)) 
                                >> 0x20U)) >> 0x1cU)));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[5U] 
        = (((IData)(vlSelf->cpupc) >> 0x18U) | ((IData)(
                                                        (vlSelf->cpupc 
                                                         >> 0x20U)) 
                                                << 8U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[6U] 
        = (0x200U | (((IData)(vlSelf->top__DOT__src1) 
                      << 0xcU) | ((IData)((vlSelf->cpupc 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[7U] 
        = (((IData)(vlSelf->top__DOT__src1) >> 0x14U) 
           | ((IData)((vlSelf->top__DOT__src1 >> 0x20U)) 
              << 0xcU));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[8U] 
        = (0x1000U | ((IData)((vlSelf->top__DOT__src1 
                               >> 0x20U)) >> 0x14U));
    vlSelf->top__DOT__control_0__DOT__csrrw = (1U & 
                                               ((((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->inst 
                                                      >> 0xcU))) 
                                                 >> 1U) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 9U)));
    vlSelf->top__DOT__control_0__DOT__csrrs = (1U & 
                                               ((((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->inst 
                                                      >> 0xcU))) 
                                                 >> 2U) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 9U)));
    vlSelf->top__DOT__control_0__DOT__beq = (1U & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 4U)));
    vlSelf->top__DOT__control_0__DOT__bne = (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 4U)));
    vlSelf->top__DOT__control_0__DOT__addi = (1U & 
                                              (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU))) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 7U)));
    vlSelf->top__DOT__control_0__DOT__andi = (1U & 
                                              ((((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))) 
                                                >> 7U) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 7U)));
    vlSelf->top__DOT__control_0__DOT__xori = (1U & 
                                              ((((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))) 
                                                >> 4U) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 7U)));
    vlSelf->top__DOT__control_0__DOT__ori = (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 6U) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 7U)));
    vlSelf->top__DOT__control_0__DOT__sltiu = (1U & 
                                               ((((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->inst 
                                                      >> 0xcU))) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 7U)));
    vlSelf->top__DOT__control_0__DOT__sll = (1U & (
                                                   ((IData)(vlSelf->top__DOT__fu_7_d) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU))) 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__srl = (1U & (
                                                   ((IData)(vlSelf->top__DOT__fu_7_d) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU))) 
                                                       >> 5U)) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__sra = (1U & (
                                                   (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                     >> 1U) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU))) 
                                                       >> 5U)) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__divu = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 2U) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 8U)));
    vlSelf->top__DOT__control_0__DOT__div = (1U & (
                                                   (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                     >> 2U) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU))) 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__rem = (1U & (
                                                   (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                     >> 2U) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU))) 
                                                       >> 6U)) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__remu = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 2U) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 7U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 8U)));
    vlSelf->top__DOT__control_0__DOT__Add = (1U & (
                                                   ((IData)(vlSelf->top__DOT__fu_7_d) 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->inst 
                                                           >> 0xcU)))) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__Mul = (1U & (
                                                   (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                     >> 2U) 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->inst 
                                                           >> 0xcU)))) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__And = (1U & (
                                                   ((IData)(vlSelf->top__DOT__fu_7_d) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU))) 
                                                       >> 7U)) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__Xor = (1U & (
                                                   ((IData)(vlSelf->top__DOT__fu_7_d) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU))) 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__Or = (1U & (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->inst 
                                                           >> 0xcU))) 
                                                      >> 6U)) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 8U)));
    vlSelf->top__DOT__control_0__DOT__sltu = (1U & 
                                              (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 3U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 8U)));
    vlSelf->top__DOT__control_0__DOT__slt = (1U & (
                                                   ((IData)(vlSelf->top__DOT__fu_7_d) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU))) 
                                                       >> 2U)) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__sub = (1U & (
                                                   (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                     >> 1U) 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->inst 
                                                           >> 0xcU)))) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__srai = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 4U) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 7U)));
    vlSelf->top__DOT__control_0__DOT__slli = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 3U) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 7U)));
    vlSelf->top__DOT__control_0__DOT__srli = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 3U) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 7U)));
    vlSelf->top__DOT__control_0__DOT__sd = (1U & ((
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 3U) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 6U)));
    vlSelf->top__DOT__control_0__DOT__sh = (1U & ((
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 1U) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 6U)));
    vlSelf->top__DOT__control_0__DOT__sw = (1U & ((
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 2U) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 6U)));
    vlSelf->top__DOT__control_0__DOT__sb = (1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->inst 
                                                       >> 0xcU))) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 6U)));
    vlSelf->top__DOT__control_0__DOT__jalr = (1U & 
                                              (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU))) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 3U)));
    vlSelf->top__DOT__control_0__DOT__bge = (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 4U)));
    vlSelf->top__DOT__control_0__DOT__bgeu = (1U & 
                                              ((((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))) 
                                                >> 7U) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 4U)));
    vlSelf->top__DOT__control_0__DOT__bltu = (1U & 
                                              ((((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))) 
                                                >> 6U) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 4U)));
    vlSelf->top__DOT__control_0__DOT__blt = (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 4U) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 4U)));
    vlSelf->top__DOT__control_0__DOT__addiw = (1U & 
                                               (((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 0xaU)));
    vlSelf->top__DOT__control_0__DOT__sllw = (1U & 
                                              (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__srlw = (1U & 
                                              (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__sraw = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 1U) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__slliw = (1U & 
                                               ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                  >> 3U) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 0xaU)));
    vlSelf->top__DOT__control_0__DOT__srliw = (1U & 
                                               ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                  >> 3U) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 5U)) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 0xaU)));
    vlSelf->top__DOT__control_0__DOT__sraiw = (1U & 
                                               ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                  >> 4U) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 5U)) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 0xaU)));
    vlSelf->top__DOT__control_0__DOT__addw = (1U & 
                                              (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->inst 
                                                       >> 0xcU)))) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__subw = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 1U) 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->inst 
                                                       >> 0xcU)))) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__mulw = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 2U) 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->inst 
                                                       >> 0xcU)))) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__divw = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 2U) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 4U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__divuw = (1U & 
                                               ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                  >> 2U) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 5U)) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__remw = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 2U) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 6U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__remuw = (1U & 
                                               ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                  >> 2U) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 7U)) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__lw = (1U & ((
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 2U) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 5U)));
    vlSelf->top__DOT__control_0__DOT__lwu = (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 6U) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 5U)));
    vlSelf->top__DOT__control_0__DOT__lh = (1U & ((
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 1U) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 5U)));
    vlSelf->top__DOT__control_0__DOT__lhu = (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 5U)));
    vlSelf->top__DOT__control_0__DOT__lb = (1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->inst 
                                                       >> 0xcU))) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 5U)));
    vlSelf->top__DOT__control_0__DOT__lbu = (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 4U) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 5U)));
    vlSelf->top__DOT__control_0__DOT__ld = (1U & ((
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 3U) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 5U)));
    __Vtemp70[6U] = (((IData)((((- (QData)((IData)(
                                                   (vlSelf->inst 
                                                    >> 0x1fU)))) 
                                << 0xdU) | (QData)((IData)(
                                                           ((0x1000U 
                                                             & (vlSelf->inst 
                                                                >> 0x13U)) 
                                                            | ((0x800U 
                                                                & (vlSelf->inst 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->inst 
                                                                        >> 7U))))))))) 
                      >> 0x1cU) | ((IData)(((((- (QData)((IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x1fU)))) 
                                              << 0xdU) 
                                             | (QData)((IData)(
                                                               ((0x1000U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x13U)) 
                                                                | ((0x800U 
                                                                    & (vlSelf->inst 
                                                                       << 4U)) 
                                                                   | ((0x7e0U 
                                                                       & (vlSelf->inst 
                                                                          >> 0x14U)) 
                                                                      | (0x1eU 
                                                                         & (vlSelf->inst 
                                                                            >> 7U)))))))) 
                                            >> 0x20U)) 
                                   << 4U));
    __Vtemp74[0xaU] = (((IData)((((- (QData)((IData)(
                                                     (vlSelf->inst 
                                                      >> 0x1fU)))) 
                                  << 0x15U) | (QData)((IData)(
                                                              ((0x100000U 
                                                                & (vlSelf->inst 
                                                                   >> 0xbU)) 
                                                               | ((0xff000U 
                                                                   & vlSelf->inst) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->inst 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->inst 
                                                                           >> 0x14U))))))))) 
                        >> 4U) | ((IData)(((((- (QData)((IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU)))) 
                                             << 0x15U) 
                                            | (QData)((IData)(
                                                              ((0x100000U 
                                                                & (vlSelf->inst 
                                                                   >> 0xbU)) 
                                                               | ((0xff000U 
                                                                   & vlSelf->inst) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->inst 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->inst 
                                                                           >> 0x14U)))))))) 
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp84[7U] = ((0xfffff0U & ((IData)((((- (QData)((IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU)))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              ((0xfe0U 
                                                                & (vlSelf->inst 
                                                                   >> 0x14U)) 
                                                               | (0x1fU 
                                                                  & (vlSelf->inst 
                                                                     >> 7U))))))) 
                                   << 4U)) | (0xff000000U 
                                              & ((IData)(
                                                         (((- (QData)((IData)(
                                                                              (vlSelf->inst 
                                                                               >> 0x1fU)))) 
                                                           << 0xcU) 
                                                          | (QData)((IData)(
                                                                            ((0xfe0U 
                                                                              & (vlSelf->inst 
                                                                                >> 0x14U)) 
                                                                             | (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))))))) 
                                                 << 4U)));
    __Vtemp84[8U] = ((((IData)((((- (QData)((IData)(
                                                    (vlSelf->inst 
                                                     >> 0x1fU)))) 
                                 << 0xcU) | (QData)((IData)(
                                                            ((0xfe0U 
                                                              & (vlSelf->inst 
                                                                 >> 0x14U)) 
                                                             | (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U))))))) 
                       >> 0x1cU) | (0xfffff0U & ((IData)(
                                                         ((((- (QData)((IData)(
                                                                               (vlSelf->inst 
                                                                                >> 0x1fU)))) 
                                                            << 0xcU) 
                                                           | (QData)((IData)(
                                                                             ((0xfe0U 
                                                                               & (vlSelf->inst 
                                                                                >> 0x14U)) 
                                                                              | (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U)))))) 
                                                          >> 0x20U)) 
                                                 << 4U))) 
                     | (0xff000000U & ((IData)(((((- (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->inst 
                                                                          >> 7U)))))) 
                                                >> 0x20U)) 
                                       << 4U)));
    __Vtemp84[0xeU] = (1U | ((0xffff00U & ((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
                                           << 8U)) 
                             | (0xff000000U & ((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
                                               << 8U))));
    __Vtemp84[0xfU] = ((((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
                         >> 0x18U) | (0xffff00U & ((IData)(
                                                           (vlSelf->top__DOT__id_0__DOT__immi 
                                                            >> 0x20U)) 
                                                   << 8U))) 
                       | (0xff000000U & ((IData)((vlSelf->top__DOT__id_0__DOT__immi 
                                                  >> 0x20U)) 
                                         << 8U)));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0U] 
        = (IData)(vlSelf->top__DOT__id_0__DOT__immi);
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[1U] 
        = (IData)((vlSelf->top__DOT__id_0__DOT__immi 
                   >> 0x20U));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[2U] 
        = (0x400U | ((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
                     << 0xcU));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[3U] 
        = (((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
            >> 0x14U) | ((IData)((vlSelf->top__DOT__id_0__DOT__immi 
                                  >> 0x20U)) << 0xcU));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[4U] 
        = (0x200000U | (((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
                         << 0x18U) | ((IData)((vlSelf->top__DOT__id_0__DOT__immi 
                                               >> 0x20U)) 
                                      >> 0x14U)));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[5U] 
        = (((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
            >> 8U) | ((IData)((vlSelf->top__DOT__id_0__DOT__immi 
                               >> 0x20U)) << 0x18U));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[6U] 
        = (0x80000000U | ((IData)((vlSelf->top__DOT__id_0__DOT__immi 
                                   >> 0x20U)) >> 8U));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[7U] 
        = __Vtemp84[7U];
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[8U] 
        = __Vtemp84[8U];
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[9U] 
        = (0x400U | (((0xff0000U & ((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
                                    << 0x10U)) | ((IData)(
                                                          ((((- (QData)((IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x1fU)))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              ((0xfe0U 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U)) 
                                                                               | (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U)))))) 
                                                           >> 0x20U)) 
                                                  >> 0x1cU)) 
                     | (0xff000000U & ((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
                                       << 0x10U))));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xaU] 
        = ((((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
             >> 0x10U) | (0xff0000U & ((IData)((vlSelf->top__DOT__id_0__DOT__immi 
                                                >> 0x20U)) 
                                       << 0x10U))) 
           | (0xff000000U & ((IData)((vlSelf->top__DOT__id_0__DOT__immi 
                                      >> 0x20U)) << 0x10U)));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xbU] 
        = (0x200000U | (((IData)((vlSelf->top__DOT__id_0__DOT__immi 
                                  >> 0x20U)) >> 0x10U) 
                        | ((IData)((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xdU) | (QData)((IData)(
                                                                ((0x1000U 
                                                                  & (vlSelf->inst 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->inst 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlSelf->inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (vlSelf->inst 
                                                                             >> 7U))))))))) 
                           << 0x1cU)));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xcU] 
        = ((0xffffffU & ((IData)((((- (QData)((IData)(
                                                      (vlSelf->inst 
                                                       >> 0x1fU)))) 
                                   << 0xdU) | (QData)((IData)(
                                                              ((0x1000U 
                                                                & (vlSelf->inst 
                                                                   >> 0x13U)) 
                                                               | ((0x800U 
                                                                   & (vlSelf->inst 
                                                                      << 4U)) 
                                                                  | ((0x7e0U 
                                                                      & (vlSelf->inst 
                                                                         >> 0x14U)) 
                                                                     | (0x1eU 
                                                                        & (vlSelf->inst 
                                                                           >> 7U))))))))) 
                         >> 4U)) | (__Vtemp70[6U] << 0x18U));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xdU] 
        = ((__Vtemp70[6U] >> 8U) | (0xf000000U & ((IData)(
                                                          ((((- (QData)((IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x1fU)))) 
                                                             << 0xdU) 
                                                            | (QData)((IData)(
                                                                              ((0x1000U 
                                                                                & (vlSelf->inst 
                                                                                >> 0x13U)) 
                                                                               | ((0x800U 
                                                                                & (vlSelf->inst 
                                                                                << 4U)) 
                                                                                | ((0x7e0U 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U)) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U)))))))) 
                                                           >> 0x20U)) 
                                                  >> 4U)));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xeU] 
        = __Vtemp84[0xeU];
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xfU] 
        = __Vtemp84[0xfU];
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x10U] 
        = (0x800U | (((0xf00000U & ((IData)((((- (QData)((IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x1fU)))) 
                                              << 0x15U) 
                                             | (QData)((IData)(
                                                               ((0x100000U 
                                                                 & (vlSelf->inst 
                                                                    >> 0xbU)) 
                                                                | ((0xff000U 
                                                                    & vlSelf->inst) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->inst 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->inst 
                                                                            >> 0x14U))))))))) 
                                    << 0x14U)) | ((IData)(
                                                          (vlSelf->top__DOT__id_0__DOT__immi 
                                                           >> 0x20U)) 
                                                  >> 0x18U)) 
                     | (__Vtemp74[0xaU] << 0x18U)));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x11U] 
        = ((__Vtemp74[0xaU] >> 8U) | (0xff000000U & 
                                      ((IData)(((((- (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x1fU)))) 
                                                  << 0x15U) 
                                                 | (QData)((IData)(
                                                                   ((0x100000U 
                                                                     & (vlSelf->inst 
                                                                        >> 0xbU)) 
                                                                    | ((0xff000U 
                                                                        & vlSelf->inst) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->inst 
                                                                              >> 9U)) 
                                                                          | (0x7feU 
                                                                             & (vlSelf->inst 
                                                                                >> 0x14U)))))))) 
                                                >> 0x20U)) 
                                       << 0x14U)));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x12U] 
        = (0x400000U | ((IData)(((((- (QData)((IData)(
                                                      (vlSelf->inst 
                                                       >> 0x1fU)))) 
                                   << 0x15U) | (QData)((IData)(
                                                               ((0x100000U 
                                                                 & (vlSelf->inst 
                                                                    >> 0xbU)) 
                                                                | ((0xff000U 
                                                                    & vlSelf->inst) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->inst 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->inst 
                                                                            >> 0x14U)))))))) 
                                 >> 0x20U)) >> 0xcU));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x13U] 
        = ((0xffffffU & (IData)(vlSelf->top__DOT__id_0__DOT__immu)) 
           | (0xff000000U & (IData)(vlSelf->top__DOT__id_0__DOT__immu)));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x14U] 
        = ((0xffffffU & (IData)((vlSelf->top__DOT__id_0__DOT__immu 
                                 >> 0x20U))) | (0xff000000U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__id_0__DOT__immu 
                                                           >> 0x20U))));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x15U] 
        = (2U | ((0xfff000U & ((IData)(vlSelf->top__DOT__id_0__DOT__immu) 
                               << 0xcU)) | (0xff000000U 
                                            & ((IData)(vlSelf->top__DOT__id_0__DOT__immu) 
                                               << 0xcU))));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x16U] 
        = ((((IData)(vlSelf->top__DOT__id_0__DOT__immu) 
             >> 0x14U) | (0xfff000U & ((IData)((vlSelf->top__DOT__id_0__DOT__immu 
                                                >> 0x20U)) 
                                       << 0xcU))) | 
           (0xff000000U & ((IData)((vlSelf->top__DOT__id_0__DOT__immu 
                                    >> 0x20U)) << 0xcU)));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x17U] 
        = (0x1000U | ((IData)((vlSelf->top__DOT__id_0__DOT__immu 
                               >> 0x20U)) >> 0x14U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[0U];
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[1U];
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[2U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[3U] 
            << 0x1cU) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[2U] 
                         >> 4U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
            << 0x1cU) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[3U] 
                         >> 4U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
                   >> 4U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[5U] 
            << 0x18U) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
                         >> 8U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[6U] 
            << 0x18U) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[5U] 
                         >> 8U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfU & (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[6U] 
                   >> 8U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[7U] 
            << 0x14U) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[6U] 
                         >> 0xcU));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[8U] 
            << 0x14U) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[7U] 
                         >> 0xcU));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfU & (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[8U] 
                   >> 0xcU));
    vlSelf->top__DOT__data_ram_wen = (((((IData)(vlSelf->top__DOT__control_0__DOT__sd) 
                                         | (IData)(vlSelf->top__DOT__control_0__DOT__sb)) 
                                        | (IData)(vlSelf->top__DOT__control_0__DOT__sh)) 
                                       | (IData)(vlSelf->top__DOT__control_0__DOT__sw)) 
                                      | (IData)(vlSelf->top__DOT__control_0__DOT__sb));
    vlSelf->top__DOT__w_choose = ((((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__addw) 
                                              | (IData)(vlSelf->top__DOT__control_0__DOT__subw)) 
                                             | (IData)(vlSelf->top__DOT__control_0__DOT__mulw)) 
                                            | (IData)(vlSelf->top__DOT__control_0__DOT__divw)) 
                                           | (IData)(vlSelf->top__DOT__control_0__DOT__divuw)) 
                                          | (IData)(vlSelf->top__DOT__control_0__DOT__remw)) 
                                         | (IData)(vlSelf->top__DOT__control_0__DOT__sllw)) 
                                        | (IData)(vlSelf->top__DOT__control_0__DOT__srlw)) 
                                       | (IData)(vlSelf->top__DOT__control_0__DOT__sraw)) 
                                      | (IData)(vlSelf->top__DOT__control_0__DOT__addiw)) 
                                     | (IData)(vlSelf->top__DOT__control_0__DOT__sraiw)) 
                                    | (IData)(vlSelf->top__DOT__control_0__DOT__slliw)) 
                                   | (IData)(vlSelf->top__DOT__control_0__DOT__srliw)) 
                                  | (IData)(vlSelf->top__DOT__control_0__DOT__remuw));
    vlSelf->top__DOT__sel_rf_res = ((((((((IData)(vlSelf->top__DOT__control_0__DOT__ld) 
                                          | (IData)(vlSelf->top__DOT__control_0__DOT__lw)) 
                                         | (IData)(vlSelf->top__DOT__control_0__DOT__lwu)) 
                                        | (IData)(vlSelf->top__DOT__control_0__DOT__lh)) 
                                       | (IData)(vlSelf->top__DOT__control_0__DOT__lhu)) 
                                      | (IData)(vlSelf->top__DOT__control_0__DOT__lb)) 
                                     | (IData)(vlSelf->top__DOT__control_0__DOT__lbu))
                                     ? 2U : (((IData)(vlSelf->top__DOT__control_0__DOT__csrrw) 
                                              | (IData)(vlSelf->top__DOT__control_0__DOT__csrrs))
                                              ? 4U : 1U));
    vlSelf->not_have = (1U & ((((((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__addi) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__andi)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__xori)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__ori)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sll)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__srl)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sra)) 
                                                                                | (IData)(vlSelf->top__DOT__op_d)) 
                                                                                | ((IData)(vlSelf->top__DOT__op_d) 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__jalr)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sd)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sh)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sw)) 
                                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__sb)) 
                                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__lw)) 
                                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__lwu)) 
                                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__lh)) 
                                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__lhu)) 
                                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__lb)) 
                                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__lbu)) 
                                                                        | (IData)(vlSelf->top__DOT__control_0__DOT__ld)) 
                                                                       | (IData)(vlSelf->top__DOT__control_0__DOT__divu)) 
                                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__Add)) 
                                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__Mul)) 
                                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__And)) 
                                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__Xor)) 
                                                                  | (IData)(vlSelf->top__DOT__control_0__DOT__Or)) 
                                                                 | (IData)(vlSelf->top__DOT__control_0__DOT__sltu)) 
                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__slt)) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__sub)) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__sltiu)) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__beq)) 
                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__bne)) 
                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__bge)) 
                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__bgeu)) 
                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__bltu)) 
                                                        | (IData)(vlSelf->top__DOT__control_0__DOT__blt)) 
                                                       | ((IData)(vlSelf->top__DOT__op_d) 
                                                          >> 1U)) 
                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__rem)) 
                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__remu)) 
                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__div)) 
                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__addw)) 
                                                  | (IData)(vlSelf->top__DOT__control_0__DOT__subw)) 
                                                 | (IData)(vlSelf->top__DOT__control_0__DOT__mulw)) 
                                                | (IData)(vlSelf->top__DOT__control_0__DOT__remuw)) 
                                               | (IData)(vlSelf->top__DOT__control_0__DOT__divw)) 
                                              | (IData)(vlSelf->top__DOT__control_0__DOT__divuw)) 
                                             | (IData)(vlSelf->top__DOT__control_0__DOT__remw)) 
                                            | (IData)(vlSelf->top__DOT__control_0__DOT__addiw)) 
                                           | (IData)(vlSelf->top__DOT__control_0__DOT__srliw)) 
                                          | (IData)(vlSelf->top__DOT__control_0__DOT__slliw)) 
                                         | (IData)(vlSelf->top__DOT__control_0__DOT__sraiw)) 
                                        | (IData)(vlSelf->top__DOT__control_0__DOT__slli)) 
                                       | (IData)(vlSelf->top__DOT__control_0__DOT__srli)) 
                                      | (IData)(vlSelf->top__DOT__control_0__DOT__srai)) 
                                     | (IData)(vlSelf->top__DOT__control_0__DOT__sllw)) 
                                    | (IData)(vlSelf->top__DOT__control_0__DOT__sraw)) 
                                   | (IData)(vlSelf->top__DOT__control_0__DOT__srlw)) 
                                  | (IData)(vlSelf->top__DOT__control_0__DOT__csrrs)) 
                                 | (IData)(vlSelf->top__DOT__control_0__DOT__csrrw)) 
                                | ((IData)(vlSelf->top__DOT__e_inst) 
                                   >> 1U)) | ((IData)(vlSelf->top__DOT__e_inst) 
                                              >> 2U)) 
                              | (IData)(vlSelf->top__DOT__e_inst)));
    vlSelf->top__DOT__l_choose = (((((((1U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__ld)))) 
                                       | (2U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__lw))))) 
                                      | (4U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__lwu))))) 
                                     | (8U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__lh))))) 
                                    | (0x10U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__lhu))))) 
                                   | (0x20U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__lb))))) 
                                  | (0x40U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__lbu)))));
    vlSelf->top__DOT__sel_alu_src1 = ((((1U & (- (IData)(
                                                         ((((((((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__Add) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__addi)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__ld)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sd)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__slt)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sll)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__srl)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sra)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__And)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__Or)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__Xor)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sltiu)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__andi)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__ori)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__xori)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__Mul)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__divu)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__bge)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__bgeu)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__blt)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__bltu)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__lw)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__lwu)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__lh)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__lhu)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__lb)) 
                                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__lbu)) 
                                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__sw)) 
                                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__sh)) 
                                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__sb)) 
                                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__div)) 
                                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__rem)) 
                                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__remu)) 
                                                                        | (IData)(vlSelf->top__DOT__control_0__DOT__addw)) 
                                                                       | (IData)(vlSelf->top__DOT__control_0__DOT__subw)) 
                                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__sub)) 
                                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__mulw)) 
                                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__divw)) 
                                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__divuw)) 
                                                                  | (IData)(vlSelf->top__DOT__control_0__DOT__remw)) 
                                                                 | (IData)(vlSelf->top__DOT__control_0__DOT__beq)) 
                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__bne)) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__addiw)) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__slli)) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__srli)) 
                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__srai)) 
                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__sltu)) 
                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__remuw))))) 
                                        | (2U & (- (IData)(
                                                           (1U 
                                                            & ((((IData)(vlSelf->top__DOT__op_d) 
                                                                 >> 2U) 
                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__jalr)) 
                                                               | ((IData)(vlSelf->top__DOT__op_d) 
                                                                  >> 1U))))))) 
                                       | (4U & (- (IData)(
                                                          ((((IData)(vlSelf->top__DOT__control_0__DOT__sllw) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__srlw)) 
                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__slliw)) 
                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__srliw)))))) 
                                      | (8U & (- (IData)(
                                                         ((IData)(vlSelf->top__DOT__control_0__DOT__sraw) 
                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__sraiw))))));
    vlSelf->top__DOT__alu_control = (((((((((((((((
                                                   (1U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((((((((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__Add) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__addi)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__ld)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sd)) 
                                                                                | ((IData)(vlSelf->top__DOT__op_d) 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__jalr)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__lw)) 
                                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__lwu)) 
                                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__lh)) 
                                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__lhu)) 
                                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__lb)) 
                                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__lbu)) 
                                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__sw)) 
                                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__sh)) 
                                                                        | (IData)(vlSelf->top__DOT__control_0__DOT__sb)) 
                                                                       | ((IData)(vlSelf->top__DOT__op_d) 
                                                                          >> 1U)) 
                                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__addw)) 
                                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__addiw)))))) 
                                                   | (2U 
                                                      & (- (IData)(
                                                                   ((IData)(vlSelf->top__DOT__control_0__DOT__sub) 
                                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__subw)))))) 
                                                  | (4U 
                                                     & (- (IData)(
                                                                  (((IData)(vlSelf->top__DOT__control_0__DOT__slt) 
                                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__bge)) 
                                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__blt)))))) 
                                                 | (8U 
                                                    & (- (IData)(
                                                                 ((((IData)(vlSelf->top__DOT__control_0__DOT__sltu) 
                                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__sltiu)) 
                                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__bgeu)) 
                                                                  | (IData)(vlSelf->top__DOT__control_0__DOT__bltu)))))) 
                                                | (0x10U 
                                                   & (- (IData)(
                                                                ((IData)(vlSelf->top__DOT__control_0__DOT__And) 
                                                                 | (IData)(vlSelf->top__DOT__control_0__DOT__andi)))))) 
                                               | (0x40U 
                                                  & (- (IData)(
                                                               ((IData)(vlSelf->top__DOT__control_0__DOT__Or) 
                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__ori)))))) 
                                              | (0x80U 
                                                 & (- (IData)(
                                                              ((IData)(vlSelf->top__DOT__control_0__DOT__Xor) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__xori)))))) 
                                             | (0x100U 
                                                & (- (IData)(
                                                             ((((IData)(vlSelf->top__DOT__control_0__DOT__sll) 
                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sllw)) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__slliw)) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__slli)))))) 
                                            | (0x200U 
                                               & (- (IData)(
                                                            ((((IData)(vlSelf->top__DOT__control_0__DOT__srl) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__srlw)) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__srliw)) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__srli)))))) 
                                           | (0x400U 
                                              & (- (IData)(
                                                           ((((IData)(vlSelf->top__DOT__control_0__DOT__sra) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__sraw)) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__sraiw)) 
                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__srai)))))) 
                                          | (0x800U 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->top__DOT__op_d)))))) 
                                         | (0x1000U 
                                            & (- (IData)(
                                                         ((IData)(vlSelf->top__DOT__control_0__DOT__Mul) 
                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__mulw)))))) 
                                        | (0x2000U 
                                           & (- (IData)(
                                                        ((IData)(vlSelf->top__DOT__control_0__DOT__divu) 
                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__divuw)))))) 
                                       | (0x4000U & 
                                          (- (IData)(
                                                     ((IData)(vlSelf->top__DOT__control_0__DOT__div) 
                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__divw)))))) 
                                      | (0x8000U & 
                                         (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__remu))))) 
                                     | (0x10000U & 
                                        (- (IData)(
                                                   (((IData)(vlSelf->top__DOT__control_0__DOT__rem) 
                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__remw)) 
                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__remuw))))));
    vlSelf->top__DOT__sel_alu_src2 = (((1U & (- (IData)(
                                                        (((((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__Add) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__slt)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sll)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__srl)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sra)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__And)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__Or)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__Xor)) 
                                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__Mul)) 
                                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__divu)) 
                                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__bge)) 
                                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__bgeu)) 
                                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__blt)) 
                                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__bltu)) 
                                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__rem)) 
                                                                        | (IData)(vlSelf->top__DOT__control_0__DOT__remu)) 
                                                                       | (IData)(vlSelf->top__DOT__control_0__DOT__div)) 
                                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__addw)) 
                                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__subw)) 
                                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__sub)) 
                                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__mulw)) 
                                                                  | (IData)(vlSelf->top__DOT__control_0__DOT__remuw)) 
                                                                 | (IData)(vlSelf->top__DOT__control_0__DOT__divw)) 
                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__divuw)) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__remw)) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__beq)) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__bne)) 
                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__sllw)) 
                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__srlw)) 
                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__sraw)) 
                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__sltu))))) 
                                       | (2U & (- (IData)(
                                                          (1U 
                                                           & (((((((((((((((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__addi) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__ld)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sd)) 
                                                                                | (IData)(vlSelf->top__DOT__op_d)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sltiu)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__andi)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__ori)) 
                                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__xori)) 
                                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__lw)) 
                                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__lwu)) 
                                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__lh)) 
                                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__lhu)) 
                                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__lb)) 
                                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__lbu)) 
                                                                        | (IData)(vlSelf->top__DOT__control_0__DOT__sw)) 
                                                                       | (IData)(vlSelf->top__DOT__control_0__DOT__sh)) 
                                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__sb)) 
                                                                     | ((IData)(vlSelf->top__DOT__op_d) 
                                                                        >> 1U)) 
                                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__addiw)) 
                                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__srliw)) 
                                                                  | (IData)(vlSelf->top__DOT__control_0__DOT__slliw)) 
                                                                 | (IData)(vlSelf->top__DOT__control_0__DOT__sraiw)) 
                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__slli)) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__srli)) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__srai))))))) 
                                      | (4U & (- (IData)(
                                                         (1U 
                                                          & (((IData)(vlSelf->top__DOT__op_d) 
                                                              >> 2U) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__jalr)))))));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0U];
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[1U];
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[3U] 
            << 0x14U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[2U] 
                         >> 0xcU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[4U] 
            << 0x14U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[3U] 
                         >> 0xcU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffU & (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[4U] 
                     >> 0xcU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[5U] 
            << 8U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[4U] 
                      >> 0x18U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[6U] 
            << 8U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[5U] 
                      >> 0x18U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffU & ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[7U] 
                      << 8U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[6U] 
                                >> 0x18U)));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[8U] 
            << 0x1cU) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[7U] 
                         >> 4U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[9U] 
            << 0x1cU) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[8U] 
                         >> 4U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffU & (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[9U] 
                     >> 4U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xaU] 
            << 0x10U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[9U] 
                         >> 0x10U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xbU] 
            << 0x10U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xaU] 
                         >> 0x10U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfffU & (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xbU] 
                     >> 0x10U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xcU] 
            << 4U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xbU] 
                      >> 0x1cU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xdU] 
            << 4U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xcU] 
                      >> 0x1cU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xfffU & ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xeU] 
                      << 4U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xdU] 
                                >> 0x1cU)));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xfU] 
            << 0x18U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xeU] 
                         >> 8U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x10U] 
            << 0x18U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xfU] 
                         >> 8U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xfffU & (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x10U] 
                     >> 8U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x11U] 
            << 0xcU) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x10U] 
                        >> 0x14U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x12U] 
            << 0xcU) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x11U] 
                        >> 0x14U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7U][2U] 
        = (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x12U] 
           >> 0x14U);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8U][0U] 
        = vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x13U];
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8U][1U] 
        = vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x14U];
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8U][2U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x15U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9U][0U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x16U] 
            << 0x14U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x15U] 
                         >> 0xcU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9U][1U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x17U] 
            << 0x14U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x16U] 
                         >> 0xcU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9U][2U] 
        = (0xfffU & (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x17U] 
                     >> 0xcU));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[0U] 
        = (0xfU & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[1U] 
        = (0xfU & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[2U] 
        = (0xfU & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[3U] 
        = (0xfU & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__awvalid_1 = (((0U == (IData)(vlSelf->top__DOT__mem0__DOT__write_state)) 
                                    & (IData)(vlSelf->inst_update)) 
                                   & (IData)(vlSelf->top__DOT__data_ram_wen));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                               == vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__l_choose) == vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__i = 7U;
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__ram_data = vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cin 
        = ((IData)((0U != (0xeU & vlSelf->top__DOT__alu_control)))
            ? 1U : 0U);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[0U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[1U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[2U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[3U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[4U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[5U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[6U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[7U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[8U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[9U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [9U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alu_src1) 
                               == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__sel_alu_src1) 
           == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__i = 4U;
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alu_src1) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_alu_src1) 
              == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alu_src1) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_alu_src1) 
              == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alu_src1) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_alu_src1) 
              == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__exe_0__DOT__alu_src1 = vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                               == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__i = 0xaU;
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__imm = vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__c_raddr = ((0x300ULL == vlSelf->top__DOT__imm)
                                  ? 0U : ((1U & ((0x305ULL 
                                                  == vlSelf->top__DOT__imm) 
                                                 | ((IData)(vlSelf->top__DOT__e_inst) 
                                                    >> 1U)))
                                           ? 1U : (
                                                   (1U 
                                                    & ((0x341ULL 
                                                        == vlSelf->top__DOT__imm) 
                                                       | ((IData)(vlSelf->top__DOT__e_inst) 
                                                          >> 2U)))
                                                    ? 2U
                                                    : 3U)));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[0U] = 4U;
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[1U] = 0U;
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[2U] 
        = (4U | ((IData)(vlSelf->top__DOT__imm) << 3U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[3U] 
        = (((IData)(vlSelf->top__DOT__imm) >> 0x1dU) 
           | ((IData)((vlSelf->top__DOT__imm >> 0x20U)) 
              << 3U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[4U] 
        = (0x10U | (((IData)(vlSelf->top__DOT__src2) 
                     << 6U) | ((IData)((vlSelf->top__DOT__imm 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[5U] 
        = (((IData)(vlSelf->top__DOT__src2) >> 0x1aU) 
           | ((IData)((vlSelf->top__DOT__src2 >> 0x20U)) 
              << 6U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[6U] 
        = (0x40U | ((IData)((vlSelf->top__DOT__src2 
                             >> 0x20U)) >> 0x1aU));
    vlSelf->top__DOT__c_rdata = vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
        [vlSelf->top__DOT__c_raddr];
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[0U];
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[1U];
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[2U]);
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[3U] 
            << 0x1dU) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[2U] 
                         >> 3U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[4U] 
            << 0x1dU) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[3U] 
                         >> 3U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[4U] 
                 >> 3U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[5U] 
            << 0x1aU) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[4U] 
                         >> 6U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[6U] 
            << 0x1aU) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[5U] 
                         >> 6U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[6U] 
                 >> 6U));
    VL_EXTEND_WQ(65,64, __Vtemp205, vlSelf->top__DOT__src1);
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[0U] 
        = (IData)((vlSelf->top__DOT__src1 | vlSelf->top__DOT__c_rdata));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[1U] 
        = (IData)(((vlSelf->top__DOT__src1 | vlSelf->top__DOT__c_rdata) 
                   >> 0x20U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[2U] 
        = (1U | (__Vtemp205[0U] << 1U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[3U] 
        = ((__Vtemp205[0U] >> 0x1fU) | (__Vtemp205[1U] 
                                        << 1U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[4U] 
        = ((__Vtemp205[1U] >> 0x1fU) | (__Vtemp205[2U] 
                                        << 1U));
    VL_EXTEND_WQ(66,64, __Vtemp208, (4ULL + vlSelf->cpupc));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[0U] 
        = (IData)(vlSelf->top__DOT__c_rdata);
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[1U] 
        = (IData)((vlSelf->top__DOT__c_rdata >> 0x20U));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[2U] 
        = (3U | ((IData)((0xfffffffffffffffeULL & (vlSelf->top__DOT__src1 
                                                   + vlSelf->top__DOT__imm))) 
                 << 2U));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[3U] 
        = (((IData)((0xfffffffffffffffeULL & (vlSelf->top__DOT__src1 
                                              + vlSelf->top__DOT__imm))) 
            >> 0x1eU) | ((IData)(((0xfffffffffffffffeULL 
                                   & (vlSelf->top__DOT__src1 
                                      + vlSelf->top__DOT__imm)) 
                                  >> 0x20U)) << 2U));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[4U] 
        = (8U | (((IData)((vlSelf->cpupc + vlSelf->top__DOT__imm)) 
                  << 4U) | ((IData)(((0xfffffffffffffffeULL 
                                      & (vlSelf->top__DOT__src1 
                                         + vlSelf->top__DOT__imm)) 
                                     >> 0x20U)) >> 0x1eU)));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[5U] 
        = (((IData)((vlSelf->cpupc + vlSelf->top__DOT__imm)) 
            >> 0x1cU) | ((IData)(((vlSelf->cpupc + vlSelf->top__DOT__imm) 
                                  >> 0x20U)) << 4U));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[6U] 
        = (0x10U | ((__Vtemp208[0U] << 6U) | ((IData)(
                                                      ((vlSelf->cpupc 
                                                        + vlSelf->top__DOT__imm) 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[7U] 
        = ((__Vtemp208[0U] >> 0x1aU) | (__Vtemp208[1U] 
                                        << 6U));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[8U] 
        = ((__Vtemp208[1U] >> 0x1aU) | (__Vtemp208[2U] 
                                        << 6U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[0U];
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[1U];
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[0U][2U] 
        = (1U & vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[2U]);
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[3U] 
            << 0x1fU) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[2U] 
                         >> 1U));
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[4U] 
            << 0x1fU) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[3U] 
                         >> 1U));
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[1U][2U] 
        = (1U & (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[4U] 
                 >> 1U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[0U];
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[1U];
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[2U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[3U] 
            << 0x1eU) | (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[2U] 
                         >> 2U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[4U] 
            << 0x1eU) | (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[3U] 
                         >> 2U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[4U] 
                 >> 2U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[5U] 
            << 0x1cU) | (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[4U] 
                         >> 4U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[6U] 
            << 0x1cU) | (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[5U] 
                         >> 4U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[6U] 
                 >> 4U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[7U] 
            << 0x1aU) | (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[6U] 
                         >> 6U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[8U] 
            << 0x1aU) | (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[7U] 
                         >> 6U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[3U][2U] 
        = (3U & (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[8U] 
                 >> 6U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alu_src2) 
                               == vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__sel_alu_src2) 
           == vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__i = 3U;
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alu_src2) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_alu_src2) 
              == vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alu_src2) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_alu_src2) 
              == vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__exe_0__DOT__alu_src2 = vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[0U] 
        = (1U & vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[1U] 
        = (1U & vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[2U] 
        = (3U & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[3U] 
        = (3U & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__alu_equal = ((6U & (IData)(vlSelf->top__DOT__alu_equal)) 
                                   | (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                      == vlSelf->top__DOT__exe_0__DOT__alu_src2));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result 
        = (vlSelf->top__DOT__exe_0__DOT__alu_src1 | vlSelf->top__DOT__exe_0__DOT__alu_src2);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_b 
        = ((IData)((0U != (0xeU & vlSelf->top__DOT__alu_control)))
            ? (~ vlSelf->top__DOT__exe_0__DOT__alu_src2)
            : vlSelf->top__DOT__exe_0__DOT__alu_src2);
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__control_0__DOT__csrrs) 
                               == vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__control_0__DOT__csrrs) 
           == vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__control_0__DOT__csrrs) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__i = 2U;
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__control_0__DOT__csrrs) 
              == vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__exe_0__DOT__c_wdata = vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out;
    VL_EXTEND_WQ(65,64, __Vtemp258, vlSelf->top__DOT__exe_0__DOT__alu_src1);
    VL_EXTEND_WQ(65,64, __Vtemp259, vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_b);
    VL_ADD_W(3, __Vtemp260, __Vtemp258, __Vtemp259);
    VL_EXTEND_WI(65,1, __Vtemp261, (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cin));
    VL_ADD_W(3, __Vtemp262, __Vtemp260, __Vtemp261);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout 
        = (1U & __Vtemp262[2U]);
    VL_EXTEND_WI(65,1, __Vtemp264, (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cin));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
        = ((vlSelf->top__DOT__exe_0__DOT__alu_src1 
            + vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_b) 
           + (((QData)((IData)(__Vtemp264[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp264[0U]))));
    vlSelf->top__DOT__alu_equal = ((5U & (IData)(vlSelf->top__DOT__alu_equal)) 
                                   | (2U & ((~ (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout)) 
                                            << 1U)));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__slt_result 
        = (QData)((IData)((1U & (((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                           >> 0x3fU)) 
                                  & (~ (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                >> 0x3fU)))) 
                                 | ((~ ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x3fU)) 
                                        ^ (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                   >> 0x3fU)))) 
                                    & (IData)((vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                               >> 0x3fU)))))));
    vlSelf->top__DOT__alu_equal = ((3U & (IData)(vlSelf->top__DOT__alu_equal)) 
                                   | (4U & ((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__slt_result) 
                                            << 2U)));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw 
        = (((((((((((((((((- (QData)((IData)((0U != 
                                              (3U & vlSelf->top__DOT__alu_control))))) 
                          & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result) 
                         | ((- (QData)((IData)((1U 
                                                & (vlSelf->top__DOT__alu_control 
                                                   >> 2U))))) 
                            & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__slt_result)) 
                        | ((- (QData)((IData)((1U & 
                                               (vlSelf->top__DOT__alu_control 
                                                >> 3U))))) 
                           & (QData)((IData)((1U & 
                                              (~ (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout))))))) 
                       | ((- (QData)((IData)((1U & 
                                              (vlSelf->top__DOT__alu_control 
                                               >> 4U))))) 
                          & (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                             & vlSelf->top__DOT__exe_0__DOT__alu_src2))) 
                      | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                                   >> 5U))))) 
                         & (~ vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result))) 
                     | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                                  >> 6U))))) 
                        & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result)) 
                    | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                                 >> 7U))))) 
                       & (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                          ^ vlSelf->top__DOT__exe_0__DOT__alu_src2))) 
                   | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                                >> 8U))))) 
                      & (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                         << (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2))))) 
                  | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                               >> 9U))))) 
                     & (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2))))) 
                 | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                              >> 0xaU))))) 
                    & VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__exe_0__DOT__alu_src1, 
                                     (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2))))) 
                | (0xfffffffffffff000ULL & ((- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__alu_control 
                                                                   >> 0xbU))))) 
                                            & vlSelf->top__DOT__exe_0__DOT__alu_src2))) 
               | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xcU))))) 
                  & (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                     * vlSelf->top__DOT__exe_0__DOT__alu_src2))) 
              | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                           >> 0xdU))))) 
                 & VL_DIV_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2))) 
             | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                          >> 0xeU))))) 
                & VL_DIVS_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2))) 
            | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xfU))))) 
               & VL_MODDIV_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2))) 
           | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                        >> 0x10U))))) 
              & VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)));
    vlSelf->top__DOT__sel_nextpc = (3U & (((1U & (- (IData)(
                                                            (1U 
                                                             & ((((((((IData)(vlSelf->top__DOT__control_0__DOT__beq) 
                                                                      & (IData)(vlSelf->top__DOT__alu_equal)) 
                                                                     | ((IData)(vlSelf->top__DOT__control_0__DOT__bne) 
                                                                        & (~ (IData)(vlSelf->top__DOT__alu_equal)))) 
                                                                    | ((IData)(vlSelf->top__DOT__op_d) 
                                                                       >> 2U)) 
                                                                   | ((IData)(vlSelf->top__DOT__control_0__DOT__bltu) 
                                                                      & ((IData)(vlSelf->top__DOT__alu_equal) 
                                                                         >> 1U))) 
                                                                  | ((IData)(vlSelf->top__DOT__control_0__DOT__blt) 
                                                                     & ((IData)(vlSelf->top__DOT__alu_equal) 
                                                                        >> 2U))) 
                                                                 | ((IData)(vlSelf->top__DOT__control_0__DOT__bgeu) 
                                                                    & (IData)(
                                                                              (2U 
                                                                               != 
                                                                               (3U 
                                                                                & (IData)(vlSelf->top__DOT__alu_equal)))))) 
                                                                | ((IData)(vlSelf->top__DOT__control_0__DOT__bge) 
                                                                   & (IData)(
                                                                             (4U 
                                                                              != 
                                                                              (5U 
                                                                               & (IData)(vlSelf->top__DOT__alu_equal)))))))))) 
                                           | (2U & 
                                              (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__jalr))))) 
                                          | (- (IData)((IData)(
                                                               (0U 
                                                                != 
                                                                (6U 
                                                                 & (IData)(vlSelf->top__DOT__e_inst))))))));
    VL_EXTEND_WQ(65,64, __Vtemp265, vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[0U] 
        = (IData)((((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw))));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[1U] 
        = (IData)(((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw))) 
                   >> 0x20U));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[2U] 
        = (1U | (__Vtemp265[0U] << 1U));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[3U] 
        = ((__Vtemp265[0U] >> 0x1fU) | (__Vtemp265[1U] 
                                        << 1U));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[4U] 
        = ((__Vtemp265[1U] >> 0x1fU) | (__Vtemp265[2U] 
                                        << 1U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_nextpc) 
                               == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__sel_nextpc) == 
           vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__i = 4U;
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_nextpc) 
                                  == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_nextpc) 
              == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_nextpc) 
                                  == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_nextpc) 
              == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_nextpc) 
                                  == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_nextpc) 
              == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__i0__DOT__dnpc_0 = vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[0U];
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[1U];
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0U][2U] 
        = (1U & vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[2U]);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[3U] 
            << 0x1fU) | (vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[2U] 
                         >> 1U));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[4U] 
            << 0x1fU) | (vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[3U] 
                         >> 1U));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1U][2U] 
        = (1U & (vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[4U] 
                 >> 1U));
    VL_EXTEND_WQ(65,64, __Vtemp280, vlSelf->cpupc);
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[0U] 
        = (IData)(vlSelf->top__DOT__i0__DOT__dnpc_0);
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[1U] 
        = (IData)((vlSelf->top__DOT__i0__DOT__dnpc_0 
                   >> 0x20U));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[2U] 
        = (1U | (__Vtemp280[0U] << 1U));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[3U] 
        = ((__Vtemp280[0U] >> 0x1fU) | (__Vtemp280[1U] 
                                        << 1U));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[4U] 
        = ((__Vtemp280[1U] >> 0x1fU) | (__Vtemp280[2U] 
                                        << 1U));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[0U] 
        = (1U & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[1U] 
        = (1U & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[0U];
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[1U];
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[0U][2U] 
        = (1U & vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[2U]);
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[3U] 
            << 0x1fU) | (vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[2U] 
                         >> 1U));
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[4U] 
            << 0x1fU) | (vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[3U] 
                         >> 1U));
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[1U][2U] 
        = (1U & (vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[4U] 
                 >> 1U));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__w_choose) 
                               == vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__w_choose) == vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__w_choose) 
                                  == vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__i = 2U;
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__w_choose) == 
              vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__alu_result = vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[0U] 
        = (1U & vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[1U] 
        = (1U & vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list
           [1U][2U]);
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
        = (0x10U | (((IData)(vlSelf->top__DOT__alu_result) 
                     << 6U) | ((IData)((vlSelf->top__DOT__ram_data 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[5U] 
        = (((IData)(vlSelf->top__DOT__alu_result) >> 0x1aU) 
           | ((IData)((vlSelf->top__DOT__alu_result 
                       >> 0x20U)) << 6U));
    vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[6U] 
        = (0x40U | ((IData)((vlSelf->top__DOT__alu_result 
                             >> 0x20U)) >> 0x1aU));
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->mem_finish) 
                               == vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->mem_finish) == vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->mem_finish) 
                                  == vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__i = 2U;
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->mem_finish) == vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->dnpc = vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[0U];
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[1U];
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[2U]);
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[3U] 
            << 0x1dU) | (vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[2U] 
                         >> 3U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[4U] 
            << 0x1dU) | (vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[3U] 
                         >> 3U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[4U] 
                 >> 3U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[5U] 
            << 0x1aU) | (vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[4U] 
                         >> 6U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[6U] 
            << 0x1aU) | (vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[5U] 
                         >> 6U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[6U] 
                 >> 6U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_rf_res) 
                               == vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__sel_rf_res) == 
           vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__i = 3U;
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_rf_res) 
                                  == vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_rf_res) 
              == vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_rf_res) 
                                  == vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_rf_res) 
              == vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__wdata = vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out;
}

void Vtop___024root____Vdpiimwrap_top__DOT__exe_0__DOT__r0__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vtop___024root____Vdpiimwrap_top__DOT__exe_0__DOT__r0__DOT__set_csr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 4> &a);

void Vtop___024root___initial__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__3\n"); );
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__exe_0__DOT__r0__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf);
    Vtop___024root____Vdpiimwrap_top__DOT__exe_0__DOT__r0__DOT__set_csr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtop___024root___initial__TOP__3(vlSelf);
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->cpupc = VL_RAND_RESET_Q(64);
    vlSelf->ebreak = VL_RAND_RESET_I(1);
    vlSelf->not_have = VL_RAND_RESET_I(1);
    vlSelf->dnpc = VL_RAND_RESET_Q(64);
    vlSelf->inst_finish = VL_RAND_RESET_I(1);
    vlSelf->mem_finish = VL_RAND_RESET_I(1);
    vlSelf->inst_update = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__c_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__sel_nextpc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__rvalid_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rready_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__op_d = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__fu_7_d = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__c_raddr = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__e_inst = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__sel_alu_src1 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__sel_alu_src2 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__alu_control = VL_RAND_RESET_I(17);
    vlSelf->top__DOT__sel_rf_res = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__data_ram_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alu_equal = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__l_choose = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__w_choose = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alu_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ram_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__wdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__arvalid_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rvalid_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rready_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__awvalid_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wvalid_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i0__DOT__dnpc_0 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(264, vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3);
    VL_RAND_RESET_W(130, vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3);
    vlSelf->top__DOT__i0__DOT__r_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__i0__DOT__state = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__id_0__DOT__immi = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_0__DOT__immu = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(760, vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        VL_RAND_RESET_W(76, vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__control_0__DOT__addi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__csrrw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__csrrs = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__andi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__xori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__ori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__sll = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__srl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__sra = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__sllw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__srlw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__sraw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__addiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__slliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__srliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__sraiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__sd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__lwu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__ld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__addw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__subw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__mulw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__divw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__divuw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__remw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__remuw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__divu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__div = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__rem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__remu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__Add = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__Mul = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__And = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__Xor = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__Or = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__sltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__slt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__sltiu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__srai = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__slli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__srli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__bgeu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__bltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_0__DOT__blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exe_0__DOT__alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exe_0__DOT__alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exe_0__DOT__c_wdata = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(272, vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3);
    VL_RAND_RESET_W(201, vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3);
    VL_RAND_RESET_W(130, vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__exe_0__DOT__r0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__slt_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_b = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(130, vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(497, vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3);
    vlSelf->top__DOT__mem0__DOT__reg_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mem0__DOT__read_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mem0__DOT__write_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mem0__DOT__mem_state = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        VL_RAND_RESET_W(71, vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(201, vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__arbiter_0__DOT__master_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__arbiter_0__DOT__arready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_0__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__arbiter_0__DOT__rresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__arbiter_0__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_0__DOT__bresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__arbiter_0__DOT__bvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__r_araddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__write_state = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
