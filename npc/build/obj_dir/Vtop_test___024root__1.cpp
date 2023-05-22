// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_test.h for the primary calling header

#include "Vtop_test___024root.h"
#include "Vtop_test__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop_test___024root___sequent__TOP__2(Vtop_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_test___024root___sequent__TOP__2\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp524;
    VlWide<3>/*95:0*/ __Vtemp525;
    VlWide<3>/*95:0*/ __Vtemp526;
    VlWide<3>/*95:0*/ __Vtemp527;
    VlWide<3>/*95:0*/ __Vtemp528;
    VlWide<3>/*95:0*/ __Vtemp530;
    VlWide<3>/*95:0*/ __Vtemp531;
    VlWide<3>/*95:0*/ __Vtemp553;
    VlWide<3>/*95:0*/ __Vtemp613;
    VlWide<3>/*95:0*/ __Vtemp642;
    // Body
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[0U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[1U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[3U] 
            << 0x1dU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[2U] 
                         >> 3U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[4U] 
            << 0x1dU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[3U] 
                         >> 3U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[4U] 
                 >> 3U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[5U] 
            << 0x1aU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[4U] 
                         >> 6U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[6U] 
            << 0x1aU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[5U] 
                         >> 6U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[6U] 
                 >> 6U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[0U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[1U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[3U] 
            << 0x1eU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[2U] 
                         >> 2U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[4U] 
            << 0x1eU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[3U] 
                         >> 2U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[4U] 
                 >> 2U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[5U] 
            << 0x1cU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[4U] 
                         >> 4U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[6U] 
            << 0x1cU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[5U] 
                         >> 4U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[6U] 
                 >> 4U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[7U] 
            << 0x1aU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[6U] 
                         >> 6U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[8U] 
            << 0x1aU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[7U] 
                         >> 6U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list[3U][2U] 
        = (3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[8U] 
                 >> 6U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[0U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[1U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[3U] 
            << 0x1cU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[2U] 
                         >> 4U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
            << 0x1cU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[3U] 
                         >> 4U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
                   >> 4U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[5U] 
            << 0x18U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
                         >> 8U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[6U] 
            << 0x18U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[5U] 
                         >> 8U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[6U] 
                   >> 8U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[7U] 
            << 0x14U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[6U] 
                         >> 0xcU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[8U] 
            << 0x14U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[7U] 
                         >> 0xcU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[8U] 
                   >> 0xcU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__rdata_u 
        = ((0U == (7U & (IData)((vlSelf->cpupc >> 3U))))
            ? (((QData)((IData)(vlSelf->top_test__DOT__io_sram0_rdata[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__io_sram0_rdata[0U])))
            : ((1U == (7U & (IData)((vlSelf->cpupc 
                                     >> 3U)))) ? (((QData)((IData)(
                                                                   vlSelf->top_test__DOT__io_sram0_rdata[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top_test__DOT__io_sram0_rdata[2U])))
                : ((2U == (7U & (IData)((vlSelf->cpupc 
                                         >> 3U)))) ? 
                   (((QData)((IData)(vlSelf->top_test__DOT__io_sram1_rdata[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__io_sram1_rdata[0U])))
                    : ((3U == (7U & (IData)((vlSelf->cpupc 
                                             >> 3U))))
                        ? (((QData)((IData)(vlSelf->top_test__DOT__io_sram1_rdata[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top_test__DOT__io_sram1_rdata[2U])))
                        : ((4U == (7U & (IData)((vlSelf->cpupc 
                                                 >> 3U))))
                            ? (((QData)((IData)(vlSelf->top_test__DOT__io_sram2_rdata[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top_test__DOT__io_sram2_rdata[0U])))
                            : ((5U == (7U & (IData)(
                                                    (vlSelf->cpupc 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->top_test__DOT__io_sram2_rdata[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top_test__DOT__io_sram2_rdata[2U])))
                                : ((6U == (7U & (IData)(
                                                        (vlSelf->cpupc 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->top_test__DOT__io_sram3_rdata[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top_test__DOT__io_sram3_rdata[0U])))
                                    : (((QData)((IData)(
                                                        vlSelf->top_test__DOT__io_sram3_rdata[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top_test__DOT__io_sram3_rdata[2U]))))))))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_wen 
        = (1U & (((((((((((((((((((((((((((((((((((
                                                   (((((((((((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Add) 
                                                                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addi)) 
                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ld)) 
                                                               | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                                  >> 3U)) 
                                                              | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                                 >> 4U)) 
                                                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slt)) 
                                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sltu)) 
                                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sll)) 
                                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srl)) 
                                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sra)) 
                                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sltiu)) 
                                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__andi)) 
                                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ori)) 
                                                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__xori)) 
                                                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lw)) 
                                                   | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lwu)) 
                                                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lh)) 
                                                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lhu)) 
                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lb)) 
                                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lbu)) 
                                              | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                                 >> 1U)) 
                                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sub)) 
                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sllw)) 
                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srlw)) 
                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraw)) 
                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addiw)) 
                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slliw)) 
                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srliw)) 
                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraiw)) 
                                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addw)) 
                                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srli)) 
                                   | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srai)) 
                                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slli)) 
                                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__And)) 
                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Or)) 
                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__mulw)) 
                              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divw)) 
                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remw)) 
                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d)) 
                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__subw)) 
                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Mul)) 
                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Xor)) 
                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divu)) 
                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divuw)) 
                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__rem)) 
                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__div)) 
                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrs)) 
                   | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrw)) 
                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remu)) 
                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remuw)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__sel_alu_src1 
        = ((((1U & (- (IData)((1U & (((((((((((((((
                                                   (((((((((((((((((((((((((((((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Add) 
                                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addi)) 
                                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ld)) 
                                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sd)) 
                                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slt)) 
                                                                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sll)) 
                                                                              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srl)) 
                                                                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sra)) 
                                                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__And)) 
                                                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Or)) 
                                                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Xor)) 
                                                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sltiu)) 
                                                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__andi)) 
                                                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ori)) 
                                                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__xori)) 
                                                                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Mul)) 
                                                                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divu)) 
                                                                   | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                                      >> 7U)) 
                                                                  | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                                     >> 8U)) 
                                                                 | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                                    >> 0xaU)) 
                                                                | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                                   >> 9U)) 
                                                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lw)) 
                                                              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lwu)) 
                                                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lh)) 
                                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lhu)) 
                                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lb)) 
                                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lbu)) 
                                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sw)) 
                                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sh)) 
                                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sb)) 
                                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__div)) 
                                                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__rem)) 
                                                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remu)) 
                                                   | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addw)) 
                                                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__subw)) 
                                                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sub)) 
                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__mulw)) 
                                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divw)) 
                                              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divuw)) 
                                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remw)) 
                                            | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                               >> 5U)) 
                                           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                              >> 6U)) 
                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addiw)) 
                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slli)) 
                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srli)) 
                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srai)) 
                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sltu)) 
                                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remuw)))))) 
             | (2U & (- (IData)((1U & ((IData)((0U 
                                                != 
                                                (0x18U 
                                                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id)))) 
                                       | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                          >> 1U))))))) 
            | (4U & (- (IData)(((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sllw) 
                                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srlw)) 
                                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slliw)) 
                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srliw)))))) 
           | (8U & (- (IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraw) 
                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraiw))))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__sel_alu_src2 
        = (((1U & (- (IData)((1U & ((((((((((((((((
                                                   (((((((((((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Add) 
                                                                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slt)) 
                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sll)) 
                                                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srl)) 
                                                              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sra)) 
                                                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__And)) 
                                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Or)) 
                                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Xor)) 
                                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Mul)) 
                                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divu)) 
                                                        | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                           >> 7U)) 
                                                       | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                          >> 8U)) 
                                                      | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                         >> 0xaU)) 
                                                     | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                        >> 9U)) 
                                                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__rem)) 
                                                   | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remu)) 
                                                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__div)) 
                                                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addw)) 
                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__subw)) 
                                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sub)) 
                                              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__mulw)) 
                                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remuw)) 
                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divw)) 
                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divuw)) 
                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remw)) 
                                         | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                            >> 5U)) 
                                        | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                           >> 6U)) 
                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sllw)) 
                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srlw)) 
                                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraw)) 
                                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sltu)))))) 
            | (2U & (- (IData)((1U & ((((((((((((((
                                                   (((((((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addi) 
                                                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ld)) 
                                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sd)) 
                                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d)) 
                                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sltiu)) 
                                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__andi)) 
                                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ori)) 
                                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__xori)) 
                                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lw)) 
                                                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lwu)) 
                                                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lh)) 
                                                   | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lhu)) 
                                                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lb)) 
                                                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lbu)) 
                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sw)) 
                                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sh)) 
                                              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sb)) 
                                             | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                                >> 1U)) 
                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addiw)) 
                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srliw)) 
                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slliw)) 
                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraiw)) 
                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slli)) 
                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srli)) 
                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srai))))))) 
           | (4U & (- (IData)((IData)((0U != (0x18U 
                                              & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id))))))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control 
        = ((((((((((((((((1U & (- (IData)((1U & (((
                                                   (((((((((((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Add) 
                                                                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addi)) 
                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ld)) 
                                                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sd)) 
                                                              | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                                 >> 3U)) 
                                                             | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                                >> 4U)) 
                                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lw)) 
                                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lwu)) 
                                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lh)) 
                                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lhu)) 
                                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lb)) 
                                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lbu)) 
                                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sw)) 
                                                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sh)) 
                                                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sb)) 
                                                   | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                                      >> 1U)) 
                                                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addw)) 
                                                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addiw)))))) 
                         | (2U & (- (IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sub) 
                                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__subw)))))) 
                        | (4U & (- (IData)((1U & (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slt) 
                                                   | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                      >> 7U)) 
                                                  | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                     >> 0xaU))))))) 
                       | (8U & (- (IData)((1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sltu) 
                                                   | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sltiu)) 
                                                  | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                     >> 8U)) 
                                                 | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                    >> 9U))))))) 
                      | (0x10U & (- (IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__And) 
                                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__andi)))))) 
                     | (0x40U & (- (IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Or) 
                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ori)))))) 
                    | (0x80U & (- (IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Xor) 
                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__xori)))))) 
                   | (0x100U & (- (IData)(((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sll) 
                                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sllw)) 
                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slliw)) 
                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slli)))))) 
                  | (0x200U & (- (IData)(((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srl) 
                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srlw)) 
                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srliw)) 
                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srli)))))) 
                 | (0x400U & (- (IData)(((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sra) 
                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraw)) 
                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraiw)) 
                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srai)))))) 
                | (0x800U & (- (IData)((1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d)))))) 
               | (0x1000U & (- (IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Mul) 
                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__mulw)))))) 
              | (0x2000U & (- (IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divu) 
                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divuw)))))) 
             | (0x4000U & (- (IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__div) 
                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divw)))))) 
            | (0x8000U & (- (IData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remu))))) 
           | (0x10000U & (- (IData)((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__rem) 
                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remw)) 
                                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remuw))))));
    vlSelf->not_have = (1U & ((((((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addi) 
                                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__andi)) 
                                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__xori)) 
                                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ori)) 
                                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sll)) 
                                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srl)) 
                                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sra)) 
                                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d)) 
                                                                                | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                                                >> 3U)) 
                                                                                | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                                                >> 4U)) 
                                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sd)) 
                                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sh)) 
                                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sw)) 
                                                                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sb)) 
                                                                              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lw)) 
                                                                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lwu)) 
                                                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lh)) 
                                                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lhu)) 
                                                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lb)) 
                                                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lbu)) 
                                                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ld)) 
                                                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divu)) 
                                                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Add)) 
                                                                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Mul)) 
                                                                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__And)) 
                                                                   | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Xor)) 
                                                                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Or)) 
                                                                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sltu)) 
                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slt)) 
                                                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sub)) 
                                                              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sltiu)) 
                                                             | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                                >> 5U)) 
                                                            | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                               >> 6U)) 
                                                           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                              >> 7U)) 
                                                          | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                             >> 8U)) 
                                                         | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                            >> 9U)) 
                                                        | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                           >> 0xaU)) 
                                                       | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                                          >> 1U)) 
                                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__rem)) 
                                                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remu)) 
                                                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__div)) 
                                                   | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addw)) 
                                                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__subw)) 
                                                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__mulw)) 
                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remuw)) 
                                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divw)) 
                                              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divuw)) 
                                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remw)) 
                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addiw)) 
                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srliw)) 
                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slliw)) 
                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraiw)) 
                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slli)) 
                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srli)) 
                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srai)) 
                                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sllw)) 
                                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraw)) 
                                   | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srlw)) 
                                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrs)) 
                                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrw)) 
                                | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                   >> 1U)) | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                              >> 2U)) 
                              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_ren_src2 
        = (1U & ((((((((((((((((((((((((((((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Add) 
                                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slt)) 
                                              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sll)) 
                                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srl)) 
                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sra)) 
                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__And)) 
                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Or)) 
                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Xor)) 
                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Mul)) 
                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divu)) 
                                      | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                         >> 7U)) | 
                                     ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                      >> 8U)) | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                 >> 0xaU)) 
                                   | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                      >> 9U)) | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__rem)) 
                                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remu)) 
                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__div)) 
                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addw)) 
                              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__subw)) 
                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sub)) 
                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__mulw)) 
                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remuw)) 
                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divw)) 
                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divuw)) 
                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remw)) 
                       | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                          >> 5U)) | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                     >> 6U)) | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sllw)) 
                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srlw)) 
                   | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraw)) 
                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sltu)) 
                 | ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sw) 
                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sh)) 
                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sb)) 
                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sd))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_ren_src1 
        = (1U & (((((((((((((((((((((((((((((((((((
                                                   ((((((((((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Add) 
                                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addi)) 
                                                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ld)) 
                                                              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sd)) 
                                                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slt)) 
                                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sll)) 
                                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srl)) 
                                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sra)) 
                                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__And)) 
                                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Or)) 
                                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Xor)) 
                                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sltiu)) 
                                                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__andi)) 
                                                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ori)) 
                                                   | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__xori)) 
                                                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Mul)) 
                                                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divu)) 
                                                | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                   >> 7U)) 
                                               | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                  >> 8U)) 
                                              | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                 >> 0xaU)) 
                                             | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                >> 9U)) 
                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lw)) 
                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lwu)) 
                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lh)) 
                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lhu)) 
                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lb)) 
                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lbu)) 
                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sw)) 
                                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sh)) 
                                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sb)) 
                                   | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__div)) 
                                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__rem)) 
                                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remu)) 
                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addw)) 
                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__subw)) 
                              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sub)) 
                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__mulw)) 
                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divw)) 
                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divuw)) 
                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remw)) 
                         | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                            >> 5U)) | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                       >> 6U)) | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addiw)) 
                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slli)) 
                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srli)) 
                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srai)) 
                   | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sltu)) 
                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remuw)) 
                 | ((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slliw) 
                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srliw)) 
                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraiw)) 
                      | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                         >> 4U)) | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraw)) 
                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sllw))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[1U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[3U] 
            << 0x14U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[2U] 
                         >> 0xcU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[4U] 
            << 0x14U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[3U] 
                         >> 0xcU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[4U] 
                     >> 0xcU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[5U] 
            << 8U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[4U] 
                      >> 0x18U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[6U] 
            << 8U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[5U] 
                      >> 0x18U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffU & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[7U] 
                      << 8U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[6U] 
                                >> 0x18U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[8U] 
            << 0x1cU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[7U] 
                         >> 4U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[9U] 
            << 0x1cU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[8U] 
                         >> 4U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[9U] 
                     >> 4U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xaU] 
            << 0x10U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[9U] 
                         >> 0x10U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xbU] 
            << 0x10U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xaU] 
                         >> 0x10U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfffU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xbU] 
                     >> 0x10U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xcU] 
            << 4U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xbU] 
                      >> 0x1cU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xdU] 
            << 4U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xcU] 
                      >> 0x1cU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xfffU & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xeU] 
                      << 4U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xdU] 
                                >> 0x1cU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xfU] 
            << 0x18U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xeU] 
                         >> 8U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x10U] 
            << 0x18U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xfU] 
                         >> 8U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xfffU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x10U] 
                     >> 8U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x11U] 
            << 0xcU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x10U] 
                        >> 0x14U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x12U] 
            << 0xcU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x11U] 
                        >> 0x14U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7U][2U] 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x12U] 
           >> 0x14U);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8U][0U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x13U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8U][1U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x14U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8U][2U] 
        = (0xfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x15U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x16U] 
            << 0x14U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x15U] 
                         >> 0xcU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x17U] 
            << 0x14U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x16U] 
                         >> 0xcU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9U][2U] 
        = (0xfffU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x17U] 
                     >> 0xcU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__key_list[2U] 
        = (3U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__key_list[3U] 
        = (3U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[0U] 
        = (0xfU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[1U] 
        = (0xfU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[2U] 
        = (0xfU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[3U] 
        = (0xfU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->inst = ((1U & (IData)((vlSelf->cpupc >> 2U)))
                     ? (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__rdata_u 
                                >> 0x20U)) : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__rdata_u));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__sel_rf_res_reg_wb) 
           == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__sel_rf_res_reg_wb) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__sel_rf_res_reg_wb) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__sel_rf_res_reg_wb) 
                               == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__sel_rf_res_reg_wb) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__sel_rf_res_reg_wb) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wdata 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__control_hazard 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe1_valid) 
           & (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_ren_src1) 
               & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__buzy 
                  >> (0x1fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                               >> 0xfU)))) | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_ren_src2) 
                                              & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__buzy 
                                                 >> 
                                                 (0x1fU 
                                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                     >> 0x14U))))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[0U] 
        = (0xfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[1U] 
        = (0xfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[2U] 
        = (0xfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[3U] 
        = (0xfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[4U] 
        = (0xfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[5U] 
        = (0xfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[6U] 
        = (0xfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[7U] 
        = (0xfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[8U] 
        = (0xfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[9U] 
        = (0xfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [9U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src2_reg_is) 
           == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src2_reg_is) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src2_reg_is) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src2_reg_is) 
                               == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src2_reg_is) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src2_reg_is) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src1_reg_is) 
           == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src1_reg_is) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src1_reg_is) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src1_reg_is) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src1_reg_is) 
                               == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src1_reg_is) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src1_reg_is) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src1_reg_is) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst 
        = ((0x100073U == vlSelf->inst) ? 1U : ((0x73U 
                                                == vlSelf->inst)
                                                ? 2U
                                                : (
                                                   (0x30200073U 
                                                    == vlSelf->inst)
                                                    ? 4U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst))
                                                     ? 8U
                                                     : 
                                                    ((IData)(
                                                             (0x67U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->inst)))
                                                      ? 0x10U
                                                      : 
                                                     ((IData)(
                                                              (0x63U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->inst)))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(
                                                               (0x1063U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->inst)))
                                                        ? 0x40U
                                                        : 
                                                       ((IData)(
                                                                (0x5063U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->inst)))
                                                         ? 0x80U
                                                         : 
                                                        ((IData)(
                                                                 (0x7063U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->inst)))
                                                          ? 0x100U
                                                          : 
                                                         ((IData)(
                                                                  (0x6063U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->inst)))
                                                           ? 0x200U
                                                           : 
                                                          ((IData)(
                                                                   (0x4063U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->inst)))
                                                            ? 0x400U
                                                            : 0x800U)))))))))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe1_valid) 
           & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__control_hazard)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
           == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                               == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplier[0U] 
        = (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplier[1U] 
        = (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2 
                   >> 0x20U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplier[2U] 
        = (1U & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                  >> 0xcU) & (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2 
                                      >> 0x3fU))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__y_adder_src1 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__done)
            ? vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__qutient
            : vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_b 
        = ((IData)((0U != (0xeU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is)))
            ? (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2)
            : vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplicand[0U] 
        = (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplicand[1U] 
        = (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
                   >> 0x20U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplicand[2U] 
        = (1U & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                  >> 0xcU) & (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
                                      >> 0x3fU))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__x_adder_src1 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__done)
            ? (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U])))
            : vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__or_result 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
           | vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_equal 
        = ((6U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_equal)) 
           | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber2 
        = ((4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state)) 
           & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__not_jump 
        = (IData)((0U != (0x801U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__c_raddr 
        = ((0x300ULL == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm)
            ? 0U : ((1U & ((0x305ULL == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm) 
                           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                              >> 1U))) ? 1U : ((1U 
                                                & ((0x341ULL 
                                                    == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm) 
                                                   | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                                      >> 2U)))
                                                ? 2U
                                                : 3U)));
    VL_EXTEND_WQ(65,64, __Vtemp524, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1);
    VL_EXTEND_WQ(65,64, __Vtemp525, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_b);
    VL_ADD_W(3, __Vtemp526, __Vtemp524, __Vtemp525);
    VL_EXTEND_WI(65,1, __Vtemp527, (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_cin));
    VL_ADD_W(3, __Vtemp528, __Vtemp526, __Vtemp527);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_cout 
        = (1U & __Vtemp528[2U]);
    VL_EXTEND_WI(65,1, __Vtemp530, (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_cin));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
            + vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_b) 
           + (((QData)((IData)(__Vtemp530[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp530[0U]))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__c_rdata 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr
        [vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__c_raddr];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_equal 
        = ((5U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_equal)) 
           | (2U & ((~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_cout)) 
                    << 1U)));
    if ((0x3fU >= (0x38U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result) 
                            << 3U)))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align 
            = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src2_reg_is 
               << (0x38U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result) 
                            << 3U)));
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align 
            = (((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wmask_reg_is))
                 ? 0xffULL : ((3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wmask_reg_is))
                               ? 0xffffULL : ((0xfU 
                                               == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wmask_reg_is))
                                               ? 0xffffffffULL
                                               : 0xffffffffffffffffULL))) 
               << (0x38U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result) 
                            << 3U)));
    } else {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align = 0ULL;
    }
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rcache_en)
            ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result)
            : ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wcache_en)
                ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result)
                : 0U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache 
        = ((((0x80000000U <= (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result)) 
             & (0x87ffffffU >= (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result))) 
            | ((0x80000000U <= (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result)) 
               & (0x87ffffffU >= (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result)))) 
           & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_wen_reg_is) 
              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_ren_reg_is)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__slt_result 
        = (QData)((IData)((1U & (((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
                                           >> 0x3fU)) 
                                  & (~ (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2 
                                                >> 0x3fU)))) 
                                 | ((~ ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x3fU)) 
                                        ^ (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2 
                                                   >> 0x3fU)))) 
                                    & (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                               >> 0x3fU)))))));
    VL_EXTEND_WQ(65,64, __Vtemp531, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux3____pinNumber3[0U] 
        = (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1 
                   | vlSelf->top_test__DOT__ysyx_22050533_0__DOT__c_rdata));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux3____pinNumber3[1U] 
        = (IData)(((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1 
                    | vlSelf->top_test__DOT__ysyx_22050533_0__DOT__c_rdata) 
                   >> 0x20U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux3____pinNumber3[2U] 
        = (1U | (__Vtemp531[0U] << 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux3____pinNumber3[3U] 
        = ((__Vtemp531[0U] >> 0x1fU) | (__Vtemp531[1U] 
                                        << 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux3____pinNumber3[4U] 
        = ((__Vtemp531[1U] >> 0x1fU) | (__Vtemp531[2U] 
                                        << 1U));
    if ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state))) {
        vlSelf->top_test__DOT__io_sram4_addr = (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                           >> 6U)));
        vlSelf->top_test__DOT__io_sram5_addr = (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                           >> 6U)));
        vlSelf->top_test__DOT__io_sram6_addr = (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                           >> 6U)));
        vlSelf->top_test__DOT__io_sram7_addr = (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                           >> 6U)));
    } else {
        vlSelf->top_test__DOT__io_sram4_addr = (0x3fU 
                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                   >> 6U));
        vlSelf->top_test__DOT__io_sram5_addr = (0x3fU 
                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                   >> 6U));
        vlSelf->top_test__DOT__io_sram6_addr = (0x3fU 
                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                   >> 6U));
        vlSelf->top_test__DOT__io_sram7_addr = (0x3fU 
                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                   >> 6U));
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata2;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0 
            = (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid2));
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_1 = 0U;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__wready2_1 = 0U;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__wready2_0 
            = (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wready2));
    } else {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0 = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0 = 0U;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_1 
            = (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid2));
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__wready2_1 
            = (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wready2));
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__wready2_0 = 0U;
    }
    if ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__wlast 
            = (1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                      ? (8U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__c_awlen))
                      : (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__c_awlen))));
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__wvalid 
            = (1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                      ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wvalid)
                      : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__wvalid)));
    } else {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__wlast = 0U;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__wvalid = 0U;
    }
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__arlen 
        = ((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
            ? 8U : ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                     ? ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                         ? 8U : 1U) : 0U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__ysyx_22050533_mem_read_write_0__wen 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_wen_reg_is) 
           & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__ysyx_22050533_mem_read_write_0__ren 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_ren_reg_is) 
           & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
            ? ((0x3fU >= (0x38U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                   << 3U))) ? (((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                     >> 3U)))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->top_test__DOT__io_sram4_rdata[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__io_sram4_rdata[0U])))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                      >> 3U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top_test__DOT__io_sram4_rdata[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top_test__DOT__io_sram4_rdata[2U])))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                       >> 3U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->top_test__DOT__io_sram5_rdata[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top_test__DOT__io_sram5_rdata[0U])))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                        >> 3U)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top_test__DOT__io_sram5_rdata[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top_test__DOT__io_sram5_rdata[2U])))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                         >> 3U)))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top_test__DOT__io_sram6_rdata[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top_test__DOT__io_sram6_rdata[0U])))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                          >> 3U)))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->top_test__DOT__io_sram6_rdata[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top_test__DOT__io_sram6_rdata[2U])))
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                           >> 3U)))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->top_test__DOT__io_sram7_rdata[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->top_test__DOT__io_sram7_rdata[0U])))
                                                       : 
                                                      (((QData)((IData)(
                                                                        vlSelf->top_test__DOT__io_sram7_rdata[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->top_test__DOT__io_sram7_rdata[2U])))))))))) 
                                               >> (0x38U 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                      << 3U)))
                : 0ULL) : vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld_device);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__alu_result_uw 
        = (((((((((((((((((- (QData)((IData)((0U != 
                                              (3U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is))))) 
                          & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result) 
                         | ((- (QData)((IData)((1U 
                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                                   >> 2U))))) 
                            & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__slt_result)) 
                        | ((- (QData)((IData)((1U & 
                                               (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                                >> 3U))))) 
                           & (QData)((IData)((1U & 
                                              (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_cout))))))) 
                       | ((- (QData)((IData)((1U & 
                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                               >> 4U))))) 
                          & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
                             & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2))) 
                      | ((- (QData)((IData)((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                                   >> 5U))))) 
                         & (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__or_result))) 
                     | ((- (QData)((IData)((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                                  >> 6U))))) 
                        & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__or_result)) 
                    | ((- (QData)((IData)((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                                 >> 7U))))) 
                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
                          ^ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2))) 
                   | ((- (QData)((IData)((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                                >> 8U))))) 
                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
                         << (0x3fU & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2))))) 
                  | ((- (QData)((IData)((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                               >> 9U))))) 
                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
                        >> (0x3fU & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2))))) 
                 | ((- (QData)((IData)((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                              >> 0xaU))))) 
                    & VL_SHIFTRS_QQI(64,64,6, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1, 
                                     (0x3fU & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2))))) 
                | (0xfffffffffffff000ULL & ((- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                                                   >> 0xbU))))) 
                                            & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2))) 
               | ((- (QData)((IData)((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                            >> 0xcU))))) 
                  & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_result_r)) 
              | ((- (QData)((IData)((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                           >> 0xdU))))) 
                 & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_result_r)) 
             | ((- (QData)((IData)((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                          >> 0xeU))))) 
                & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_result_r)) 
            | ((- (QData)((IData)((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                         >> 0xfU))))) 
               & VL_MODDIV_QQQ(64, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2))) 
           | ((- (QData)((IData)((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                        >> 0x10U))))) 
              & VL_MODDIVS_QQQ(64, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_equal 
        = ((3U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_equal)) 
           | (4U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__slt_result) 
                    << 2U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux3____pinNumber3[0U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux3____pinNumber3[1U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__pair_list[0U][2U] 
        = (1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux3____pinNumber3[2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux3____pinNumber3[3U] 
            << 0x1fU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux3____pinNumber3[2U] 
                         >> 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux3____pinNumber3[4U] 
            << 0x1fU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux3____pinNumber3[3U] 
                         >> 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__pair_list[1U][2U] 
        = (1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux3____pinNumber3[4U] 
                 >> 1U));
    vlSelf->top_test__DOT__io_master_rlast = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__c_arlen) 
                                              == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__arlen));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__awvalid 
        = (((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__write_state)) 
            & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__ysyx_22050533_mem_read_write_0__wen)) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe2_valid));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__arvalid 
        = (((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state)) 
            & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__ysyx_22050533_mem_read_write_0__ren)) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe2_valid));
    vlSelf->mem_finish = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache) 
                                  & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state))) 
                                 | (((~ (((0x80000000U 
                                           <= (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result)) 
                                          & (0x87ffffffU 
                                             >= (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result))) 
                                         | ((0x80000000U 
                                             <= (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result)) 
                                            & (0x87ffffffU 
                                               >= (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result))))) 
                                     & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_wen_reg_is) 
                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_ren_reg_is))) 
                                    & (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe2_valid) 
                                        & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache))) 
                                       & (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__ysyx_22050533_mem_read_write_0__ren) 
                                           & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state))) 
                                          | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__ysyx_22050533_mem_read_write_0__wen) 
                                             & (3U 
                                                == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__write_state))))))) 
                                | ((~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_wen_reg_is)) 
                                   & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_ren_reg_is)))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0U] 
        = (IData)((QData)((IData)((0xffU & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld)))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[1U] 
        = (IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld)))) 
                   >> 0x20U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[2U] 
        = (0x40U | ((IData)((((- (QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
                                                             >> 7U)))))) 
                              << 8U) | (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld)))))) 
                    << 7U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[3U] 
        = (((IData)((((- (QData)((IData)((1U & (IData)(
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
                                                        >> 7U)))))) 
                      << 8U) | (QData)((IData)((0xffU 
                                                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld)))))) 
            >> 0x19U) | ((IData)(((((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
                                                                   >> 7U)))))) 
                                    << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld))))) 
                                  >> 0x20U)) << 7U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[4U] 
        = (0x1000U | (((IData)((QData)((IData)((0xffffU 
                                                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld))))) 
                       << 0xeU) | ((IData)(((((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
                                                                             >> 7U)))))) 
                                              << 8U) 
                                             | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld))))) 
                                            >> 0x20U)) 
                                   >> 0x19U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[5U] 
        = (((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld))))) 
            >> 0x12U) | ((IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld)))) 
                                  >> 0x20U)) << 0xeU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[6U] 
        = (0x40000U | (((IData)((((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
                                                                 >> 0xfU)))))) 
                                  << 0x10U) | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld)))))) 
                        << 0x15U) | ((IData)(((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld)))) 
                                              >> 0x20U)) 
                                     >> 0x12U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[7U] 
        = (((IData)((((- (QData)((IData)((1U & (IData)(
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
                                                        >> 0xfU)))))) 
                      << 0x10U) | (QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld)))))) 
            >> 0xbU) | ((IData)(((((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
                                                                  >> 0xfU)))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld))))) 
                                 >> 0x20U)) << 0x15U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[8U] 
        = (0x1000000U | (((IData)((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld))) 
                          << 0x1cU) | ((IData)(((((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
                                                                                >> 0xfU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld))))) 
                                                >> 0x20U)) 
                                       >> 0xbU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[9U] 
        = (((IData)((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld))) 
            >> 4U) | ((IData)(((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld)) 
                               >> 0x20U)) << 0x1cU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
        = (0x40000000U | ((IData)(((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld)) 
                                   >> 0x20U)) >> 4U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
        = ((IData)((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld)))) 
           << 3U);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
        = (((IData)((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld)))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld))) 
                                  >> 0x20U)) << 3U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
        = (0x10U | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld) 
                     << 0xaU) | ((IData)(((((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld))) 
                                          >> 0x20U)) 
                                 >> 0x1dU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
        = (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld) 
            >> 0x16U) | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
                                  >> 0x20U)) << 0xaU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
        = (0x400U | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
                              >> 0x20U)) >> 0x16U));
    VL_EXTEND_WQ(65,64, __Vtemp553, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__alu_result_uw);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__mux1____pinNumber3[0U] 
        = (IData)((((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__alu_result_uw 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__alu_result_uw))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__mux1____pinNumber3[1U] 
        = (IData)(((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__alu_result_uw 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__alu_result_uw))) 
                   >> 0x20U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__mux1____pinNumber3[2U] 
        = (1U | (__Vtemp553[0U] << 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__mux1____pinNumber3[3U] 
        = ((__Vtemp553[0U] >> 0x1fU) | (__Vtemp553[1U] 
                                        << 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
        = ((__Vtemp553[1U] >> 0x1fU) | (__Vtemp553[2U] 
                                        << 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__sel_nextpc 
        = (3U & (((1U & (- (IData)((1U & (((((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is) 
                                                 >> 5U) 
                                                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_equal)) 
                                               | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is) 
                                                   >> 6U) 
                                                  & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_equal)))) 
                                              | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is) 
                                                 >> 3U)) 
                                             | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is) 
                                                 >> 9U) 
                                                & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_equal) 
                                                   >> 1U))) 
                                            | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is) 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_equal) 
                                                  >> 2U))) 
                                           | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is) 
                                               >> 8U) 
                                              & (IData)(
                                                        (2U 
                                                         != 
                                                         (3U 
                                                          & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_equal)))))) 
                                          | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is) 
                                              >> 7U) 
                                             & (IData)(
                                                       (4U 
                                                        != 
                                                        (5U 
                                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_equal)))))))))) 
                  | (2U & (- (IData)((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is) 
                                            >> 4U)))))) 
                 | (- (IData)((IData)((0U != (6U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is))))))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__key_list[0U] 
        = (1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__key_list[1U] 
        = (1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rlast1 
        = ((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
            ? (1U & (IData)(vlSelf->top_test__DOT__io_master_rlast))
            : 0U);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rlast2 
        = ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
            ? (1U & (IData)(vlSelf->top_test__DOT__io_master_rlast))
            : 0U);
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__awvalid2 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__awvalid;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__arvalid2 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__arvalid;
    } else {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__awvalid2 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__awvalid;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__arvalid2 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__arvalid;
    }
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__isu_finish 
        = (((((IData)((0U != (0x6000U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is))) 
              & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_finish)) 
             | ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                 >> 0xcU) & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_finish))) 
            | (~ (IData)((0U != (0x7000U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is))))) 
           & (IData)(vlSelf->mem_finish));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[1U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[3U] 
            << 0x19U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[2U] 
                         >> 7U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[4U] 
            << 0x19U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[3U] 
                         >> 7U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x7fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[4U] 
                    >> 7U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[5U] 
            << 0x12U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[4U] 
                         >> 0xeU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[6U] 
            << 0x12U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[5U] 
                         >> 0xeU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x7fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[6U] 
                    >> 0xeU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[7U] 
            << 0xbU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[6U] 
                        >> 0x15U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[8U] 
            << 0xbU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[7U] 
                        >> 0x15U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x7fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[8U] 
                    >> 0x15U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[9U] 
            << 4U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[8U] 
                      >> 0x1cU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
            << 4U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[9U] 
                      >> 0x1cU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x7fU & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
                     << 4U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
                               >> 0x1cU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
            << 0x1dU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
                         >> 3U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
            << 0x1dU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
                         >> 3U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x7fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
                    >> 3U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
            << 0x16U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
                         >> 0xaU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
            << 0x16U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
                         >> 0xaU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[6U][2U] 
        = (0x7fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
                    >> 0xaU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__mux1____pinNumber3[0U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__mux1____pinNumber3[1U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__pair_list[0U][2U] 
        = (1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__mux1____pinNumber3[2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__mux1____pinNumber3[3U] 
            << 0x1fU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__mux1____pinNumber3[2U] 
                         >> 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
            << 0x1fU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__mux1____pinNumber3[3U] 
                         >> 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__pair_list[1U][2U] 
        = (1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
                 >> 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__sel_nextpc) 
           == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__sel_nextpc) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__sel_nextpc) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__sel_nextpc) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__sel_nextpc) 
                               == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__sel_nextpc) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__sel_nextpc) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__sel_nextpc) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__dnpc_jump_data 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__lut_out;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrs) 
           == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrs) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrs) 
                               == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrs) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__c_wdata 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__lut_out;
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rlast2_0 
            = (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rlast2));
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rlast2_1 = 0U;
    } else {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rlast2_0 = 0U;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rlast2_1 
            = (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rlast2));
    }
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__awvalid 
        = ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
            ? (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__awvalid2))
            : 0U);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__arvalid 
        = (1U & ((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                  ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__arvalid)
                  : ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                      ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__arvalid2)
                      : 0U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe2_valid) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__isu_finish));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in 
        = (1U & ((~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe2_valid)) 
                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__isu_finish)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[1U] 
        = (0x7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[2U] 
        = (0x7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[3U] 
        = (0x7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[4U] 
        = (0x7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[5U] 
        = (0x7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[6U] 
        = (0x7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__key_list[0U] 
        = (1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__key_list[1U] 
        = (1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__pair_list
           [1U][2U]);
    VL_EXTEND_WQ(65,64, __Vtemp613, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__dnpc_jump_data);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux4____pinNumber3[0U] 
        = __Vtemp613[0U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux4____pinNumber3[1U] 
        = __Vtemp613[1U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux4____pinNumber3[2U] 
        = (((IData)((4ULL + vlSelf->cpupc)) << 1U) 
           | __Vtemp613[2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux4____pinNumber3[3U] 
        = (((IData)((4ULL + vlSelf->cpupc)) >> 0x1fU) 
           | ((IData)(((4ULL + vlSelf->cpupc) >> 0x20U)) 
              << 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux4____pinNumber3[4U] 
        = (2U | ((IData)(((4ULL + vlSelf->cpupc) >> 0x20U)) 
                 >> 0x1fU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_allow_in 
        = (1U & ((~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe1_valid)) 
                 | ((~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__control_hazard)) 
                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__l_choose_reg_is) 
           == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__l_choose_reg_is) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__l_choose_reg_is) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__l_choose_reg_is) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__l_choose_reg_is) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__l_choose_reg_is) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__l_choose_reg_is) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__l_choose_reg_is) 
                               == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__l_choose_reg_is) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__l_choose_reg_is) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__l_choose_reg_is) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__l_choose_reg_is) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__l_choose_reg_is) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__l_choose_reg_is) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ram_data 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__w_choose_reg_is) 
           == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__w_choose_reg_is) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__w_choose_reg_is) 
                               == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__w_choose_reg_is) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_result 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__lut_out;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux4____pinNumber3[0U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux4____pinNumber3[1U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__pair_list[0U][2U] 
        = (1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux4____pinNumber3[2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux4____pinNumber3[3U] 
            << 0x1fU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux4____pinNumber3[2U] 
                         >> 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux4____pinNumber3[4U] 
            << 0x1fU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux4____pinNumber3[3U] 
                         >> 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__pair_list[1U][2U] 
        = (1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux4____pinNumber3[4U] 
                 >> 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_reg_finish 
        = ((IData)(vlSelf->inst_update) & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_allow_in));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__key_list[0U] 
        = (1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__key_list[1U] 
        = (1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__not_jump) 
           == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__not_jump) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__not_jump) 
                               == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__not_jump) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__dnpc_0 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__lut_out;
    VL_EXTEND_WQ(65,64, __Vtemp642, vlSelf->cpupc);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber3[0U] 
        = (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__dnpc_0);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber3[1U] 
        = (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__dnpc_0 
                   >> 0x20U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber3[2U] 
        = (1U | (__Vtemp642[0U] << 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber3[3U] 
        = ((__Vtemp642[0U] >> 0x1fU) | (__Vtemp642[1U] 
                                        << 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber3[4U] 
        = ((__Vtemp642[1U] >> 0x1fU) | (__Vtemp642[2U] 
                                        << 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber3[0U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber3[1U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__pair_list[0U][2U] 
        = (1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber3[2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber3[3U] 
            << 0x1fU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber3[2U] 
                         >> 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber3[4U] 
            << 0x1fU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber3[3U] 
                         >> 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__pair_list[1U][2U] 
        = (1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber3[4U] 
                 >> 1U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__key_list[0U] 
        = (1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__key_list[1U] 
        = (1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber2) 
           == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber2) 
              == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber2) 
                               == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__lut_out 
        = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber2) 
                                  == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->dnpc = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__lut_out;
}

void Vtop_test___024root___sequent__TOP__1(Vtop_test___024root* vlSelf);

void Vtop_test___024root___eval(Vtop_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_test___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop_test___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop_test___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vtop_test___024root___change_request_1(Vtop_test___024root* vlSelf);

VL_INLINE_OPT QData Vtop_test___024root___change_request(Vtop_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_test___024root___change_request\n"); );
    // Body
    return (Vtop_test___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop_test___024root___change_request_1(Vtop_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_test___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop_test___024root___eval_debug_assertions(Vtop_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_test___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
